#include "Movie.h"
#include <iostream>

Movie::Movie() {
	title = "";
	actor = "";
	year = 0;
	rating = 0.0;
}

Movie::Movie(string title, string actor, int year, double rating){
	this->title = title;
	this->actor = actor;
	this->year = year;
	this->rating = rating;
}

void Movie::Print() {
	cout << title << " (" << year << ") " << endl;
	cout << "Rating: " << rating << endl;
	cout << "Actor: " << actor << endl;
}