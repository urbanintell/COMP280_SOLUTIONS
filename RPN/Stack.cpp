//
//  Stack.cpp
//  RPN
//
//  Created by Lusenii Kromah on 10/20/14.
//  Copyright (c) 2014 Derivative. All rights reserved.
//

#include "Stack.h"

#include <iostream>
using namespace std;
Stack::Stack(){
    myTop=NULL;
}
bool Stack::empty(){
    return(myTop==NULL);
}
void Stack::display(){
    nod*current=myTop;
    
    if (empty()) {
        return;
    }else{
    while (current!=NULL) {
        cout<<current->data<<endl;
        current=current->next;
    }
    }
}
void Stack::push(int newElement){
    
    nod*newNode= new nod;
    newNode->data=newElement;
    if (empty()) {
        myTop=new nod;
        myTop->data=newElement;
    }else{
        nod*current=myTop;
        while (current->next!=NULL) {
            current=current->next;
        }
        
        current->next=newNode;
    }
}
void Stack::pop(){
        nod*current=myTop;
        nod*previousNode=myTop;
    if (empty()) {
        return;
    }else if(myTop->next==NULL){
        myTop=NULL;
    }else{
        while(current->next!=NULL){
            previousNode=current;
            current=current->next;
        }
    }
    
     previousNode->next=NULL;
     delete current;
}
void Stack::peep(){
    if(!empty()){
        cout<<myTop->data<<endl;
    }else{
        cout<<"underflow"<<endl;
    }
}
int Stack::top(){
    
    nod*current=myTop;
    if (!empty()) {
        while (current->next!=NULL) {
            current=current->next;
        }
        return current->data;
    }else{
        
        
        return NULL;
    }
}