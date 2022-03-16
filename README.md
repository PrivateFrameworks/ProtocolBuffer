# ProtocolBuffer

## Installation

### Using Swift Package Manager

Add the following to your `dependencies` in `Package.swift`:
```swift
.package(url: "https://github.com/PrivateFrameworks/ProtocolBuffer", .upToNextMinor(from: "0.1.0")),
```

And then add `PrivateProtocolBuffer` as a dependency to your target:
```swift
    .target(
        name: "Home",
        dependencies: [
            // ...
            .product(name: "PrivateProtocolBuffer", package: "ProtocolBuffer"),
        ]
    ),
```

To link `/System/Library/PrivateFrameworks/ProtocolBuffer.framework` add `ProtocolBuffer` to your target dependencies:
```swift
    .target(
        name: "Home",
        dependencies: [
            // ...
            .product(name: "PrivateProtocolBuffer", package: "ProtocolBuffer"),
            .product(name: "ProtocolBuffer", package: "ProtocolBuffer"),
        ]
    ),
```
