#pragma once
#include <string>
using namespace std;

struct Movie
{
	string title;
	string year;
	string popularity;
	string rating;
	string revenue;
	Movie();
	void Print();
};