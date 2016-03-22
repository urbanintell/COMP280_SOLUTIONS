//
//  Stack.h
//  RPN
//
//  Created by Lusenii Kromah on 10/20/14.
//  Copyright (c) 2014 Derivative. All rights reserved.
//

#ifndef __RPN__Stack__
#define __RPN__Stack__

#include <stdio.h>
struct nod{
    int data;
    nod*next;
};
class Stack{
public:
    Stack();
    void push(int newElement);
    void pop();
    void peep();
    bool empty();
    void display();
    int top();
private:
    nod*myTop;

};
#endif /* defined(__RPN__Stack__) */
