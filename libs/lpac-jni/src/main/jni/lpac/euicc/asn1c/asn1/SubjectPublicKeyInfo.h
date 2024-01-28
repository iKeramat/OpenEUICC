/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../../../asn1/PKIXExplicit88.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_SubjectPublicKeyInfo_H_
#define	_SubjectPublicKeyInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "AlgorithmIdentifier.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SubjectPublicKeyInfo */
typedef struct SubjectPublicKeyInfo {
	AlgorithmIdentifier_t	 algorithm;
	BIT_STRING_t	 subjectPublicKey;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubjectPublicKeyInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubjectPublicKeyInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_SubjectPublicKeyInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SubjectPublicKeyInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SubjectPublicKeyInfo_H_ */
#include "asn_internal.h"
