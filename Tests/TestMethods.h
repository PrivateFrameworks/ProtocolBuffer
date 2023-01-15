#ifndef TestMethods_h
#define TestMethods_h

// -[PBCodable writeTo:]
void Identifier(testMethod_PBCodable_writeTo_)(XCTestCase * _Nonnull self) {
    Identifier(PBCodableSubclass) *codable = [(Identifier(PBCodableSubclass) *)[Identifier(GetPBCodableSubclass)() alloc] initWithData:nil];
	PBMutableData *data = codable.data;
	
	unsigned char * bytes = (unsigned char *)(__bridge void *)data;
	ptrdiff_t offset = ivar_getOffset(class_getInstanceVariable(GetUnlinkableClass(PBMutableData), "buffer"));
	typedef char * CString;
	CString buffer = *((CString *)(bytes + offset));
	
	NSString *string = [[NSString alloc] initWithCString:buffer encoding:NSASCIIStringEncoding];
	XCTAssertTrue([string isEqualToString:@"Hello"]);
}

#define TestMethods \
Identifier(testMethod_PBCodable_writeTo_)(self); \


#endif /* TestMethods_h */
