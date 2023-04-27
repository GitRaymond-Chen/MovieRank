#pragma once
#include <iostream>
#include "Movie.h"
#include "Sort.h"
#include "Search.h"
#include <vector>
#include <chrono>
using namespace std;

// Driver code
int main()
{
    Search movies1("2002");

    /*cout << "Given array is: ";
    for (int i = 0; i < movies1.searchmovieList.size(); i++)
        movies1.searchmovieList[i].Print();*/

    cout << endl;

    auto begin = chrono::high_resolution_clock::now();
    mergeSort(movies1.searchmovieList, 0, movies1.searchmovieList.size() - 1);
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);

    cout << "Top 10 using merge sorted is: " << endl;
    for (int i = 0; i < 10; i++)
        movies1.searchmovieList[i].Print();
    cout << endl;

    cout << "#####################################################################################################" << endl << endl;

    Search movies2("1995");

    /*cout << "Given array is: ";
    for (int i = 0; i < movies2.searchmovieList.size(); i++)
        movies2.searchmovieList[i].Print();*/

    cout << endl;

    // perform quicksort on data
    begin = chrono::high_resolution_clock::now();
    quickSort(movies2.searchmovieList, 0, movies2.searchmovieList.size() - 1);
    end = chrono::high_resolution_clock::now();
    elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);


    cout << "Top 10 using quicksort is: " << endl;
    for (int i = 0; i < 10; i++)
        movies2.searchmovieList[i].Print();
    cout << endl;
}