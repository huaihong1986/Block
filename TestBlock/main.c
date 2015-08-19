//
//  main.c
//  TestBlock
//
//  Created by Hu Aihong on 15-8-7.
//  Copyright (c) 2015年 ChinaCloud. All rights reserved.
//

#include <stdio.h>

typedef int (^MyBlock)(char *);

MyBlock genBlock();

int main(){
    MyBlock outBlock = genBlock();
    int result = outBlock("Hello world");
   
    //NSLog(@"result is %d",[outBlock retainCount]);
    printf("reuslt is %d\n",result);
  
    
    return 0 ;
}
MyBlock genBlock() {
    
    
    MyBlock inBlock = ^(char * test) {
        printf("Test%s",test);
      
        return 0;
    };
   
    return inBlock ;
}
