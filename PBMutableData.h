#import <Foundation/Foundation.h>

#ifndef PBMutableData_h
#define PBMutableData_h

__attribute__((visibility("hidden")))
@interface PBMutableData : NSMutableData {
    char* p;
    char* buffer;
    char* end;
}

-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithCapacity:(unsigned long long)arg1;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1;
-(void)_pb_growCapacityBy:(unsigned long long)arg1;

@end

#endif /* PBMutableData_h */
