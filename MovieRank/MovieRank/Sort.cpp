#include <iostream>
#include "Movie.h"
#include "Sort.h"
#include <vector>
using namespace std;

// Driver code
int main()
{
    // Movie(string title, string director, int year, double rating, int popularity) {
    Movie movies[6];

    movies[0] = Movie("Puss in Boots", "Joel Crawford", 2022, 7.9, 53);
    movies[1] = Movie("80 for Bradys", "Kyle Marvin", 2023, 5.8, 100);
    movies[2] = Movie("The Super Mario Bros. Movie", "Matthew Fogel", 2023, 7.3, 1);
    movies[3] = Movie("Ant-man and the Wasp", "Peyton Reed", 2023, 6.3, 11);
    movies[4] = Movie("Evil Dead Rise", "Lee Cronin", 2023, 7.3, 2);
    movies[5] = Movie("Avatar: The Way of Water", "James Cameron", 2022, 7.7, 17);

    cout << "Given array is: ";
    for (int i = 0; i < 6; i++)
        movies[i].Print();

    cout << "\n\n";

    mergeSort(movies, 0, 5);

    cout << "Merge sorted array is: " << endl;
    for (int i = 0; i < 6; i++)
        movies[i].Print();
    cout << endl;


    int const size = 9;
    int arr2[size] = { 5, 12, 7, 1, 13, 2 ,23, 11, 18 };

    cout << "Unsorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    quickSort(arr2, 0, size - 1);

    cout << "Quick sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr2[i] << " ";

    return 0;
}