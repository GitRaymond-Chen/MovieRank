#include <iostream>
#include "Movie.h"
#include "Sort.h"
#include <vector>
#include <chrono>
using namespace std;

// Driver code
int main()
{
    // string title, int year, double rating, double popularity, int revenue
    vector<Movie> movies1;
    movies1.push_back(Movie("Grumpier Old Men", "1995", "6.5", "11.7129", "0"));
    movies1.push_back(Movie("Waiting to Exhale", "1995", "6.1", "3.859495", "81452156"));
    movies1.push_back(Movie("Father of the Bride Part II", "1995", "5.7", "8.387519", "76578911"));
    movies1.push_back(Movie("Toy Story", "1995", "7.7", "21.946943", "373554033"));
    movies1.push_back(Movie("Jumanji", "1995", "6.9", "17.015539", "262797249"));

    cout << "Given array is: ";
    for (int i = 0; i < movies1.size(); i++)
        movies1[i].Print();

    cout << endl;

    auto begin = chrono::high_resolution_clock::now();
    mergeSort(movies1, 0, movies1.size() - 1);
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);

    cout << "Merge sorted array is: " << endl;
    for (int i = 0; i < 5; i++)
        movies1[i].Print();
    cout << endl;

    cout << "#####################################################################################################" << endl << endl;

    vector<Movie> movies2;
    movies2.push_back(Movie("Grumpier Old Men", "1995", "6.5", "11.7129", "0"));
    movies2.push_back(Movie("Waiting to Exhale", "1995", "6.1", "3.859495", "81452156"));
    movies2.push_back(Movie("Father of the Bride Part II", "1995", "5.7", "8.387519", "76578911"));
    movies2.push_back(Movie("Toy Story", "1995", "7.7", "21.946943", "373554033"));
    movies2.push_back(Movie("Jumanji", "1995", "6.9", "17.015539", "262797249"));

    cout << "Given array is: ";
    for (int i = 0; i < movies1.size(); i++)
        movies2[i].Print();
    
    cout << endl;

    // perform quicksort on data
    begin = chrono::high_resolution_clock::now();
    quickSort(movies2, 0, 5 - 1);
    end = chrono::high_resolution_clock::now();
    elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);


    cout << "Quick sorted array is: " << endl;
    for (int i = 0; i < movies1.size(); i++)
        movies2[i].Print();
    cout << endl;
}