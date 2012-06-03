/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFService.h"
#import "DoodleJump-Structs.h"

@class OFCloudStorageStatus_Ok, OFCloudStorageStatus_InsufficientStorage, OFCloudStorageStatus_GatewayTimeout, OFCloudStorageStatus_NotFound, OFCloudStorageStatus_NotAcceptable;

__attribute__((visibility("hidden")))
@interface OFCloudStorageService : OFService {
	OFPointer<OFHttpService> mS3HttpService;
	BOOL mUseCompression;
	BOOL mVerboseCompression;
	BOOL mUseLegacyHeaderlessCompression;
	OFCloudStorageStatus_Ok* mStatusOk;
	OFCloudStorageStatus_NotAcceptable* mStatusNotAcceptable;
	OFCloudStorageStatus_NotFound* mStatusNotFound;
	OFCloudStorageStatus_GatewayTimeout* mStatusGatewayTimeout;
	OFCloudStorageStatus_InsufficientStorage* mStatusInsufficientStorage;
}
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(id)getIndexOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(id)uploadBlob:(id)blob withKey:(id)key onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(id)downloadBlobWithKey:(id)key onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(BOOL)keyIsValid:(id)valid;
+(BOOL)charIsAlpha:(unsigned short)alpha;
+(BOOL)charIsNum:(unsigned short)num;
+(BOOL)charIsPunctAllowedInKey:(unsigned short)key;
+(id)downloadS3Blob:(id)blob onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(id)downloadS3Blob:(id)blob passThroughUserData:(id)data onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)uploadS3Blob:(id)blob withParameters:(id)parameters onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)uploadS3Blob:(id)blob withParameters:(id)parameters passThroughUserData:(id)data onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(id)compressBlob:(id)blob;
+(id)uncompressBlob:(id)blob;
-(id)init;
-(id)getStatusObject_Ok;
-(id)getStatusObject_NotAcceptable;
-(id)getStatusObject_NotFound;
-(id)getStatusObject_GatewayTimeout;
-(id)getStatusObject_InsufficientStorage;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
-(void)onUploadFailure:(id)failure nextCall:(id)call;
-(void)onBlobDownloaded:(id)downloaded nextCall:(id)call;
-(void)onDownloadFailure:(id)failure nextCall:(id)call;
-(void)onS3BlobDownloaded:(id)downloaded nextCall:(id)call;
-(OFHttpService*)getS3HttpService;
-(void)disableCompression;
-(BOOL)isCompressionEnabled;
-(void)enableVeboseCompression;
-(BOOL)isVerboseCompressionEnabled;
-(void)useLegacyHeaderlessCompression;
-(BOOL)isUsingLegacyHeaderlessCompression;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end
