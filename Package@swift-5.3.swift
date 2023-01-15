// swift-tools-version:5.3

// Swift 5.3 adds support for `binaryTarget`

import PackageDescription

let package = Package(
	name: "PrivateProtocolBuffer",
	platforms: [
		.iOS(.v8),
		.macOS(.v10_10),
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
	]
)
