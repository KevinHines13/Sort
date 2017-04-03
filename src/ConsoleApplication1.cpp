//
//  main.cpp
//  
//
//  Created by Kevin Hines on 3/27/17.
//
//

#undef main
#include <stdio.h>
#include "InsertionSort.cpp"
#include "SelectionSort.cpp"
#include "BubbleSort.cpp"
#include "BaseSort.cpp"

#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

	//seed the random number
	int x[10];
    int y[10];
    int z[10];
	srand(std::time(0));
	int n = 10;
    
	//create 3 arrays 
	for (int i = 0; i < n; i++) {
		// generate a random size of an array from 1 - 1000
		int element = rand() % 1000;
		x[i] = element;

	}

    for (int q = 0; q < n; q++) {
        // generate a random size of an array from 1 - 1000
        int element1 = rand() % 1000;
        y[q] = element1;
        
    }
    
    for (int qq = 0; qq < n; qq++) {
        // generate a random size of an array from 1 - 1000
        int element2 = rand() % 1000;
        z[qq] = element2;
        
    }

	Insertion_sort<int>* check_insert = new Insertion_sort<int> (x, n);
	Bubble_sort<int>* check_bubble = new Bubble_sort<int> (x,  n);
	Selection_sort<int>* check_selection = new Selection_sort<int> (x, n);

	cout << "Values before bubble sort: " << endl;

	for (int j = 0; j < 10; j++) {

		cout << x[j]  << " ";
	}
    
    
    cout << "\nCheck bubble: " << endl;
	check_bubble->sort_array(x, n);

    
    
    cout << "\n\nValues before selection sort: \n";
    
    for (int p = 0; p < 10; p++) {
        
        cout << y[p]  << " ";
    }
    
    cout << "\nCheck selection:" << endl;
	check_selection->sort_array(x, n);
    
    
    cout << "\n\nValues before insertion sort: \n";
    for (int l = 0; l < 10; l++) {
        
        cout << z[l]  << " ";
    }
	cout << endl << "Check insertion:";
	check_insert->sort_array(x, n);




	//system("PAUSE");
	return 0;
}