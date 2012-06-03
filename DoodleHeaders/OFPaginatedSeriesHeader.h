/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface OFPaginatedSeriesHeader : XXUnknownSuperclass {
	unsigned currentOffset;
	unsigned currentPage;
	unsigned totalPages;
	unsigned perPage;
	unsigned totalObjects;
}
@property(readonly, assign, nonatomic) unsigned currentOffset;
@property(readonly, assign, nonatomic) unsigned currentPage;
@property(readonly, assign, nonatomic) unsigned totalPages;
@property(readonly, assign, nonatomic) unsigned perPage;
@property(readonly, assign, nonatomic) unsigned totalObjects;
+(id)getElementName;
+(id)paginationHeaderWithXmlElement:(OFXmlElement*)xmlElement;
+(id)paginationHeaderClonedFrom:(id)from;
-(id)initWithPaginationSeriesHeader:(id)paginationSeriesHeader;
-(id)initWithXmlElement:(OFXmlElement*)xmlElement;
-(bool)isLastPageLoaded;
@end

