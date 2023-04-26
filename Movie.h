#pragma once
#include <string>
#include <vector>
using namespace std;

class Movie {
public:
	// Constructor
	Movie();
	Movie(string title, string actor, vector<string> genre, int year, double rating);

	void Print();

	string title;
	string actor;
	int year;
	double rating;
	vector<string> genre;
};