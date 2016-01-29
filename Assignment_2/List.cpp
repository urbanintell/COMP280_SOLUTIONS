//
//  List.cpp
//  280 Program
//
//  Created by Lusenii Kromah on 1/21/16.
//  Copyright © 2016 Derivative. All rights reserved.
//

#include "List.hpp"
#include <iostream>
using namespace std;
List::List(){
    this->N=0;
}

bool List::Empty(){
    return N==0;
}
void List::InsertAtEnd(ElementType x){
    this->listArray[N]= x;
    N++;
}
void List::Delete(ElementType x){
    for(int i=0;i<N;i++){
        if(listArray[i]==x){
            listArray[i]=0;
            --N;
        }
    }
}
void List::Display(){
    cout<<"List Contents:"<<endl;
    for(int i=0;i<N;i++){
        if(listArray[i]!=0){
            cout<<listArray[i]<<" ";
        }
    }
    cout<<endl;
}
int List::Smallest(){
    int smallest = listArray[0];
    for(int i=1;i<N;i++){
        if(smallest > listArray[i] ){
            smallest = listArray[i];
        }
    }
    return smallest;
}
int List::Largest(){
    int largest = listArray[0];
    for(int i=1;i<N;i++){
        if(largest < listArray[i] ){
            largest = listArray[i];
        }
    }
    return largest;
}
int List::Range(){
    return Largest() - Smallest();
}