#ifndef PrivateProtocolBuffer_PBCodable_h
#define PrivateProtocolBuffer_PBCodable_h

#import <Foundation/Foundation.h>

#import <PrivateProtocolBuffer/PBMutableData.h>
#import <PrivateProtocolBuffer/PBDataReader.h>
#import <PrivateProtocolBuffer/PBDataWriter.h>

/// Available since iOS 5
@interface PBCodable : NSObject <NSSecureCoding>

@property (nonatomic, readonly) PBMutableData *data;

+ (id)options;

- (void)setClientMetricsIfSupported:(id)arg1;

/**
 Meant to be reimplemented. Return @c YES when there's an error, return @c NO otherwise.
 
 This method will call @c -[NSObject @c doesNotRecognizeSelector:] if not reimplemented.
 */
- (BOOL)readFrom:(PBDataReader *)reader;

/**
 Meant to be reimplemented, called from @c -[PBCodable @c data]

 This method will call @c -[NSObject @c doesNotRecognizeSelector:] if not reimplemented.
 */
- (void)writeTo:(PBDataWriter *)writer;

/**
 Meant to be reimplemented.
 
 This method will call @c -[NSObject @c doesNotRecognizeSelector:] if not reimplemented.
 */
- (NSDictionary *)dictionaryRepresentation;

/// Available since iOS 7
- (id)formattedText;

- (instancetype)initWithData:(PBMutableData *)data;

@end

#endif /* PrivateProtocolBuffer_PBCodable_h */
