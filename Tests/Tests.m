#import <objc/objc-runtime.h>
#import <XCTest/XCTest.h>

#import <PrivateProtocolBuffer/PrivateProtocolBuffer.h>

@interface PrivateProtocolBufferTests : XCTestCase

@end

@implementation PrivateProtocolBufferTests

- (void)testPBCodable {
    PBCodable *codable;
    XCTAssertNoThrow(codable = [[PBCodable alloc] init]);
    XCTAssertTrue([codable isKindOfClass:PBCodable.class]);
}

- (void)testPBMutableData {
    Class PBMutableDataClass = NSClassFromString(@"PBMutableData");
    PBMutableData *mutableData;
    XCTAssertNoThrow(mutableData = [[PBMutableDataClass alloc] initWithCapacity:3]);
    XCTAssertNoThrow([mutableData setLength:3]);
    XCTAssertTrue([mutableData length] == 3);
}

@end
