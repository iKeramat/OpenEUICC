/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "AuthenticateClientResponseEs11.h"

static asn_oer_constraints_t asn_OER_type_AuthenticateClientResponseEs11_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_AuthenticateClientResponseEs11_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AuthenticateClientResponseEs11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AuthenticateClientResponseEs11, choice.authenticateClientOk),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AuthenticateClientOkEs11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"authenticateClientOk"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AuthenticateClientResponseEs11, choice.authenticateClientError),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"authenticateClientError"
		},
};
static const ber_tlv_tag_t asn_DEF_AuthenticateClientResponseEs11_tags_1[] = {
	(ASN_TAG_CLASS_CONTEXT | (64 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AuthenticateClientResponseEs11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* authenticateClientOk */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* authenticateClientError */
};
asn_CHOICE_specifics_t asn_SPC_AuthenticateClientResponseEs11_specs_1 = {
	sizeof(struct AuthenticateClientResponseEs11),
	offsetof(struct AuthenticateClientResponseEs11, _asn_ctx),
	offsetof(struct AuthenticateClientResponseEs11, present),
	sizeof(((struct AuthenticateClientResponseEs11 *)0)->present),
	asn_MAP_AuthenticateClientResponseEs11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_AuthenticateClientResponseEs11 = {
	"AuthenticateClientResponseEs11",
	"AuthenticateClientResponseEs11",
	&asn_OP_CHOICE,
	asn_DEF_AuthenticateClientResponseEs11_tags_1,
	sizeof(asn_DEF_AuthenticateClientResponseEs11_tags_1)
		/sizeof(asn_DEF_AuthenticateClientResponseEs11_tags_1[0]), /* 1 */
	asn_DEF_AuthenticateClientResponseEs11_tags_1,	/* Same as above */
	sizeof(asn_DEF_AuthenticateClientResponseEs11_tags_1)
		/sizeof(asn_DEF_AuthenticateClientResponseEs11_tags_1[0]), /* 1 */
	{ &asn_OER_type_AuthenticateClientResponseEs11_constr_1, &asn_PER_type_AuthenticateClientResponseEs11_constr_1, CHOICE_constraint },
	asn_MBR_AuthenticateClientResponseEs11_1,
	2,	/* Elements count */
	&asn_SPC_AuthenticateClientResponseEs11_specs_1	/* Additional specs */
};

