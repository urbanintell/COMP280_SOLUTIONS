//
//  main.cpp
//  Program03
//
//  Created by Neil Yang on 2/5/16.
//  Copyright © 2016 Neil Yang. All rights reserved.
//

#include <iostream>
#include "List.hpp"
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void menu();

int main(void) {
    
    int option;
    
    List list;
    
    do{
        cout<<endl;
        menu();
        int value;
        
        cout<<"Enter an option from 1-7: \n";
        
        cin>>option;
        
        switch (option) {
            case 1:
                cout<<"Insert a value: ";
                cin>>value;
                list.InsertAtEnd(value);
                cout<<endl;
                break;
            case 2:
                cout<<"Delete a value: ";
                cin>>value;
                list.Delete(value);
                cout<<endl;
                break;
            case 3:
                list.Display();
                break;
            case 4:
                cout<<"Smallest: "<<list.Smallest()<<endl;
                break;
            case 5:
                cout<<"Largest: "<<list.Largest()<<endl;
                break;
            case 6:
                cout<<"Range: "<<list.Range()<<endl;
                break;
            default:
                break;
        }
        
    }while(option!=7);
    
    return 0;
}

void menu(){
    cout<<"1.) Insert"<<endl;
    cout<<"2.) Delete"<<endl;
    cout<<"3.) Display"<<endl;
    cout<<"4.) Smallest"<<endl;
    cout<<"5.) Largest"<<endl;
    cout<<"6.) Range"<<endl;
    cout<<"7.) Exit"<<endl;
}