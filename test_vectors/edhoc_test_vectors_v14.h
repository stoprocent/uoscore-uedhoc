#ifndef EDHOC_TEST_VECTORS_V14
#define EDHOC_TEST_VECTORS_V14

#include <stdint.h>
#include <edhoc.h>

enum method_type T1_METHOD = (enum method_type)0x00;

uint8_t T1_SUITE_I[] = { 0x00 };
uint8_t T1_SUITE_R[] = { 0x00 };

/*Initiator's ephemeral private key*/
uint8_t T1_X[] = { 0x89, 0x2e, 0xc2, 0x8e, 0x5c, 0xb6, 0x66, 0x91,
		   0x08, 0x47, 0x05, 0x39, 0x50, 0x0b, 0x70, 0x5e,
		   0x60, 0xd0, 0x08, 0xd3, 0x47, 0xc5, 0x81, 0x7e,
		   0xe9, 0xf3, 0x32, 0x7c, 0x8a, 0x87, 0xbb, 0x03 };

/*Initiator's ephemeral public key*/
uint8_t T1_G_X[] = { 0x31, 0xf8, 0x2c, 0x7b, 0x5b, 0x9c, 0xbb, 0xf0,
		     0xf1, 0x94, 0xd9, 0x13, 0xcc, 0x12, 0xef, 0x15,
		     0x32, 0xd3, 0x28, 0xef, 0x32, 0x63, 0x2a, 0x48,
		     0x81, 0xa1, 0xc0, 0x70, 0x1e, 0x23, 0x7f, 0x04 };

uint8_t T1_C_I[] = { 0x2d };
uint8_t T1_EAD_1[] = {};
uint8_t T1_EAD_2[] = {};
uint8_t T1_EAD_3[] = {};
uint8_t T1_EAD_4[] = {};

/*Responder's ephemeral private key*/
uint8_t T1_Y[] = { 0xe6, 0x9c, 0x23, 0xfb, 0xf8, 0x1b, 0xc4, 0x35,
		   0x94, 0x24, 0x46, 0x83, 0x7f, 0xe8, 0x27, 0xbf,
		   0x20, 0x6c, 0x8f, 0xa1, 0x0a, 0x39, 0xdb, 0x47,
		   0x44, 0x9e, 0x5a, 0x81, 0x34, 0x21, 0xe1, 0xe8 };

/*Responder's ephemeral public key*/
uint8_t T1_G_Y[] = { 0xdc, 0x88, 0xd2, 0xd5, 0x1d, 0xa5, 0xed, 0x67,
		     0xfc, 0x46, 0x16, 0x35, 0x6b, 0xc8, 0xca, 0x74,
		     0xef, 0x9e, 0xbe, 0x8b, 0x38, 0x7e, 0x62, 0x3a,
		     0x36, 0x0b, 0xa4, 0x80, 0xb9, 0xb2, 0x9d, 0x1c };

/*Responder's private authentication key*/
uint8_t T1_SK_R[] = { 0xef, 0x14, 0x0f, 0xf9, 0x00, 0xb0, 0xab, 0x03,
		      0xf0, 0xc0, 0x8d, 0x87, 0x9c, 0xbb, 0xd4, 0xb3,
		      0x1e, 0xa7, 0x1e, 0x6e, 0x7e, 0xe7, 0xff, 0xcb,
		      0x7e, 0x79, 0x55, 0x77, 0x7a, 0x33, 0x27, 0x99 };

/*Responders's public authentication key*/
uint8_t T1_PK_R[] = { 0xa1, 0xdb, 0x47, 0xb9, 0x51, 0x84, 0x85, 0x4a,
		      0xd1, 0x2a, 0x0c, 0x1a, 0x35, 0x4e, 0x41, 0x8a,
		      0xac, 0xe3, 0x3a, 0xa0, 0xf2, 0xc6, 0x62, 0xc0,
		      0x0b, 0x3a, 0xc5, 0x5d, 0xe9, 0x2f, 0x93, 0x59 };

/*Initiator's private authentication key*/
uint8_t T1_SK_I[] = { 0x4c, 0x5b, 0x25, 0x87, 0x8f, 0x50, 0x7c, 0x6b,
		      0x9d, 0xae, 0x68, 0xfb, 0xd4, 0xfd, 0x3f, 0xf9,
		      0x97, 0x53, 0x3d, 0xb0, 0xaf, 0x00, 0xb2, 0x5d,
		      0x32, 0x4e, 0xa2, 0x8e, 0x6c, 0x21, 0x3b, 0xc8 };

uint8_t T1_PK_I[] = { 0xed, 0x06, 0xa8, 0xae, 0x61, 0xa8, 0x29, 0xba,
		      0x5f, 0xa5, 0x45, 0x25, 0xc9, 0xd0, 0x7f, 0x48,
		      0xdd, 0x44, 0xa3, 0x02, 0xf4, 0x3e, 0x0f, 0x23,
		      0xd8, 0xcc, 0x20, 0xb7, 0x30, 0x85, 0x14, 0x1e };

uint8_t T1_C_R[] = { 0x18 };

uint8_t T1_ID_CRED_R[] = { 0xa1, 0x18, 0x22, 0x82, 0x2e, 0x48, 0x79,
			   0xf2, 0xa4, 0x1b, 0x51, 0x0c, 0x1f, 0x9b };

uint8_t T1_ID_CRED_I[] = { 0xa1, 0x18, 0x22, 0x82, 0x2e, 0x48, 0xc2,
			   0x4a, 0xb2, 0xfd, 0x76, 0x43, 0xc7, 0x9f };

uint8_t T1_CRED_I[] = {
	0x30, 0x81, 0xee, 0x30, 0x81, 0xa1, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02,
	0x04, 0x62, 0x31, 0x9e, 0xa0, 0x30, 0x05, 0x06, 0x03, 0x2b, 0x65, 0x70,
	0x30, 0x1d, 0x31, 0x1b, 0x30, 0x19, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c,
	0x12, 0x45, 0x44, 0x48, 0x4f, 0x43, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20,
	0x45, 0x64, 0x32, 0x35, 0x35, 0x31, 0x39, 0x30, 0x1e, 0x17, 0x0d, 0x32,
	0x32, 0x30, 0x33, 0x31, 0x36, 0x30, 0x38, 0x32, 0x34, 0x30, 0x30, 0x5a,
	0x17, 0x0d, 0x32, 0x39, 0x31, 0x32, 0x33, 0x31, 0x32, 0x33, 0x30, 0x30,
	0x30, 0x30, 0x5a, 0x30, 0x22, 0x31, 0x20, 0x30, 0x1e, 0x06, 0x03, 0x55,
	0x04, 0x03, 0x0c, 0x17, 0x45, 0x44, 0x48, 0x4f, 0x43, 0x20, 0x49, 0x6e,
	0x69, 0x74, 0x69, 0x61, 0x74, 0x6f, 0x72, 0x20, 0x45, 0x64, 0x32, 0x35,
	0x35, 0x31, 0x39, 0x30, 0x2a, 0x30, 0x05, 0x06, 0x03, 0x2b, 0x65, 0x70,
	0x03, 0x21, 0x00, 0xed, 0x06, 0xa8, 0xae, 0x61, 0xa8, 0x29, 0xba, 0x5f,
	0xa5, 0x45, 0x25, 0xc9, 0xd0, 0x7f, 0x48, 0xdd, 0x44, 0xa3, 0x02, 0xf4,
	0x3e, 0x0f, 0x23, 0xd8, 0xcc, 0x20, 0xb7, 0x30, 0x85, 0x14, 0x1e, 0x30,
	0x05, 0x06, 0x03, 0x2b, 0x65, 0x70, 0x03, 0x41, 0x00, 0x52, 0x12, 0x41,
	0xd8, 0xb3, 0xa7, 0x70, 0x99, 0x6b, 0xcf, 0xc9, 0xb9, 0xea, 0xd4, 0xe7,
	0xe0, 0xa1, 0xc0, 0xdb, 0x35, 0x3a, 0x3b, 0xdf, 0x29, 0x10, 0xb3, 0x92,
	0x75, 0xae, 0x48, 0xb7, 0x56, 0x01, 0x59, 0x81, 0x85, 0x0d, 0x27, 0xdb,
	0x67, 0x34, 0xe3, 0x7f, 0x67, 0x21, 0x22, 0x67, 0xdd, 0x05, 0xee, 0xff,
	0x27, 0xb9, 0xe7, 0xa8, 0x13, 0xfa, 0x57, 0x4b, 0x72, 0xa0, 0x0b, 0x43,
	0x0b
};

uint8_t T1_CRED_R[] = {
	0x30, 0x81, 0xEE, 0x30, 0x81, 0xA1, 0xA0, 0x03, 0x02, 0x01, 0x02, 0x02,
	0x04, 0x62, 0x31, 0x9E, 0xC4, 0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70,
	0x30, 0x1D, 0x31, 0x1B, 0x30, 0x19, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0C,
	0x12, 0x45, 0x44, 0x48, 0x4F, 0x43, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x20,
	0x45, 0x64, 0x32, 0x35, 0x35, 0x31, 0x39, 0x30, 0x1E, 0x17, 0x0D, 0x32,
	0x32, 0x30, 0x33, 0x31, 0x36, 0x30, 0x38, 0x32, 0x34, 0x33, 0x36, 0x5A,
	0x17, 0x0D, 0x32, 0x39, 0x31, 0x32, 0x33, 0x31, 0x32, 0x33, 0x30, 0x30,
	0x30, 0x30, 0x5A, 0x30, 0x22, 0x31, 0x20, 0x30, 0x1E, 0x06, 0x03, 0x55,
	0x04, 0x03, 0x0C, 0x17, 0x45, 0x44, 0x48, 0x4F, 0x43, 0x20, 0x52, 0x65,
	0x73, 0x70, 0x6F, 0x6E, 0x64, 0x65, 0x72, 0x20, 0x45, 0x64, 0x32, 0x35,
	0x35, 0x31, 0x39, 0x30, 0x2A, 0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70,
	0x03, 0x21, 0x00, 0xA1, 0xDB, 0x47, 0xB9, 0x51, 0x84, 0x85, 0x4A, 0xD1,
	0x2A, 0x0C, 0x1A, 0x35, 0x4E, 0x41, 0x8A, 0xAC, 0xE3, 0x3A, 0xA0, 0xF2,
	0xC6, 0x62, 0xC0, 0x0B, 0x3A, 0xC5, 0x5D, 0xE9, 0x2F, 0x93, 0x59, 0x30,
	0x05, 0x06, 0x03, 0x2B, 0x65, 0x70, 0x03, 0x41, 0x00, 0xB7, 0x23, 0xBC,
	0x01, 0xEA, 0xB0, 0x92, 0x8E, 0x8B, 0x2B, 0x6C, 0x98, 0xDE, 0x19, 0xCC,
	0x38, 0x23, 0xD4, 0x6E, 0x7D, 0x69, 0x87, 0xB0, 0x32, 0x47, 0x8F, 0xEC,
	0xFA, 0xF1, 0x45, 0x37, 0xA1, 0xAF, 0x14, 0xCC, 0x8B, 0xE8, 0x29, 0xC6,
	0xB7, 0x30, 0x44, 0x10, 0x18, 0x37, 0xEB, 0x4A, 0xBC, 0x94, 0x95, 0x65,
	0xD8, 0x6D, 0xCE, 0x51, 0xCF, 0xAE, 0x52, 0xAB, 0x82, 0xC1, 0x52, 0xCB,
	0x02
};

uint8_t T1_PRK_OUT[] = { 0x2d, 0x6d, 0xb7, 0xaf, 0xa2, 0xe8, 0x72, 0xe2,
			 0x31, 0x65, 0x19, 0x63, 0x03, 0xe2, 0xf4, 0x56,
			 0x71, 0x40, 0x81, 0xab, 0x90, 0x81, 0x1e, 0x29,
			 0x26, 0xd7, 0x28, 0x3a, 0x3f, 0x49, 0xf1, 0xac };

uint8_t T1_PRK_EXPORTER[] = { 0xea, 0xf9, 0x12, 0xd6, 0x9a, 0x96, 0x68, 0x59,
			      0xf0, 0xe6, 0x9b, 0xc0, 0xfd, 0x16, 0xa4, 0xb9,
			      0x5b, 0xbd, 0x9b, 0x6c, 0xbe, 0x2c, 0x52, 0x5b,
			      0xd2, 0x3f, 0xd4, 0x7f, 0x34, 0x05, 0x9e, 0x10 };

uint8_t T1_OSCORE_MASTER_SECRET[] = { 0xd6, 0xdd, 0x09, 0xb1, 0x37, 0x35,
				      0x9f, 0x0a, 0xd2, 0x15, 0xdd, 0x02,
				      0x19, 0x62, 0xc0, 0x5c };

uint8_t T1_OSCORE_MASTER_SALT[] = { 0x87, 0xB3, 0xEB, 0xBB,
				    0xE1, 0x7E, 0xB4, 0xB9 };

uint8_t T1_KEY_UPDATE_CONTEXT[] = { 0xd6, 0xbe, 0x16, 0x96, 0x02, 0xb8,
				    0xbc, 0xea, 0xa0, 0x11, 0x58, 0xfd,
				    0xb8, 0x20, 0x89, 0x0c };
uint8_t T1_PRK_OUT_NEW[] = { 0x6f, 0xa6, 0xee, 0x2f, 0xfb, 0xf3, 0x80, 0x5b,
			     0xd1, 0xd8, 0xab, 0x59, 0x0b, 0x89, 0x32, 0xa2,
			     0x05, 0xaf, 0xf6, 0xa5, 0xfa, 0x79, 0x4b, 0x1d,
			     0xe9, 0x3c, 0x57, 0xaf, 0xa9, 0x63, 0x8f, 0xb3 };

#endif