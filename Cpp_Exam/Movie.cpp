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
	    cout << "======================CppStream======================";
	for (int i = 0; i < listSize; i++) {
		cout << endl;
		cout << "====================================================="<<endl;
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
		cout << "====================================================="<<endl;
		cout << endl;
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

void Movie::DeleteMovie(int deletingID) {
	Movie* tmpArr = new Movie[listSize - 1];

	for (int i = 0; i < listSize; i++) {
		if (deletingID > i) {
			tmpArr[i] = movieList[i];
		}
		else if (deletingID < i) {
			tmpArr[i - 1] = movieList[i];
		}
	}
	delete[]movieList;
	movieList = tmpArr;
	listSize--;
}

void Movie::SearchByName() {
	string searchName;
	cout << "Enter the name you want to search: " << endl;
	cin >> searchName;
	system("cls");
	cout << "Results for searching name: " << searchName << endl;
	for (int i = 0; i < listSize; i++) {
		if (movieList[i].name == searchName) {
			cout << endl;
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
			cout << endl;
		}
		else if (movieList[i].name != searchName) {
			cout << "Sorry, we hawn't object with name " << searchName << endl;
		}
		system("pause");
	}
}

void Movie::SearchByGenre() {
	string searchGenre;
	cout << "Enter the genre you want to search: " << endl;
	cin >> searchGenre;
	system("cls");
	cout << "Results for searching genre: " << searchGenre << endl;
	for (int i = 0; i < listSize; i++) {
		if (movieList[i].genre == searchGenre) {
			cout << endl;
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
			cout << endl;
		}
		else if (movieList[i].genre != searchGenre) {
			cout << "Sorry, we hawn't object with genre " << searchGenre << endl;
		}
		system("pause");
	}
}

void Movie::SearchByCountry() {
	string searchCountry;
	cout << "Enter the country of production you want to search: " << endl;
	cin >> searchCountry;
	system("cls");
	cout << "Results for searching country of production: " << searchCountry << endl;
	for (int i = 0; i < listSize; i++) {
		if (movieList[i].country == searchCountry) {
			cout << endl;
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
			cout << endl;
		}
		else if (movieList[i].country != searchCountry) {
			cout << "Sorry, we hawn't object with country " << searchCountry << endl;
		}
		system("pause");
	}
}

void Movie::SearchByYear() {
	unsigned int searchYear;
	cout << "Enter the year of production you want to search: " << endl;
	cin >> searchYear;
	system("cls");
	cout << "Results for searching year of production: " << searchYear << endl;
	for (int i = 0; i < listSize; i++) {
		if (movieList[i].year == searchYear) {
			cout << endl;
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
			cout << endl;
		}
		else if (movieList[i].year != searchYear) {
			cout << "Sorry, we hawn't object with year " << searchYear << endl;
		}
		system("pause");
	}
}

void Movie::EditMovie() {
	bool exitMenu = false;
	int edit;
	int deletingID;
	cout << "Enter ID object, you want to edit: " << endl;
	cin >> deletingID;
	system("cls");
	for (int i = 0; i < listSize; i++) {
		if (movieList[i].movieID == deletingID) {
			cout << "Administrator, select what you want to edit: " << endl;
			cout << "1.Name\n2.Type\n3.Genre\n4.Country of production\n5.Year of production"
				<<"\n6.Number of seasons\n7.Number of series\n8.Duration time\n9.Plot\n0.Exit"<<endl;
			cin >> edit;
			system("cls");
			switch (edit) {
				exitMenu = false;
				while (!exitMenu) {
			case 1:
				cout << "Enter new object name: " << endl;
				cin >> movieList[i].name;
				break;
			case 2:
				cout << "Enter new object type: " << endl;
				cin >> movieList[i].type;
				break;
			case 3:
				cout << "Enter new object genre: " << endl;
				cin >> movieList[i].genre;
				break;
			case 4:
				cout << "Enter new object country of production: " << endl;
				cin >> movieList[i].country;
				break;
			case 5:
				cout << "Enter new object year of production: " << endl;
				cin >> movieList[i].year;
				break;
			case 6:
				cout << "Enter new object number of seasons: " << endl;
				cin >> movieList[i].seasons;
				break;
			case 7:
				cout << "Enter new object number of series: " << endl;
				cin >> movieList[i].series;
				break;
			case 8:
				cout << "Enter new object duration time: " << endl;
				cin >> movieList[i].time;
				break;
			case 9:
				cout << "Enter new object plot: " << endl;
				cin >> movieList[i].plot;
				break;
			case 0:
				exitMenu = true;
				break;
			default:
				cout << "Error! Please, try again!" << endl;
				break;
				}
			}
		}
	}
}