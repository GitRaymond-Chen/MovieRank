#pragma once
#include <string>
using namespace std;

class Movie {
public:
	// Constructor
	Movie();
	Movie(string title, string actor, int year, double rating);

	void Print();

	string title;
	string actor;
	int year;
	double rating;
};