

//
//  List.h
//  Dennis_Azorlibu_Linkedlist
//
//  Created by Dennis Azorlibu on 2/2/16.
//  Copyright © 2016 Dennis Azorlibu. All rights reserved.
//

//file: List.h

typedef int ElementType;

struct node{
    ElementType data;
    node * next;
};

class List
{
public:
    List(); //Create an empty list
    bool Empty(); // return true if the list is empty, otherwise return false
    void InsertAtEnd(ElementType x); //insert a value x on the end of the list
    void Delete(ElementType x); //if value x is in the list, remove x
    void Display(); //Display the data values in the list in the order inserted
    int Smallest(); // Find and return the smallest value in the list
    int Largest(); // Find and return the largest value in the list
    int Range(); //Computer and return the range of the values in the list
    void Menu();
    
private:
    node * first; //pointer to first node
    node *tail;
    int N;
    node*list;
};

