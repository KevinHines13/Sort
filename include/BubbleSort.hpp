//
//  BubbleSort.hpp
//  
//
//  Created by Kevin Hines on 3/27/17.
//
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include <stdio.h>
#include <iostream>


template<typename T>

class Bubble_sort:Base_sort<T>{

public:
    
	Bubble_sort(T arr[], T n);
    
   void sort_array(T arr[], T n);
    
};
#endif /* BubbleSort_hpp */
