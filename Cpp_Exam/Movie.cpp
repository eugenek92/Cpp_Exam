#include <iostream>
#include "Movie.h"
#include <string>

using namespace std;

void Movie::CreateMovie() {
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
	cout << "Name: " << name << endl;
	cout << "Type: " << type << endl;
	cout << "Genre: " << genre << endl;
	cout << "Country of production: " << country << endl;
	cout << "Year of production: " << year << endl;
	cout << "Number of seasons: " << seasons << endl;
	cout << "Number of series: " << series << endl;
	cout << "Duration time: " << time << endl;
	cout << "Plot: " << plot << endl;
}
