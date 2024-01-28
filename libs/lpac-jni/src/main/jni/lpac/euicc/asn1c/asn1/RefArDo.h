/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RefArDo_H_
#define	_RefArDo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RefArDo */
typedef struct RefArDo {
	struct RefArDo__refDo {
		OCTET_STRING_t	 deviceAppIdRefDo;
		OCTET_STRING_t	*pkgRefDo	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} refDo;
	struct RefArDo__arDo {
		OCTET_STRING_t	 permArDo;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} arDo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RefArDo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RefArDo;
extern asn_SEQUENCE_specifics_t asn_SPC_RefArDo_specs_1;
extern asn_TYPE_member_t asn_MBR_RefArDo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RefArDo_H_ */
#include "asn_internal.h"
