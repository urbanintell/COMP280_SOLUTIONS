//
//  Queue.cpp
//  RPN
//
//  Created by Lusenii Kromah on 10/20/14.
//  Copyright (c) 2014 Derivative. All rights reserved.
//

#include "Queue.h"
using namespace std;
#include <iostream>
Queue::Queue(){
    myFront=NULL;
}
bool Queue::empty(){
    return (myFront==NULL);
}
void Queue::display(){
    node*current=myFront;
    while (current!=NULL) {
        cout<<current->data<<endl;
        current=current->next;
    }
}
void Queue::dequeue(){
    
    if (empty()) {
        cout<<"empty"<<endl;
        return;
    }else if (myFront->next==NULL) {
            myFront=NULL;
        delete myFront;
    }else{
        myFront=myFront->next;
    }
        
}

void Queue::enqueue(char element){
    node*newnode=new node;
    newnode->data=element;
    newnode->next=NULL;
    if (empty()) {
        myFront=new node;
        myFront->data=element;
        myFront->next=NULL;
    }else{
          node*current=myFront;
        while (current->next!=NULL) {
            current=current->next;
        }
        current->next=newnode;

    }
}
bool Queue::front(char &queueElement){
    
    if (empty()) {
        return false;
    }else{
        queueElement=myFront->data;
        return true;
        
    }
}