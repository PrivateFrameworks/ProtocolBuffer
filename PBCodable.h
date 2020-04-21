#import <Foundation/Foundation.h>
#import <PrivateProtocolBuffer/PBMutableData.h>

#ifndef PBCodable_h
#define PBCodable_h

@interface PBCodable : NSObject <NSSecureCoding>

@property (nonatomic, readonly) PBMutableData * data;

+(bool)supportsSecureCoding;
+(id)options;

-(void)setClientMetricsIfSupported:(id)arg1;
-(bool)readFrom:(id)arg1;
-(void)writeTo:(id)arg1;
-(id)formattedText;
-(id)init;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(PBMutableData *)data;
-(id)initWithData:(PBMutableData *)arg1;
-(id)dictionaryRepresentation;

@end

#endif /* PBCodable_h */
