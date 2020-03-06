//
//  function.cpp
//  testProject
//
//  Created by Harrison Kyriacou on 3/5/20.
//  Copyright © 2020 Harrison Kyriacou. All rights reserved.
//

#include <stdio.h>
#include "function.h"

int func (int a, int b){
    return a * b + a * b * a / b + b / a / a + b % a + a + b * a;
}
