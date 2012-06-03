/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface FlurryAnalytics : XXUnknownSuperclass {
}
+(BOOL)sendUsageInfo;
+(id)appVersion;
+(id)serverURL;
+(id)savedResponseURL;
+(BOOL)udidEnabled;
+(void)setShowErrorInLogEnabled:(BOOL)logEnabled;
+(void)setAge:(int)age;
+(void)setGender:(id)gender;
+(void)setSessionReportsOnPauseEnabled:(BOOL)enabled;
+(void)setSessionReportsOnCloseEnabled:(BOOL)enabled;
+(void)setSecureTransportEnabled:(BOOL)enabled;
+(void)setServerURL:(id)url;
+(void)setSavedResponseURL:(id)url;
+(void)setEventLoggingEnabled:(BOOL)enabled;
+(void)setUserID:(id)anId;
+(void)logPageView;
+(void)logAllPageViews:(id)views;
+(void)logError:(id)error message:(id)message error:(id)error3;
+(void)logError:(id)error message:(id)message exception:(id)exception;
+(void)endTimedEvent:(id)event withParameters:(id)parameters;
+(void)logEvent:(id)event withParameters:(id)parameters timed:(BOOL)timed;
+(void)logEvent:(id)event timed:(BOOL)timed;
+(void)logEvent:(id)event withParameters:(id)parameters;
+(void)logEvent:(id)event;
+(void)resumeSession;
+(void)stopBackgroundTask;
+(void)pauseSession;
+(void)endSession;
+(void)setLatitude:(double)latitude longitude:(double)longitude horizontalAccuracy:(float)accuracy verticalAccuracy:(float)accuracy4;
+(void)startSession:(id)session;
+(void)createAndSendSession;
+(void)setMaxSessionsSaved:(int)saved;
+(void)setSessionContinueSeconds:(int)seconds;
+(BOOL)reEngageEnabled;
+(BOOL)appSpotEnabled;
+(BOOL)videoAdsEnabled;
+(BOOL)appCircleEnabled;
+(void)setReEngageEnabled:(BOOL)enabled;
+(void)setAppSpotEnabled:(BOOL)enabled;
+(void)setVideoAdsEnabled:(BOOL)enabled;
+(void)setAppCircleEnabled:(BOOL)enabled;
+(void)setDebugLogEnabled:(BOOL)enabled;
+(id)getFlurryAgentVersion;
+(void)setAppVersion:(id)version;
@end

