#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Movie {
private:
	string name;
	string type;
	string genre;
	string country;
	unsigned int year;
	unsigned int series;
	unsigned int seasons;
	unsigned int time;
	string plot;
	int movieID=0;
	int listSize = 1;
	Movie* movieList;
public:
	void CreateMovie();
	void FillMovieInf();
	void ShowMovie();
	void AddMovie();
	void DeleteMovie(int DeletingID);
};
