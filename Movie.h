#pragma once
#include <string>
using namespace std;

class Movie {
public:
	// Constructor
	Movie();
	Movie(string title, string director, int year, double rating, int popularity);

	void Print();

	string title;
	string director;
	int year;
	double rating;
	double popularity;
	double score;
};