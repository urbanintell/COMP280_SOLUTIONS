//
//  List.hpp
//  280 Program
//
//  Created by Lusenii Kromah on 1/21/16.
//  Copyright © 2016 Derivative. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

typedef int ElementType;
const int MAX = 100;

class List{
public:
    bool Empty();
    void InsertAtEnd(ElementType x);
    void Delete(ElementType x);
    void Display();
    int Smallest();
    int Largest();
    int Range();
    List();
private:
    int N;
    ElementType listArray[MAX];
};
#endif /* List_hpp */
