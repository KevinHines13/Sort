//
//  SelectionSort.cpp
//  
//
//  Created by Kevin Hines on 3/27/17.
//
//

#include "SelectionSort.hpp"
#include "BaseSort.hpp"
#include <iostream>

template <typename T>

Selection_sort<T>::Selection_sort(T arr[], T size){
    T n = size;
}


template <typename T>

void Selection_sort<T>::sort_array(T arr[], T n)
    {
        int pos_min,temp;
        
        for (int i=0; i < n-1; i++)
        {
            pos_min = i;
            
            for (int j=i+1; j < n; j++)
            {
                
                if (arr[j] < arr[pos_min])
                    pos_min=j;
            }
            if (pos_min != i)
            {
                temp = arr[i];
                arr[i] = arr[pos_min];
                arr[pos_min] = temp;
            }
        }
        Base_sort<T>::print_sorted_array(arr, n);

		
    }
