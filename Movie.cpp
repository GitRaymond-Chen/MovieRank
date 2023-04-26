#include "Movie.h"
#include <iostream>

Movie::Movie() {
	title = "";
	actor = "";
	year = 0;
	rating = 0.0;
}

Movie::Movie(string title, string actor, vector<string> genre, int year, double rating){
	this->title = title;
	this->actor = actor;
	this->year = year;
	this->rating = rating;
	this->genre = genre;
}

void Movie::Print() {
	cout << title << " (" << year << ") " << endl;
	cout << "Actor: " << actor << endl;
	cout << "Genre: ";
	for (int i = 0; i < genre.size() - 1; i++)
		cout << genre[i] << ", ";
	cout << genre[genre.size() - 1] << endl;
	cout << "Rating: " << rating << endl;
}