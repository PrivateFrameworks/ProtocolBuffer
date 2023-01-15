#ifndef PrivateProtocolBuffer_PBDataReader_h
#define PrivateProtocolBuffer_PBDataReader_h

#import <PrivateProtocolBuffer/PBMutableData.h>

/// Available since iOS 5
@interface PBDataReader : NSObject

- (instancetype)initWithData:(PBMutableData *)data;
- (BOOL)hasError;

@end

#endif /* PrivateProtocolBuffer_PBDataReader_h */
