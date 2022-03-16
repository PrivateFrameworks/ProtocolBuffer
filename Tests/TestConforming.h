#ifndef TestConforming_h
#define TestConforming_h

BOOL Identifier(classConformsToProtocol)(Class classInstance, NSString *protocol) {
	return [classInstance conformsToProtocol:NSProtocolFromString(protocol)];
}

#define ClassConformsToProtocol(CLASS, PROTOCOL) Identifier(classConformsToProtocol)(GetClass(CLASS), @#PROTOCOL)

#define TestClassConformsToProtocol(CLASS, PROTOCOL) XCTAssertTrue(ClassConformsToProtocol(CLASS, PROTOCOL))

#define TestConforming \
TestClassConformsToProtocol(PBCodable, NSSecureCoding); \


#endif /* TestConforming_h */
