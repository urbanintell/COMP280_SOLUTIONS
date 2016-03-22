//
//  main.cpp
//  RPN
//
//  Created by Lusenii Kromah on 10/20/14.
//  Copyright (c) 2014 Derivative. All rights reserved.
//

#include <iostream>
#include "Queue.h"
#include "Stack.h"
using namespace std;
void Menu();
Queue enterAnExpression(string expression);
void evaluateExpression(Queue &myQ, Stack &stack, char front);
int main(int argc, const char * argv[]) {
    Queue myQ;
    Stack stack;
    string expression;
    cout<<"Enter expression: ";
    cin>>expression;
    cout<<endl;
    myQ=enterAnExpression(expression);
    int menuSelection;
    do {
        char front;
        Menu();
        cin>>menuSelection;
        if (menuSelection==1) {
            cout<<"Enter an expression:";
            cin>>expression;
            cout<<endl;
            myQ=enterAnExpression(expression);
        }else if(menuSelection==2){
            cout<<"Evaluate expression.... "<<endl;
            evaluateExpression(myQ, stack,front);
        
        }else if(menuSelection==3){
            cout<<"All expressions..."<<endl;
            while (myQ.front(front)!=false) {
                myQ.front(front);
                if (front=='+') {
                    int first=stack.top();
                    stack.pop();
                    int second=stack.top();
                    stack.pop();
                    stack.push(first+second);
                
                }else if(front=='*'){
                    int first=stack.top();
                    stack.pop();
                    int second=stack.top();
                    stack.pop();
                    stack.push(first*second);
                    
                }else if(front=='-'){
                    int first=stack.top();
                    stack.pop();
                    int second=stack.top();
                    stack.pop();
                    stack.push(first-second);
                 
                    
                }else if(front=='/'){
                    int first=stack.top();
                    stack.pop();
                    int second=stack.top();
                    stack.pop();
                    stack.push(first/second);
                 
                }
                if (front>='0'&&front<='9') {
                       stack.push(front-'0');
                }
             
                myQ.dequeue();
            }
            cout<<"Answer(s): "<<endl;
            stack.display();
            
        }
    } while (menuSelection!=4);
    return 0;
}
void Menu(){
    cout<<"1.) Enter an expression:"<<endl;
    cout<<"2.) Evaluate an expression:"<<endl;
    cout<<"3.) Print all expressions:"<<endl;
    cout<<"4.) Exit"<<endl;
}
Queue enterAnExpression(string expression){
    Queue queue;
    for (int i =0; i<expression.length();i++) {
        queue.enqueue(expression.at(i));
    }
    return queue;
}

void evaluateExpression(Queue &myQ,Stack &stack, char front){
    int number = 0;
    
    //check to see if queue has a front
    while (myQ.front(front)!=false) {
        myQ.front(front);
        if (front=='+') {
            while (!stack.empty()) {
                number+=stack.top();
                stack.pop();
            }
            cout<<"Sum: "<<number<<endl;
            myQ.dequeue();
            break;
        }else if(front=='*'){
            number=1;
            while (!stack.empty()) {
                number*=stack.top();
                stack.pop();
            }
            myQ.dequeue();
            cout<<"Product: "<<number<<endl;
            break;
        }else if(front=='-'){
            number=stack.top();
            
            while (!stack.empty()) {
                stack.pop();
                number-=stack.top();
            }
            myQ.dequeue();
            cout<<"Difference: "<<number<<endl;
            break;
        }else if(front=='/'){
            double quotient=stack.top();
            stack.pop();
            while (!stack.empty()) {
                
                int number=stack.top();
                quotient=quotient/number;
                stack.pop();
            }
            myQ.dequeue();
            cout<<"Quotient: "<<quotient<<endl;
            break;
        }else{
            
            stack.push(front-'0');
            myQ.dequeue();
        }
    }
}