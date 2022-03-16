#ifndef PBCodableSubclass_h
#define PBCodableSubclass_h

@interface Identifier(PBCodableSubclass) : PBCodable

@end

BOOL Identifier(PBCodableSubclassReadFrom)(id self, SEL _cmd, PBDataReader *dataReader) {
	return YES;
}

void Identifier(PBCodableSubclassWriteTo)(id self, SEL _cmd, PBDataWriter *dataWriter) {
	[dataWriter writeInt8:0x48]; // H
	[dataWriter writeInt8:0x65]; // e
	[dataWriter writeInt8:0x6C]; // l
	[dataWriter writeInt8:0x6C]; // l
	[dataWriter writeInt8:0x6F]; // o
}

Class Identifier(GetPBCodableSubclass)() {
	static Class codableSubclass;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		codableSubclass = objc_allocateClassPair(objc_getClass("PBCodable"), "Identifier(PBCodableSubclass)", 0);

		class_addMethod(codableSubclass, NSSelectorFromString(@"readFrom:"), (IMP)Identifier(PBCodableSubclassReadFrom), "B@:@");
		class_addMethod(codableSubclass, NSSelectorFromString(@"writeTo:"), (IMP)Identifier(PBCodableSubclassWriteTo), "v@:@");
	});
	return codableSubclass;
}

#endif /* PBCodableSubclass_h */
