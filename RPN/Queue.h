//
//  Queue.h
//  RPN
//
//  Created by Lusenii Kromah on 10/20/14.
//  Copyright (c) 2014 Derivative. All rights reserved.
//

#ifndef __RPN__Queue__
#define __RPN__Queue__

#include <stdio.h>
using namespace std;
#include <string>

struct node{
    char data;
    node*next;
};
class Queue{
public:
    Queue();
    void enqueue(char element);
    void dequeue();
    bool empty();
    bool front(char &queueElement);
    void display();
    
private:
    node*myFront;
};
#endif /* defined(__RPN__Queue__) */
