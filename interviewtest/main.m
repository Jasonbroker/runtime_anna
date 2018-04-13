//
//  main.m
//  interviewtest
//
//  Created by Jason on 14/03/2018.
//  Copyright © 2018 bmcode. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XXOB : NSObject

+ (void)hello;
- (void)hello;

@end

@implementation XXOB
- (void)hello {
    
}

@end

void test1(void);

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        
        @autoreleasepool {
            test1();
        }
        
        XXOB *obj;
//        obj= ()0x100001188;
        [obj hello];
        do {
            
        } while (1);
    }
    return 0;
}

void test1() {
    NSLog(@"%p", [XXOB class]);
    XXOB *obj = [XXOB new];
    [obj hello];
    [obj addObserver:obj forKeyPath:@"hellp" options:NSKeyValueObservingOptionNew context:&obj];
}
