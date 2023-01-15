// swift-tools-version:4.0

import PackageDescription

let package = Package(
	name: "PrivateProtocolBuffer",
	products: [
		.library(
			name: "PrivateProtocolBuffer",
			targets: ["PrivateProtocolBuffer"]
		),
	],
	targets: [
		.target(
			name: "PrivateProtocolBuffer",
			dependencies: [],
			path: "Sources",
			publicHeadersPath: "."
		),
	]
)
