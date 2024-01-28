/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ListNotificationResponse_H_
#define	_ListNotificationResponse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "INTEGER.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ListNotificationResponse_PR {
	ListNotificationResponse_PR_NOTHING,	/* No components present */
	ListNotificationResponse_PR_notificationMetadataList,
	ListNotificationResponse_PR_listNotificationsResultError
	/* Extensions may appear below */
	
} ListNotificationResponse_PR;
typedef enum ListNotificationResponse__listNotificationsResultError {
	ListNotificationResponse__listNotificationsResultError_undefinedError	= 127
} e_ListNotificationResponse__listNotificationsResultError;

/* Forward declarations */
struct NotificationMetadata;

/* ListNotificationResponse */
typedef struct ListNotificationResponse {
	ListNotificationResponse_PR present;
	union ListNotificationResponse_u {
		struct ListNotificationResponse__notificationMetadataList {
			A_SEQUENCE_OF(struct NotificationMetadata) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} notificationMetadataList;
		INTEGER_t	 listNotificationsResultError;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ListNotificationResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ListNotificationResponse;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NotificationMetadata.h"

#endif	/* _ListNotificationResponse_H_ */
#include "asn_internal.h"
