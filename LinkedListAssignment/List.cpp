//
//  Program03.cpp
//  Program03
//
//  Created by Neil Yang on 2/5/16.
//  Copyright © 2016 Neil Yang. All rights reserved.
//

#include "List.hpp"
#include <iostream>
using namespace std;

bool List::Empty(){
    
    return 0;
}

void List::InsertAtEnd(ElementType x){
    
    while (list->next != NULL)
    list = list->next;
    
    /*the list*/list->next = (struct NODE *)malloc(sizeof(struct NODE));
    /*the list*/list->next->data = x;
    /*the list*/list->next->next = NULL;
}

void List::Delete(ElementType x){
    
    struct NODE *temp;
    
    if (/*the list*/list->data == x) {
        temp = /*the list*/list->next;
        free(/*the list*/list);
        /*the list*/list = temp;
    } else {
        while (/*the list*/list->next->data != x)
        /*the list*/list = /*the list*/list->next;
        
        temp = /*the list*/list->next->next;
        free(/*the list*/->next);
        /*the list*/list->next = temp;
    }
}

void List::Display(){
    
    while (/*the list*/list->next != NULL) {
        printf("%d ", /*the list*/list->data);
        /*the list*/list = /*the list*/list->next;
    }
    
    printf("%d", /*the list*/list->data);
}

int List::Smallest(){
    
    return 0;
}

int List::Largest(){
    
    return 0;
}

int List::Range(){
    
    return 0;
}