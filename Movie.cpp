#include "Movie.h"
#include <iostream>

Movie::Movie() {
	title = "";
	year = "";
	rating = "";
	popularity = "";
	revenue = "";
}

Movie::Movie(string title, string year, string rating, string popularity, string revenue){
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