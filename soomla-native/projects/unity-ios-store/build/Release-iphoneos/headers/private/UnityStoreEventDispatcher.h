
#import <Foundation/Foundation.h>

@interface UnityStoreEventDispatcher : NSObject{
    
}
- (id)init;
- (void)handleEvent:(NSNotification*)notification;
+ (void)initialize;

@end
