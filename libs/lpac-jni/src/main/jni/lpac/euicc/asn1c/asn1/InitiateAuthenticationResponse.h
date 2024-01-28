/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_InitiateAuthenticationResponse_H_
#define	_InitiateAuthenticationResponse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "InitiateAuthenticationOkEs9.h"
#include "INTEGER.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitiateAuthenticationResponse_PR {
	InitiateAuthenticationResponse_PR_NOTHING,	/* No components present */
	InitiateAuthenticationResponse_PR_initiateAuthenticationOk,
	InitiateAuthenticationResponse_PR_initiateAuthenticationError
	/* Extensions may appear below */
	
} InitiateAuthenticationResponse_PR;
typedef enum InitiateAuthenticationResponse__initiateAuthenticationError {
	InitiateAuthenticationResponse__initiateAuthenticationError_invalidDpAddress	= 1,
	InitiateAuthenticationResponse__initiateAuthenticationError_euiccVersionNotSupportedByDp	= 2,
	InitiateAuthenticationResponse__initiateAuthenticationError_ciPKNotSupported	= 3
} e_InitiateAuthenticationResponse__initiateAuthenticationError;

/* InitiateAuthenticationResponse */
typedef struct InitiateAuthenticationResponse {
	InitiateAuthenticationResponse_PR present;
	union InitiateAuthenticationResponse_u {
		InitiateAuthenticationOkEs9_t	 initiateAuthenticationOk;
		INTEGER_t	 initiateAuthenticationError;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiateAuthenticationResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiateAuthenticationResponse;
extern asn_CHOICE_specifics_t asn_SPC_InitiateAuthenticationResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_InitiateAuthenticationResponse_1[2];
extern asn_per_constraints_t asn_PER_type_InitiateAuthenticationResponse_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _InitiateAuthenticationResponse_H_ */
#include "asn_internal.h"
