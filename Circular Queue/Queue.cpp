//
//  Queue.cpp
//  Queue
//
//  Created by Lusenii Kromah on 11/3/14.
//  Copyright (c) 2014 Derivative. All rights reserved.
//

#include "Queue.h"
using namespace std;
#include <iostream>
Queue::Queue(){
    myFront=myBack=numOfElementsInQueue=0;
}

bool Queue::empty(){

    return (numOfElementsInQueue==0);
}
bool Queue::full(){
  
    return numOfElementsInQueue==MAX-1;
    
}
bool Queue::front(QueueElement & element){
    if (empty()) {
        return false;
    }else{
        element=myArray[myFront];
        return true;
    }
}
void Queue::addQ(QueueElement value){
    if (full()) {
        cout<<"Full"<<endl;
    }else{
         myBack=(myBack+1)%MAX;
         myArray[myBack]=value;
        numOfElementsInQueue++;
    }
}
void Queue::removeQ(){
    if (empty()) {
        std::cout<<"There is nothing in the Queue"<<std::endl;
    }else{
        myFront=(myFront+1)%MAX;
        numOfElementsInQueue--;
    }
}
void Queue::display(){
    cout<<"QUEUE"<<endl;
    //print first element
    cout<<myArray[myFront]<<endl;
    //wrap around array printing each value out
    for (int n =(myFront+1)%MAX; n!=(myBack+1)%MAX; n=((n+1)%MAX) ) {
        cout<<n<<endl;
    }
}