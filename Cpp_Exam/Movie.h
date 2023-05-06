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
public:
	void CreateMovie();
	void ShowMovie();
};
