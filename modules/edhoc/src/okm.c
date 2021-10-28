/*
   Copyright (c) 2021 Fraunhofer AISEC. See the COPYRIGHT
   file at the top-level directory of this distribution.

   Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
   http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
   <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
   option. This file may not be copied, modified, or distributed
   except according to those terms.
*/
#include "../edhoc.h"
#include "../inc/crypto_wrapper.h"
#include "../inc/error.h"
#include "../inc/hkdf_info.h"
#include "../inc/print_util.h"

enum edhoc_error okm_calc(enum hash_alg hash_alg, const uint8_t *prk,
			  uint8_t prk_len, const uint8_t *th, uint8_t th_len,
			  const char *label, uint8_t *context,
			  uint32_t context_len, uint8_t *okm, uint64_t okm_len)
{
	uint8_t info[INFO_DEFAULT_SIZE];
	uint8_t info_len = sizeof(info);

	TRY(create_hkdf_info(th, th_len, label, context, context_len, okm_len,
			     (uint8_t *)&info, &info_len));
	PRINT_ARRAY("info", info, info_len);
	TRY(hkdf_expand(hash_alg, prk, prk_len, (uint8_t *)&info, info_len, okm,
			okm_len));
	return edhoc_no_error;
}
