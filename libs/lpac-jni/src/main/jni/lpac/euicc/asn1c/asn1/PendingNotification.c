/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "PendingNotification.h"

static asn_oer_constraints_t asn_OER_type_PendingNotification_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PendingNotification_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PendingNotification_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PendingNotification, choice.profileInstallationResult),
		(ASN_TAG_CLASS_CONTEXT | (55 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProfileInstallationResult,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profileInstallationResult"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PendingNotification, choice.otherSignedNotification),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_OtherSignedNotification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherSignedNotification"
		},
};
static const unsigned asn_MAP_PendingNotification_to_canonical_1[] = { 1, 0 };
static const unsigned asn_MAP_PendingNotification_from_canonical_1[] = { 1, 0 };
static const asn_TYPE_tag2member_t asn_MAP_PendingNotification_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* otherSignedNotification */
    { (ASN_TAG_CLASS_CONTEXT | (55 << 2)), 0, 0, 0 } /* profileInstallationResult */
};
asn_CHOICE_specifics_t asn_SPC_PendingNotification_specs_1 = {
	sizeof(struct PendingNotification),
	offsetof(struct PendingNotification, _asn_ctx),
	offsetof(struct PendingNotification, present),
	sizeof(((struct PendingNotification *)0)->present),
	asn_MAP_PendingNotification_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PendingNotification_to_canonical_1,
	asn_MAP_PendingNotification_from_canonical_1,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PendingNotification = {
	"PendingNotification",
	"PendingNotification",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_PendingNotification_constr_1, &asn_PER_type_PendingNotification_constr_1, CHOICE_constraint },
	asn_MBR_PendingNotification_1,
	2,	/* Elements count */
	&asn_SPC_PendingNotification_specs_1	/* Additional specs */
};

