//
//  Queue.h
//  Queue
//
//  Created by Lusenii Kromah on 11/3/14.
//  Copyright (c) 2014 Derivative. All rights reserved.
//

#ifndef QUEUE
#define QUEUE

const int MAX = 10;
typedef int QueueElement;

class Queue
{
public:
    Queue();
    bool empty();
    bool full();
    void addQ(QueueElement value);
    bool front ( QueueElement& element);
    void removeQ();
    void display();
private:
    QueueElement   myArray[MAX];
    int myFront, myBack,numOfElementsInQueue;
};
#endif
