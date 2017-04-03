//
//  BaseSort.hpp
//  
//
//  Created by Kevin Hines on 3/27/17.
//
//

#ifndef BaseSort_hpp
#define BaseSort_hpp

#include <stdio.h>
#include <iostream>
template<typename T>

class Base_sort{
    
public:
    
    Base_sort();
    
    
    virtual void sort_array(T arr[], T n) = 0;
    
    void print_sorted_array(T arr[], T n);
};
#endif
