#include <iostream>
#include "Movie.h"
#include <string>
#include <fstream>

using namespace std;
fstream file;

void Movie::CreateMovie() {
	movieList = new Movie[listSize];
	movieList[0].name = "Final_Fantasy";
	movieList[0].type = "Cartoon series";
	movieList[0].genre = "Anime";
	movieList[0].country = "Japan";
	movieList[0].year = "1992";
	movieList[0].series = "18";
	movieList[0].seasons = "15";
	movieList[0].time = "25";
	movieList[0].plot = "Japanese fantasy franchise, which has more than 10 seasons.";
	movieList[0].movieID = 0;
}

void Movie::FirstFile() {
	file.open("Test", ios::out);
	if (file.is_open()) {
		file << movieList[0].name << endl;
		file << "Cartoon series\n";
		file << "Anime\n";
		file << "Japan\n";
		file << "1992\n";
		file << "18\n";
		file << "15\n";
		file << "25\n";
		file << "Japanese fantasy franchise, which has more than 10 seasons.\n";
		file.close();
	}
}



void Movie::FillMovieInf() {
	cout << "Enter object name: ";
	getline(cin, name);
	file.open("Test", ios_base::app);
	file << name << "\n";
	cout << "Enter "<< name <<" type (Movie, Cartoon, Serial, Cartoon series): ";
	getline(cin, type);
	file << type << "\n";
	cout << "Enter " << name << " genre (Action, Adventure, Anime Comedy, Drama, Documental, Fantasy, Mystery): ";
	getline(cin, genre);
	file << genre << "\n";
	cout << "Enter " << name << " country of production: ";
	getline(cin, country);
	file << country << "\n";
	cout << "Enter " << name << " year of production: ";
	getline(cin, year);
	file << year << "\n";
	cout << "Enter " << name << " number of seasons: ";
	getline(cin, seasons);
	file << seasons << "\n";
	cout << "Enter " << name << " number of series: ";
	getline(cin, series);
	file << series << "\n";
	cout << "Enter " << name << " duration (in minutes): ";
	getline(cin, time);
	file << time << "\n";
	cout << "Write " << name << " plot:";
	getline(cin, plot);
	file << plot << "\n";
	file.close();
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
		cout << "Duration time: " << movieList[i].time << " minutes" << endl;
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
	bool iSearch = false;
	string searchName;
	cout << "Enter the name you want to search: " << endl;
	cin >> searchName;
	system("cls");
	cout << "Results for searching name: " << searchName << endl;
	for (int i = 0; i < listSize; i++) {
		if (movieList[i].name == searchName) {
			iSearch = true;
			cout << endl;
			cout << "Name: " << movieList[i].name << endl;
			cout << "Type: " << movieList[i].type << endl;
			cout << "Genre: " << movieList[i].genre << endl;
			cout << "Country of production: " << movieList[i].country << endl;
			cout << "Year of production: " << movieList[i].year << endl;
			cout << "Number of seasons: " << movieList[i].seasons << endl;
			cout << "Number of series: " << movieList[i].series << endl;
			cout << "Duration time: " << movieList[i].time <<" minutes"<< endl;
			cout << "Plot: " << movieList[i].plot << endl;
			cout << "ID: " << movieList[i].movieID << endl;
			cout << endl;
		}
	}
	if (!iSearch) {
		cout << "Sorry, we hawn't object with year " << searchName << endl;
	}
	system("pause");
}

void Movie::SearchByGenre() {
	bool iSearch = false;
	string searchGenre;
	cout << "Genres are currently available: Action, Adventure, Anime, Comedy, Drama, Documental, Fantasy, Mystery" << endl;
	cout << "Enter the genre you want to search: " << endl;
	cin >> searchGenre;
	system("cls");
	cout << "Results for searching genre: " << searchGenre << endl;
	for (int i = 0; i < listSize; i++) {
		if (movieList[i].genre == searchGenre) {
			iSearch = true;
			cout << endl;
			cout << "Name: " << movieList[i].name << endl;
			cout << "Type: " << movieList[i].type << endl;
			cout << "Genre: " << movieList[i].genre << endl;
			cout << "Country of production: " << movieList[i].country << endl;
			cout << "Year of production: " << movieList[i].year << endl;
			cout << "Number of seasons: " << movieList[i].seasons << endl;
			cout << "Number of series: " << movieList[i].series << endl;
			cout << "Duration time: " << movieList[i].time << " minutes" << endl;
			cout << "Plot: " << movieList[i].plot << endl;
			cout << "ID: " << movieList[i].movieID << endl;
			cout << endl;
		}
	}
	if (!iSearch) {
		cout << "Sorry, we hawn't object with year " << searchGenre << endl;
	}
	system("pause");
}

void Movie::SearchByCountry() {
	bool iSearch = false;
	string searchCountry;
	cout << "Countries are currently available: Australia, Canada, France, Japan, South Korea, USA" << endl;
	cout << "Enter the country of production you want to search: " << endl;
	cin >> searchCountry;
	system("cls");
	cout << "Results for searching country of production: " << searchCountry << endl;
	for (int i = 0; i < listSize; i++) {
		if (movieList[i].country == searchCountry) {
			iSearch = true;
			cout << endl;
			cout << "Name: " << movieList[i].name << endl;
			cout << "Type: " << movieList[i].type << endl;
			cout << "Genre: " << movieList[i].genre << endl;
			cout << "Country of production: " << movieList[i].country << endl;
			cout << "Year of production: " << movieList[i].year << endl;
			cout << "Number of seasons: " << movieList[i].seasons << endl;
			cout << "Number of series: " << movieList[i].series << endl;
			cout << "Duration time: " << movieList[i].time << " minutes" << endl;
			cout << "Plot: " << movieList[i].plot << endl;
			cout << "ID: " << movieList[i].movieID << endl;
			cout << endl;
		}
	}
	if (!iSearch) {
		cout << "Sorry, we hawn't object with year " << searchCountry << endl;
	}
	system("pause");
}

void Movie::SearchByYear() {
	bool iSearch = false;
	string searchYear;
	cout << "Enter the year of production you want to search: " << endl;
	cin >> searchYear;
	system("cls");
	cout << "Results for searching year of production: " << searchYear << endl;
	 for (int i = 0; i < listSize; i++) {
		if (movieList[i].year == searchYear) {
			iSearch = true;
			cout << endl;
			cout << "Name: " << movieList[i].name << endl;
			cout << "Type: " << movieList[i].type << endl;
			cout << "Genre: " << movieList[i].genre << endl;
			cout << "Country of production: " << movieList[i].country << endl;
			cout << "Year of production: " << movieList[i].year << endl;
			cout << "Number of seasons: " << movieList[i].seasons << endl;
			cout << "Number of series: " << movieList[i].series << endl;
			cout << "Duration time: " << movieList[i].time << " minutes" << endl;
			cout << "Plot: " << movieList[i].plot << endl;
			cout << "ID: " << movieList[i].movieID << endl;
			cout << endl;
		}
	}
	 if(!iSearch) {
	 cout << "Sorry, we hawn't object with year " << searchYear << endl;
		}
	 system("pause");
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
				cout << "Enter new object type (Movie, Cartoon, Serial, Cartoon series): " << endl;
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
				cout << "Enter new object duration time(in minutes): " << endl;
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


void Movie::ReadFile() {
	file.open("Test", ios_base::in);
	if (file.is_open()) {
		string line;
		int count = 0;
		while (getline(file, line)) {
			count++;
		}
		listSize = count / 9;
		file.clear();
		file.seekg(0, ios::beg);
		movieList = new Movie[listSize];
		int i = 1;
		while (i < listSize) {
			getline(file, movieList[i].name);
			getline(file, movieList[i].type);
			getline(file, movieList[i].genre);
			getline(file, movieList[i].country);
			getline(file, movieList[i].year);
			getline(file, movieList[i].seasons);
			getline(file, movieList[i].series);
			getline(file, movieList[i].time);
			getline(file, movieList[i].plot);
			i++;
		}
	}
	file.close();
}

void Movie::WriteFile() {
	file.open("Test", ios_base::trunc);
	file.close();
	file.open("Test", ios_base::app);
	if (file.is_open()) {
		for (int i = 0; i < listSize; i++) {
			file << movieList[i].name << "\n";
			file << movieList[i].type << "\n";
			file << movieList[i].genre << "\n";
			file << movieList[i].country << "\n";
			file << movieList[i].year << "\n";
			file << movieList[i].seasons << "\n";
			file << movieList[i].series << "\n";
			file << movieList[i].time << "\n";
			file << movieList[i].plot << "\n";
		}
	}
	file.close();
}
