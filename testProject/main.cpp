//
//  main.cpp
//  testProject
//
//  Created by Harrison Kyriacou on 3/5/20.
//  Copyright © 2020 Harrison Kyriacou. All rights reserved.
//

#include <iostream>
#include "function.h"

using namespace std;


int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n" << "This is my new C++ project" << endl;
    cout << "Enter two numbers\n" << "a: ";
    int a;
    int b;
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "Result: " << func(a, b) << endl;
    return 0;
}
