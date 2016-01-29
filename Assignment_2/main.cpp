//
//  main.cpp
//  280 Program
//
//  Created by Lusenii Kromah on 1/21/16.
//  Copyright © 2016 Derivative. All rights reserved.
//

#include <iostream>
#include "List.hpp"
using namespace std;
void menu();
int main(int argc, const char * argv[]) {
    
    int n;
    List list;
    do{
       
        cout<<endl;
        menu();
        int value;
        cout<<"Enter a value: ";
        cin>>n;
        
        
        switch (n) {
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
    
    }while(n!=7);
    
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

