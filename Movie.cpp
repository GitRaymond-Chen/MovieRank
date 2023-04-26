#include "Movie.h"
#include <iostream>

Movie::Movie() {
	title = "";
	director = "";
	year = 0;
	rating = 0.0;
	popularity = 0;
	score = 0.0;
}

Movie::Movie(string title, string director, int year, double rating, int popularity) {
	this->title = title;
	this->director = director;
	this->year = year;
	this->rating = rating;
	this->popularity = popularity;

	score = rating;
	if (popularity <= 100)
		score++;
	if (popularity <= 50)
		score++;
	if (popularity <= 10)
		score++;
}

void Movie::Print() {
	cout << title << " (" << year << ") " << endl;
	cout << "Rating: " << rating << " | Poularity: " << popularity << endl;
	cout << "Directed by: " << director << endl;
	cout << "Score: " << score << endl;
}