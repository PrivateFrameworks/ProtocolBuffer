#ifndef PrivateProtocolBuffer_PBDataWriter_h
#define PrivateProtocolBuffer_PBDataWriter_h

#import <PrivateProtocolBuffer/PBMutableData.h>

/// Available since iOS 5
@interface PBDataWriter : NSObject {
    PBMutableData *_data;
}

- (unsigned long long)write:(const char *)arg1 maxLength:(unsigned)arg2;
- (void)writeDouble:(double)arg1 forTag:(unsigned short)arg2;
- (void)writeUint64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSfixed32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeInt64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeBigEndianFixed16:(unsigned short)arg1;
- (void)writeUint8:(unsigned char)arg1;
- (void)writeBigEndianFixed32:(unsigned)arg1;
- (void)writeBigEndianShortThenString:(id)arg1;
- (void)writeProtoBuffer:(id)arg1;
- (void)writeInt8:(char)arg1;
- (void)writeSint64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned short)arg2;
- (instancetype)init;
- (void)dealloc;
- (PBMutableData *)data;
- (void)writeData:(id)arg1 forTag:(unsigned short)arg2;
- (void)writeUint32:(unsigned)arg1 forTag:(unsigned short)arg2;
- (void)writeTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)writeBareVarint:(unsigned long long)arg1;
- (void)writeString:(id)arg1 forTag:(unsigned short)arg2;
- (void)writeBOOL:(char)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed32:(unsigned)arg1 forTag:(unsigned short)arg2;
- (void)writeFloat:(float)arg1 forTag:(unsigned short)arg2;
- (void)writeInt32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeSint32:(int)arg1 forTag:(unsigned short)arg2;
- (char)writeData:(id)arg1;

@end

#endif /* PrivateProtocolBuffer_PBDataWriter_h */
