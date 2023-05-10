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
	string year;
	string series;
	string seasons;
	string time;
	string plot;
	string movieID;
	int listSize = 0;
	Movie* movieList;
public:
	void FillMovieInf();
	void ShowMovie();
	void AddMovie();
	void DeleteMovie(string deletingID);
	void SearchByName();
	void SearchByGenre();
	void SearchByCountry();
	void SearchByYear();
	void EditMovie();
	void WriteFile();
	void ReadFile();
};
