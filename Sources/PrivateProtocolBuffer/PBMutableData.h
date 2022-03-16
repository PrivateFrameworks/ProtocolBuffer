#ifndef PrivateProtocolBuffer_PBMutableData_h
#define PrivateProtocolBuffer_PBMutableData_h

#import <Foundation/Foundation.h>

/// Available since iOS 8
///
/// Cannot be linked since iOS 13
@interface PBMutableData : NSMutableData {
	char *p;
	char *buffer;
	char *end;
}

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (instancetype)initWithCapacity:(unsigned long long)capacitiy;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)length;
- (void)_pb_growCapacityBy:(unsigned long long)amount;

@end

#endif /* PrivateProtocolBuffer_PBMutableData_h */
