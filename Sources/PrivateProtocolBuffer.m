#import <PrivateProtocolBuffer/PrivateProtocolBuffer.h>

@implementation PrivateProtocolBuffer

+ (NSURL *)bundleURL {
	return [NSURL fileURLWithPath:@"/System/Library/PrivateFrameworks/ProtocolBuffer.framework"];
}

+ (NSBundle *)bundle {
	return [NSBundle bundleWithURL:self.bundleURL];
}

+ (BOOL)load {
	return [self.bundle load];
}

+ (BOOL)unload {
	return [self.bundle unload];
}

@end
