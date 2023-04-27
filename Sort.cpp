#include <iostream>
#include "Movie.h"
#include "Sort.h"
#include <vector>
#include <chrono>
using namespace std;

// Driver code
int main()
{
    // Movie(string title, string actor, int year, double rating)
    vector<Movie> movies1;
    vector<string> g1 = { "comedy", "action", "adventure" };
    movies1.push_back(Movie("Puss in Boots", "Joel Crawford", g1, 2022, 7.9));
    movies1.push_back(Movie("80 for Bradys", "Kyle Marvin", g1, 2023, 5.8));
    movies1.push_back(Movie("The Super Mario Bros. Movie", "Matthew Fogel", g1, 2023, 7.3));
    movies1.push_back(Movie("Ant-man and the Wasp", "Peyton Reed", g1, 2023, 6.3));
    movies1.push_back(Movie("Evil Dead Rise", "Lee Cronin", g1, 2023, 7.3));
    movies1.push_back(Movie("Avatar: The Way of Water", "James Cameron", g1, 2022, 7.7));

    cout << "Given array is: ";
    for (int i = 0; i < 6; i++)
        movies1[i].Print();

    cout << endl;

    auto begin = std::chrono::high_resolution_clock::now();
    mergeSort(movies1, 0, 6 - 1);
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);

    cout << "Merge sorted array is: " << endl;
    for (int i = 0; i < 6; i++)
        movies1[i].Print();
    cout << endl;

    cout << "#####################################################################################################" << endl << endl;

    vector<Movie> movies2;
    movies2.push_back(Movie("Puss in Boots", "Joel Crawford", g1, 2022, 7.9));
    movies2.push_back(Movie("80 for Bradys", "Kyle Marvin", g1, 2023, 5.8));
    movies2.push_back(Movie("The Super Mario Bros. Movie", "Matthew Fogel", g1, 2023, 7.3));
    movies2.push_back(Movie("Ant-man and the Wasp", "Peyton Reed", g1, 2023, 6.3));
    movies2.push_back(Movie("Evil Dead Rise", "Lee Cronin", g1, 2023, 7.3));
    movies2.push_back(Movie("Avatar: The Way of Water", "James Cameron", g1, 2022, 7.7));

    cout << "Given array is: ";
    for (int i = 0; i < 6; i++)
        movies2[i].Print();
    
    cout << endl;

    // perform quicksort on data
    begin = std::chrono::high_resolution_clock::now();
    quickSort(movies2, 0, 6 - 1);
    end = std::chrono::high_resolution_clock::now();
    elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);


    cout << "Quick sorted array is: " << endl;
    for (int i = 0; i < 6; i++)
        movies2[i].Print();
    cout << endl;
}