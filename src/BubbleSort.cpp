//
//  BubbleSort.cpp
//  
//
//  Created by Kevin Hines on 3/27/17.
//
//
#include "BaseSort.hpp"
#include "BubbleSort.hpp"
#include <iostream>
template <typename T>

Bubble_sort<T>::Bubble_sort(T arr[], T size){
    T n = size;
}

template <typename T>
void Bubble_sort<T>::sort_array(T arr[], T n)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n -i -1; ++j)
            {
                if (arr[j] > arr[j+1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j+1] = temp;
                    }
            }
                    
        }
        Base_sort<T>::print_sorted_array(arr, n);
};

                
