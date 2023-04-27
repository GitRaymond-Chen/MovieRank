#pragma once
#include <string>
#include <vector>
using namespace std;

class Movie {
public:
	// Constructor
	Movie();
	Movie(string title, string year, string rating, string popularity, string revenue);

	void Print();

	string title;
	string year;
	string rating;
	string popularity;
	string revenue;
};