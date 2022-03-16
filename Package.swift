// swift-tools-version:5.5

import PackageDescription

let package = Package(
	name: "PrivateProtocolBuffer",
	platforms: [
		.iOS(.v8),
		.macOS(.v10_10),
		.macCatalyst(.v13),
		.tvOS(.v9),
		.watchOS(.v2),
	],
	products: [
		.library(
			name: "PrivateProtocolBuffer",
			targets: ["PrivateProtocolBuffer"]
		),
		.library(
			name: "ProtocolBuffer",
			targets: ["ProtocolBuffer"]
		),
	],
	targets: [
		.target(
			name: "PrivateProtocolBuffer",
			dependencies: [],
			path: "Sources",
			publicHeadersPath: "."
		),
		.binaryTarget(
			name: "ProtocolBuffer",
			path: "ProtocolBuffer.xcframework"
		),
		.testTarget(
			name: "TestsWithLinking",
			dependencies: ["PrivateProtocolBuffer", "ProtocolBuffer"],
			path: "Tests/Linked",
			cSettings: [
				.define("LINKED_TESTS"),
			]
		),
		.testTarget(
			name: "TestsWithoutLinking",
			dependencies: ["PrivateProtocolBuffer"],
			path: "Tests/Unlinked",
			cSettings: [
				.define("UNLINKED_TESTS"),
			]
		),
	]
)
