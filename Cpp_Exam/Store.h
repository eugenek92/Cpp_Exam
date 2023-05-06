#pragma once
#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

struct Store {
private:
	string name;
	Movie* movies;
	int size=8;
public:
	void CreateStore();
	void AddMovie();
	void DeleteMovie();
	void EditMovie();
	void SearchMovie();
};
