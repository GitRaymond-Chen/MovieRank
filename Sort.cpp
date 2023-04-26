#include <iostream>
#include "Movie.h"
#include "Sort.h"
#include <vector>
using namespace std;

// Driver code
int main()
{
    // Movie(string title, string actor, int year, double rating)
    vector<Movie> movies1;

    movies1.push_back(Movie("Puss in Boots", "Joel Crawford", 2022, 7.9));
    movies1.push_back(Movie("80 for Bradys", "Kyle Marvin", 2023, 5.8));
    movies1.push_back(Movie("The Super Mario Bros. Movie", "Matthew Fogel", 2023, 7.3));
    movies1.push_back(Movie("Ant-man and the Wasp", "Peyton Reed", 2023, 6.3));
    movies1.push_back(Movie("Evil Dead Rise", "Lee Cronin", 2023, 7.3));
    movies1.push_back(Movie("Avatar: The Way of Water", "James Cameron", 2022, 7.7));

    cout << "Given array is: ";
    for (int i = 0; i < 6; i++)
        movies1[i].Print();

    cout << endl;

    mergeSort(movies1, 0, 6 - 1);

    cout << "Merge sorted array is: " << endl;
    for (int i = 0; i < 6; i++)
        movies1[i].Print();
    cout << endl;

    cout << "#####################################################################################################" << endl << endl;

    vector<Movie> movies2;

    movies2.push_back(Movie("Puss in Boots", "Joel Crawford", 2022, 7.9));
    movies2.push_back(Movie("80 for Bradys", "Kyle Marvin", 2023, 5.8));
    movies2.push_back(Movie("The Super Mario Bros. Movie", "Matthew Fogel", 2023, 7.3));
    movies2.push_back(Movie("Ant-man and the Wasp", "Peyton Reed", 2023, 6.3));
    movies2.push_back(Movie("Evil Dead Rise", "Lee Cronin", 2023, 7.3));
    movies2.push_back(Movie("Avatar: The Way of Water", "James Cameron", 2022, 7.7));

    cout << "Given array is: ";
    for (int i = 0; i < 6; i++)
        movies2[i].Print();
    
    cout << endl;

    // perform quicksort on data
    quickSort(movies2, 0, 6 - 1);

    cout << "Quick sorted array is: " << endl;
    for (int i = 0; i < 6; i++)
        movies2[i].Print();
    cout << endl;
}