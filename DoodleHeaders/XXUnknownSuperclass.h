/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class OFWebNavController;

@interface XXUnknownSuperclass (MGTwitterEngineExtensions)
-(id)MGTE_dictionaryByRemovingObjectForKey:(id)key;
@end

@interface XXUnknownSuperclass (OAuthExtensions)
-(void)prepare;
@end

@interface XXUnknownSuperclass (Base64)
+(id)dataWithBase64EncodedString:(id)base64EncodedString;
-(id)initWithBase64EncodedString:(id)base64EncodedString;
-(id)base64EncodingWithLineLength:(unsigned)lineLength;
@end

@interface XXUnknownSuperclass (UUID)
+(id)stringWithNewUUID;
@end

@interface XXUnknownSuperclass (OAParameterAdditions)
-(id)parameters;
-(void)setParameters:(id)parameters;
@end

@interface XXUnknownSuperclass (OAURLEncodingAdditions)
-(id)URLEncodedString;
-(id)URLDecodedString;
@end

@interface XXUnknownSuperclass (OABaseAdditions)
-(id)URLStringWithoutQuery;
@end

@interface XXUnknownSuperclass (PortraitOnly)
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
@end

@interface XXUnknownSuperclass (ViewMessages)
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
@end

@interface XXUnknownSuperclass (NSObject_SBJSON)
-(id)JSONFragment;
-(id)JSONRepresentation;
@end

@interface XXUnknownSuperclass (NSString_SBJSON)
-(id)JSONFragmentValue;
-(id)JSONValue;
@end

@interface XXUnknownSuperclass (MemoryLeakWorkaround)
-(void)drawAsPatternInRectNoMemLeak:(CGRect)rectNoMemLeak;
@end

@interface XXUnknownSuperclass (TabBar)
-(void)setBadgeValue:(id)value;
-(id)owningTabBarItem;
-(void)setOwningTabBarItem:(id)item;
@end

@interface XXUnknownSuperclass (WeakLinking)
-(SEL)findSelectorForProperty:(objc_property*)property named:(id)named forReading:(bool)reading;
-(SEL)findSelectorForPropertyNamed:(id)propertyNamed forReading:(bool)reading;
-(bool)tryGet:(id)get outObject:(id*)object;
-(bool)trySet:(id)set withValue:(id)value;
-(id)tryGet:(id)get elseGet:(id)get2;
-(void)trySet:(id)set with:(id)with elseSet:(id)set3 with:(id)with4;
-(void)trySet:(id)set elseSet:(id)set2 with:(id)with;
@end

@interface XXUnknownSuperclass (OpenFeint)
-(double)OFdistanceFromLocation:(const id)location;
@end

@interface XXUnknownSuperclass (OpenFeint)
+(id)httpFormatter;
+(id)railsFormatter;
+(id)railsLocalDateFormatter;
+(id)normalFormatter;
@end

@interface XXUnknownSuperclass (OpenFeint)
+(id)invocationWithTarget:(id)target andSelector:(SEL)selector;
+(id)invocationWithTarget:(id)target andSelector:(SEL)selector andArguments:(void*)arguments;
@end

@interface XXUnknownSuperclass (OpenFeint)
-(id)sha1;
@end

@interface XXUnknownSuperclass (OpenFeint)
-(void)OFhideStatusBar:(BOOL)bar animated:(BOOL)animated;
@end

@interface XXUnknownSuperclass (OpenFeint)
-(void)setTitleForAllStates:(id)allStates;
-(void)setTitleColorForAllStates:(id)allStates;
-(void)setTitleShadowColorForAllStates:(id)allStates;
-(void)setTitleShadowOffsetSafe:(CGSize)safe;
-(void)setBackgroundImageForAllStates:(id)allStates;
@end

@interface XXUnknownSuperclass (OpenFeint)
+(id)labelForTableHeader;
+(id)labelForTableItem;
+(id)labelForTableItemWithSubtext;
+(id)labelForTableSubtext1;
+(id)labelForTableSubtext2;
+(id)labelForSmallText;
+(id)labelForHeadlineText;
+(id)labelForExplanationText;
+(id)labelForTitleText;
@end

@interface XXUnknownSuperclass (OpenFeint)
-(id)previousViewController:(id)controller;
@end

@interface XXUnknownSuperclass (OpenFeint)
-(float)safeScale;
@end

@interface XXUnknownSuperclass (OpenFeint)
@property(readonly, assign, nonatomic) OFWebNavController* webNavController;
-(BOOL)shouldAlwaysShowNavBar;
-(BOOL)framedNavigationControllerShouldApplyFrame:(id)framedNavigationController;
@end

@interface XXUnknownSuperclass (OpenFeint)
+(CGSize)OFgetKeyboardSize:(id)size;
@end

@interface XXUnknownSuperclass (CookieValueEncodingAdditions)
-(id)decodedCookieValue;
-(id)encodedCookieValue;
@end

@interface XXUnknownSuperclass (MPURLEscapingAdditions)
-(id)stringByAddingURIPercentEscapesUsingEncoding:(unsigned)encoding;
@end

@interface XXUnknownSuperclass (MPURLEscapingAdditions)
-(BOOL)isIPAddress;
-(id)stringByAddingURIPercentEscapesUsingEncoding:(unsigned)encoding;
@end

@interface XXUnknownSuperclass (MPURLParameterAdditions)
-(id)urlByAddingParameters:(id)parameters;
-(id)urlByAddingParameterDictionary:(id)dictionary;
-(id)absoluteNormalizedString;
-(BOOL)domainMatches:(id)matches;
@end

@interface XXUnknownSuperclass (EncodingAdditions)
-(unsigned)encoding;
@end

@interface XXUnknownSuperclass (OpenFeintFBConnect)
+(id)imageFromFBBundleNamed:(id)fbbundleNamed;
@end

@interface XXUnknownSuperclass (CrittercismJSONKitSerializingBlockAdditions)
-(id)JSONDataWithOptions:(unsigned)options serializeUnsupportedClassesUsingBlock:(id)block error:(id*)error;
-(id)CrittercismJSONStringWithOptions:(unsigned)options serializeUnsupportedClassesUsingBlock:(id)block error:(id*)error;
@end

@interface XXUnknownSuperclass (CrittercismJSONKitSerializingBlockAdditions)
-(id)JSONDataWithOptions:(unsigned)options serializeUnsupportedClassesUsingBlock:(id)block error:(id*)error;
-(id)CrittercismJSONStringWithOptions:(unsigned)options serializeUnsupportedClassesUsingBlock:(id)block error:(id*)error;
@end

@interface XXUnknownSuperclass (CrittercismJSONKitSerializing)
-(id)CJSONData;
-(id)JSONDataWithOptions:(unsigned)options error:(id*)error;
-(id)JSONDataWithOptions:(unsigned)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id*)error;
-(id)CrittercismJSONString;
-(id)CrittercismJSONStringWithOptions:(unsigned)options error:(id*)error;
-(id)CrittercismJSONStringWithOptions:(unsigned)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id*)error;
@end

@interface XXUnknownSuperclass (CrittercismJSONKitSerializing)
-(id)CJSONData;
-(id)JSONDataWithOptions:(unsigned)options error:(id*)error;
-(id)JSONDataWithOptions:(unsigned)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id*)error;
-(id)CrittercismJSONString;
-(id)CrittercismJSONStringWithOptions:(unsigned)options error:(id*)error;
-(id)CrittercismJSONStringWithOptions:(unsigned)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id*)error;
@end

@interface XXUnknownSuperclass (CrittercismJSONKitSerializing)
-(id)CJSONData;
-(id)JSONDataWithOptions:(unsigned)options includeQuotes:(BOOL)quotes error:(id*)error;
-(id)CrittercismJSONString;
-(id)CrittercismJSONStringWithOptions:(unsigned)options includeQuotes:(BOOL)quotes error:(id*)error;
@end

@interface XXUnknownSuperclass (CrittercismJSONKitDeserializing)
-(id)objectFromJSONData;
-(id)objectFromJSONDataWithParseOptions:(unsigned)parseOptions;
-(id)objectFromJSONDataWithParseOptions:(unsigned)parseOptions error:(id*)error;
-(id)mutableObjectFromJSONData;
-(id)mutableObjectFromJSONDataWithParseOptions:(unsigned)parseOptions;
-(id)mutableObjectFromJSONDataWithParseOptions:(unsigned)parseOptions error:(id*)error;
@end

@interface XXUnknownSuperclass (CrittercismJSONKitDeserializing)
-(id)objectFromJSONString;
-(id)objectFromJSONStringWithParseOptions:(unsigned)parseOptions;
-(id)objectFromJSONStringWithParseOptions:(unsigned)parseOptions error:(id*)error;
-(id)mutableObjectFromJSONString;
-(id)mutableObjectFromJSONStringWithParseOptions:(unsigned)parseOptions;
-(id)mutableObjectFromJSONStringWithParseOptions:(unsigned)parseOptions error:(id*)error;
@end
