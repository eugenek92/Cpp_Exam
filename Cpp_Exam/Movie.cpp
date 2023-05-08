#include <iostream>
#include "Movie.h"
#include <string>

using namespace std;

void Movie::CreateMovie() {
	movieList = new Movie[listSize];
	movieList[0].name = "Final Fantasy";
	movieList[0].type = "Anime";
	movieList[0].genre = "Fantasy";
	movieList[0].country = "Japan";
	movieList[0].year = 1992;
	movieList[0].series = 18;
	movieList[0].seasons = 15;
	movieList[0].time = 25;
	movieList[0].plot = "Japanese fantasy franchise, which has more than 10 seasons.";
	movieList[0].movieID = 0;


	movieList[1].name = "Alina in Wonderlands";
	movieList[1].type = "Cartoon";
	movieList[1].genre = "Adventure";
	movieList[1].country = "Australia";
	movieList[1].year = 1992;
	movieList[1].series = 0;
	movieList[1].seasons = 0;
	movieList[1].time = 132;
	movieList[1].plot = "A fabulous story about a girl Alina who fell into a kangaroo hole.";
	movieList[1].movieID = 1;


	movieList[2].name = "Fate of the Android";
	movieList[2].type = "Serial";
	movieList[2].genre = "Fantasy";
	movieList[2].country = "South Korea";
	movieList[2].year = 2020;
	movieList[2].series = 18;
	movieList[2].seasons = 1;
	movieList[2].time = 50;
	movieList[2].plot = "An exciting series that describes the entire life cycle of Android.";
	movieList[2].movieID = 2;


	movieList[3].name = "Streets of Rage";
	movieList[3].type = "Movie";
	movieList[3].genre = "Action";
	movieList[3].country = "USA";
	movieList[3].year = 1989;
	movieList[3].series = 0;
	movieList[3].seasons = 0;
	movieList[3].time = 145;
	movieList[3].plot = "Action movie about a former policeman who challenged city crime.";
	movieList[3].movieID = 3;


	movieList[4].name = "Vacation's in VillageFalls";
	movieList[4].type = "Cartoon series";
	movieList[4].genre = "Mystery";
	movieList[4].country = "USA";
	movieList[4].year = 2019;
	movieList[4].series = 10;
	movieList[4].seasons = 3;
	movieList[4].time = 21;
	movieList[4].plot = "A mystical story about the summer vacation of schoolchildren who unravel the secrets of a small town.";
	movieList[4].movieID = 4;


	movieList[5].name = "Policeman in Paris";
	movieList[5].type = "Movie";
	movieList[5].genre = "Comedy";
	movieList[5].country = "France";
	movieList[5].year = 1973;
	movieList[5].series = 0;
	movieList[5].seasons = 0;
	movieList[5].time = 95;
	movieList[5].plot = "A funny police story about the adventures of a witty policeman.";
	movieList[5].movieID = 5;


	movieList[6].name = "CyberSword";
	movieList[6].type = "Anime";
	movieList[6].genre = "Fantasy";
	movieList[6].country = "Japan";
	movieList[6].year = 2023;
	movieList[6].series = 8;
	movieList[6].seasons = 1;
	movieList[6].time = 25;
	movieList[6].plot = "Short anime series, about technologies of the future, problems of the past...";
	movieList[6].movieID = 6;


	movieList[7].name = "Undercover";
	movieList[7].type = "Serial";
	movieList[7].genre = "Drama";
	movieList[7].country = "USA";
	movieList[7].year = 1998;
	movieList[7].series = 4;
	movieList[7].seasons = 12;
	movieList[7].time = 53;
	movieList[7].plot = "A collection of stories about police officers forced to live a double life.";
	movieList[7].movieID = 7;


	movieList[8].name = "The life of beavers";
	movieList[8].type = "Movie";
	movieList[8].genre = "Documental";
	movieList[8].country = "Canada";
	movieList[8].year = 2010;
	movieList[8].series = 0;
	movieList[8].seasons = 0;
	movieList[8].time = 108;
	movieList[8].plot = "Immerse yourself in the wonderful world of beavers.";
	movieList[8].movieID = 8;

}

void Movie::FillMovieInf() {
	cout << "Enter object name: ";
	cin >> name;
	cout << "Enter "<< name <<" type (Movie, Cartoon, Serial, Cartoon series, Anime): ";
	cin >> type;
	cout << "Enter " << type << " genre (Action, Adventure, Comedy, Drama, Documental, Fantasy, Mystery): ";
	cin >> genre;
	cout << "Enter " << name << " country of production: ";
	cin >> country;
	cout << "Enter " << name << " year of production: ";
	cin >> year;
	cout << "Enter " << name << " number of seasons: ";
	cin >> seasons;
	cout << "Enter " << name << " number of series: ";
	cin >> series;
	cout << "Enter " << name << " duration (in minutes): ";
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
			cout << "Duration time: " << movieList[i].time <<" minutes"<< endl;
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
	cout << "Genres are currently available: Action, Adventure, Comedy, Drama, Documental, Fantasy, Mystery" << endl;
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
			cout << "Duration time: " << movieList[i].time << " minutes" << endl;
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
	cout << "Countries are currently available: Australia, Canada, France, Japan, South Korea, USA" << endl;
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
			cout << "Duration time: " << movieList[i].time << " minutes" << endl;
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
			cout << "Duration time: " << movieList[i].time << " minutes" << endl;
			cout << "Plot: " << movieList[i].plot << endl;
			cout << "ID: " << movieList[i].movieID << endl;
			cout << endl;
		}
		else {
			cout << "Sorry, we hawn't object with year " << searchYear << endl;
		}
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
				cout << "Enter new object type (Movie, Cartoon, Serial, Cartoon series, Anime): " << endl;
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