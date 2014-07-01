#import <Foundation/Foundation.h>
#import "IStoreAssets.h"

@interface UnityStoreAssets : NSObject <IStoreAssets> {

}

+ (UnityStoreAssets*)getInstance;
+ (BOOL)createFromJSON:(NSString*)storeAssetsJSON andVersion:(int)oVersion;

@end