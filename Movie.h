#pragma once
#include <string>
#include <vector>
using namespace std;

class Movie {
public:
	// Constructor
	Movie();
	Movie(string title, int year, double rating, double popularity, int revenue);

	void Print();

	string title;
	int year;
	double rating;
	double popularity;
	int revenue;
};