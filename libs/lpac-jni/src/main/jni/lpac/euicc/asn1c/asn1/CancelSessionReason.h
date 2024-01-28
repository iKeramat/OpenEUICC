/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CancelSessionReason_H_
#define	_CancelSessionReason_H_


#include "asn_application.h"

/* Including external dependencies */
#include "INTEGER.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CancelSessionReason {
	CancelSessionReason_endUserRejection	= 0,
	CancelSessionReason_postponed	= 1,
	CancelSessionReason_timeout	= 2,
	CancelSessionReason_pprNotAllowed	= 3
} e_CancelSessionReason;

/* CancelSessionReason */
typedef INTEGER_t	 CancelSessionReason_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CancelSessionReason;
asn_struct_free_f CancelSessionReason_free;
asn_struct_print_f CancelSessionReason_print;
asn_constr_check_f CancelSessionReason_constraint;
ber_type_decoder_f CancelSessionReason_decode_ber;
der_type_encoder_f CancelSessionReason_encode_der;
xer_type_decoder_f CancelSessionReason_decode_xer;
xer_type_encoder_f CancelSessionReason_encode_xer;
oer_type_decoder_f CancelSessionReason_decode_oer;
oer_type_encoder_f CancelSessionReason_encode_oer;
per_type_decoder_f CancelSessionReason_decode_uper;
per_type_encoder_f CancelSessionReason_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CancelSessionReason_H_ */
#include "asn_internal.h"
