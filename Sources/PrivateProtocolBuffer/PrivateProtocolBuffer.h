#ifndef PrivateProtocolBuffer_PrivateProtocolBuffer_h
#define PrivateProtocolBuffer_PrivateProtocolBuffer_h

#import <Foundation/Foundation.h>

#import "PBMutableData.h"
#import "PBDataReader.h"
#import "PBDataWriter.h"
#import "PBCodable.h"

FOUNDATION_EXPORT double PrivateProtocolBufferVersionNumber;

FOUNDATION_EXPORT const unsigned char PrivateProtocolBufferVersionString[];

@interface PrivateProtocolBuffer : NSObject

+ (NSURL *)bundleURL;
+ (NSBundle *)bundle;
+ (BOOL)load;
+ (BOOL)unload;

@end

#endif /* PrivateProtocolBuffer_PrivateProtocolBuffer_h */
