//
//  InsertionSort.hpp
//  
//
//  Created by Kevin Hines on 3/27/17.
//
//

#ifndef InsertionSort_hpp
#define InsertionSort_hpp
#include "BaseSort.hpp"
#include <stdio.h>
#include <iostream>

template<typename T>

class Insertion_sort:Base_sort<T>{
    
public:
    
	Insertion_sort(T arr[], T size);
    
    void sort_array(T arr[], T n);
    
};
#endif
