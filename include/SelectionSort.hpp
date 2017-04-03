//
//  SelectionSort.hpp
//  
//
//  Created by Kevin Hines on 3/27/17.
//
//

#ifndef SelectionSort_hpp
#define SelectionSort_hpp

#include <stdio.h>
#include <iostream>

#include "BaseSort.hpp"
template<typename T>

class Selection_sort:Base_sort<T>{
    
public:
    
    Selection_sort(T arr[], T n);

    void sort_array(T arr[], T n);
    
};
#endif
