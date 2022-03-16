#ifndef SetUp_h
#define SetUp_h

#define SetUp \
self.bundle = PrivateProtocolBuffer.bundle; \
XCTAssertTrue([self.bundle load]); \


#endif /* SetUp_h */
