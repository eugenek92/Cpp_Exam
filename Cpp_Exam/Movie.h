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
	int movieID=0;
	int listSize = 1;
	Movie* movieList;
public:
	void CreateMovie();
	void FillMovieInf();
	void ShowMovie();
	void AddMovie();
	void DeleteMovie(int deletingID);
	void SearchByName();
	void SearchByGenre();
	void SearchByCountry();
	void SearchByYear();
	void EditMovie();
	void WriteFile();
	void ReadFile();
	void FirstFile();
};
