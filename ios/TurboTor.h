
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTurboTorSpec.h"

@interface TurboTor : NSObject <NativeTurboTorSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TurboTor : NSObject <RCTBridgeModule>
#endif

@end
