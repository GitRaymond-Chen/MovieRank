#include <iostream>
#include "Movie.h"
#include "Sort.h"
#include <vector>
using namespace std;

// Driver code
int main()
{
    // Movie(string title, string actor, int year, double rating)
    Movie movies1[6];

    movies1[0] = Movie("Puss in Boots", "Joel Crawford", 2022, 7.9);
    movies1[1] = Movie("80 for Bradys", "Kyle Marvin", 2023, 5.8);
    movies1[2] = Movie("The Super Mario Bros. Movie", "Matthew Fogel", 2023, 7.3);
    movies1[3] = Movie("Ant-man and the Wasp", "Peyton Reed", 2023, 6.3);
    movies1[4] = Movie("Evil Dead Rise", "Lee Cronin", 2023, 7.3);
    movies1[5] = Movie("Avatar: The Way of Water", "James Cameron", 2022, 7.7);

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

    Movie movies2[6];

    movies2[0] = Movie("Puss in Boots", "Joel Crawford", 2022, 7.9);
    movies2[1] = Movie("80 for Bradys", "Kyle Marvin", 2023, 5.8);
    movies2[2] = Movie("The Super Mario Bros. Movie", "Matthew Fogel", 2023, 7.3);
    movies2[3] = Movie("Ant-man and the Wasp", "Peyton Reed", 2023, 6.3);
    movies2[4] = Movie("Evil Dead Rise", "Lee Cronin", 2023, 7.3);
    movies2[5] = Movie("Avatar: The Way of Water", "James Cameron", 2022, 7.7);

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