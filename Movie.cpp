#include "Movie.h"
#include <iostream>

Movie::Movie() {
	title = "";
	year = 0;
	rating = 0.0;
	popularity = 0.0;
	revenue = 0;
}

Movie::Movie(string title, int year, double rating, double popularity, int revenue){
	this->title = title;
	this->year = year;
	this->rating = rating;
	this->popularity = popularity;
	this->revenue = revenue;
}

void Movie::Print() {
	cout << title << " (" << year << ") " << endl;
	cout << "Rating: " << rating << "  |  Popularity: " << popularity << endl;
	cout << "Revenue: " << revenue << endl;
}