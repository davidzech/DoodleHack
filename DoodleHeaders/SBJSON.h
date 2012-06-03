/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonParser.h"
#import "SBJsonBase.h"
#import "SBJsonWriter.h"

@class SBJsonParser, SBJsonWriter;

@interface SBJSON : SBJsonBase <SBJsonParser, SBJsonWriter> {
	SBJsonParser* jsonParser;
	SBJsonWriter* jsonWriter;
}
@property(assign) BOOL humanReadable;
@property(assign) BOOL sortKeys;
-(id)init;
-(void)dealloc;
-(id)stringWithObject:(id)object;
-(id)stringWithObject:(id)object allowScalar:(BOOL)scalar error:(id*)error;
-(id)stringWithFragment:(id)fragment error:(id*)error;
-(id)stringWithObject:(id)object error:(id*)error;
-(id)objectWithString:(id)string;
-(id)objectWithString:(id)string allowScalar:(BOOL)scalar error:(id*)error;
-(id)fragmentWithString:(id)string error:(id*)error;
-(id)objectWithString:(id)string error:(id*)error;
-(unsigned)maxDepth;
-(void)setMaxDepth:(unsigned)depth;
@end
