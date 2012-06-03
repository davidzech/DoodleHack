/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonParser.h"
#import "SBJsonBase.h"


@protocol SBJsonParser
-(id)objectWithString:(id)string;
@end

@interface SBJsonParser : SBJsonBase <SBJsonParser> {
	char* c;
}
+(void)initialize;
-(id)fragmentWithString:(id)string;
-(id)objectWithString:(id)string;
-(BOOL)scanValue:(id*)value;
-(BOOL)scanRestOfTrue:(id*)aTrue;
-(BOOL)scanRestOfFalse:(id*)aFalse;
-(BOOL)scanRestOfNull:(id*)null;
-(BOOL)scanRestOfArray:(id*)array;
-(BOOL)scanRestOfDictionary:(id*)dictionary;
-(BOOL)scanRestOfString:(id*)string;
-(BOOL)scanUnicodeChar:(unsigned short*)aChar;
-(BOOL)scanHexQuad:(unsigned short*)quad;
-(BOOL)scanNumber:(id*)number;
-(BOOL)scanIsAtEnd;
@end

