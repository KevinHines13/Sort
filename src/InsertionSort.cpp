//
//  InsertionSort.cpp
//  
//
//  Created by Kevin Hines on 3/27/17.
//
//

#include "BaseSort.hpp"
#include "InsertionSort.hpp"
#include <iostream>

template<typename T>

Insertion_sort<T>::Insertion_sort(T arr[], T size){
    T n = size;
}

template<typename T>

    void Insertion_sort<T>::sort_array(T arr[], T n) {
        int j, temp;
        
        for (int i = 0; i < n; i++)
        {
            j = i;
            
            while (j > 0 && arr[j] < arr[j-1])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
        Base_sort<T>::print_sorted_array(arr, n);

		
    }	
    
