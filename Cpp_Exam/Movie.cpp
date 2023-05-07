#include <iostream>
#include "Movie.h"
#include <string>

using namespace std;

void Movie::CreateMovie() {
	movieList = new Movie[listSize];
	movieList[0].name = "Name";
	movieList[0].type = "Type";
	movieList[0].genre = "Genre";
	movieList[0].country = "Country";
	movieList[0].year = 0;
	movieList[0].series = 0;
	movieList[0].seasons = 0;
	movieList[0].time = 0;
	movieList[0].plot = "Plot";
	movieList[0].movieID = 0;
}

void Movie::FillMovieInf() {
	cout << "Enter object name: ";
	cin >> name;
	cout << "Enter "<< name <<" type(movie, cartoon, serial, cartoon series, anime): ";
	cin >> type;
	cout << "Enter " << type << " genre: ";
	cin >> genre;
	cout << "Enter " << name << " country of production: ";
	cin >> country;
	cout << "Enter " << name << " year of production: ";
	cin >> year;
	cout << "Enter " << name << " number of seasons: ";
	cin >> seasons;
	cout << "Enter " << name << " number of series: ";
	cin >> series;
	cout << "Enter " << name << " duration: ";
	cin >> time;
	cout << "Write " << name << " plot:";
	cin >> plot;
}

void Movie::ShowMovie() {
	for (int i = 0; i < listSize; i++) {
		cout << "Name: " << movieList[i].name << endl;
		cout << "Type: " << movieList[i].type << endl;
		cout << "Genre: " << movieList[i].genre << endl;
		cout << "Country of production: " << movieList[i].country << endl;
		cout << "Year of production: " << movieList[i].year << endl;
		cout << "Number of seasons: " << movieList[i].seasons << endl;
		cout << "Number of series: " << movieList[i].series << endl;
		cout << "Duration time: " << movieList[i].time << endl;
		cout << "Plot: " << movieList[i].plot << endl;
		cout << "ID: " << movieList[i].movieID << endl;
	}
}

void Movie::AddMovie() {
	Movie* tmpArr = new Movie[listSize + 1];
	for (int i = 0; i < listSize; i++) {
		tmpArr[i] = movieList[i];
	}
	movieID++;
	tmpArr[listSize].FillMovieInf();
	tmpArr[listSize].movieID = movieID;
	delete[]movieList;
	movieList = tmpArr;
	listSize++;
}

void Movie::DeleteMovie(int DeletingID) {
	Movie* tmpArr = new Movie[listSize - 1];

	for (int i = 0; i < listSize; i++) {
		if (DeletingID > i) {
			tmpArr[i] = movieList[i];
		}
		else if (DeletingID < i) {
			tmpArr[i - 1] = movieList[i];
		}
	}
	delete[]movieList;
	movieList = tmpArr;
	listSize--;
}
