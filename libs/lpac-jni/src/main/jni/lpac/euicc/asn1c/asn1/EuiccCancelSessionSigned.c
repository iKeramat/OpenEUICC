/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "EuiccCancelSessionSigned.h"

asn_TYPE_member_t asn_MBR_EuiccCancelSessionSigned_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EuiccCancelSessionSigned, transactionId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransactionId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transactionId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EuiccCancelSessionSigned, smdpOid),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"smdpOid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EuiccCancelSessionSigned, reason),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CancelSessionReason,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reason"
		},
};
static const ber_tlv_tag_t asn_DEF_EuiccCancelSessionSigned_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EuiccCancelSessionSigned_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transactionId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* smdpOid */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* reason */
};
asn_SEQUENCE_specifics_t asn_SPC_EuiccCancelSessionSigned_specs_1 = {
	sizeof(struct EuiccCancelSessionSigned),
	offsetof(struct EuiccCancelSessionSigned, _asn_ctx),
	asn_MAP_EuiccCancelSessionSigned_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EuiccCancelSessionSigned = {
	"EuiccCancelSessionSigned",
	"EuiccCancelSessionSigned",
	&asn_OP_SEQUENCE,
	asn_DEF_EuiccCancelSessionSigned_tags_1,
	sizeof(asn_DEF_EuiccCancelSessionSigned_tags_1)
		/sizeof(asn_DEF_EuiccCancelSessionSigned_tags_1[0]), /* 1 */
	asn_DEF_EuiccCancelSessionSigned_tags_1,	/* Same as above */
	sizeof(asn_DEF_EuiccCancelSessionSigned_tags_1)
		/sizeof(asn_DEF_EuiccCancelSessionSigned_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EuiccCancelSessionSigned_1,
	3,	/* Elements count */
	&asn_SPC_EuiccCancelSessionSigned_specs_1	/* Additional specs */
};

