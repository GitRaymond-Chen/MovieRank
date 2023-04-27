#include <iostream>
#include "Search.h"
using namespace std;

int main()
{
	Search movies("1995");
	for (auto itr = movies.searchmovieList.begin(); itr != movies.searchmovieList.end(); ++itr)
	{
		cout << itr->title << endl;
	}
	/*cout << movies.searchmovieList[0].title << endl;
	cout << movies.searchmovieList[0].year << endl;
	cout << movies.searchmovieList[0].popularity << endl;
	cout << movies.searchmovieList[0].rating << endl;
	cout << movies.searchmovieList[0].revenue << endl;
	cout << movies.searchmovieList[1].title << endl;
	cout << movies.searchmovieList[1].year << endl;
	cout << movies.searchmovieList[1].popularity << endl;
	cout << movies.searchmovieList[1].rating << endl;
	cout << movies.searchmovieList[1].revenue << endl;*/
	return 0;
}