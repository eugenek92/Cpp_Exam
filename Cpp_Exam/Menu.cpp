#include <iostream>
#include <string>
#include "Movie.h"
#include <fstream>

using namespace std;


void Mainmenu() {
	int choice;
	int password;    //administrator password=1234
	bool exitProgram = false;
	bool exitMainMenu = false;
	bool exitMenu = false;
	string username;
	Movie Movies;
    Movies.ReadFile();
	string deletingID;
	string searchName;

	while (!exitProgram) {
		system("cls");
		cout << "======================CppStream======================";
		cout << "\nWelcome to CppStream! Please, enter your name: " << endl;
		cin >> username;
		system("cls");
		cout << "======================CppStream======================";
		cout << "\nPlease, select as which you want to enter: " << "\n1.Guest;\n2.Administrator\n0.Close CppStream app" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			exitMainMenu = false;
			while (!exitMainMenu) {
				system("cls");
				cout << "======================CppStream======================" << endl;
				cout << "Hello " << username << "!" << "\nWelcome to our stream-service \"CppStream\"" << endl;
				cout << "\n(!) " << username << " if you use \"CppStream\" first time, please read brief information about our service (section 3) "<<endl;
				cout << " " << endl;
				cout <<  username << " please, select what you want to do: ";
				cout << "\n\n1.Show store\n2.Search\n3.Rules of use and information\n0.Exit" << endl;
				cin >> choice;
				switch (choice) {
					exitMenu = false;
					while (!exitMenu) {
				case 1:
					system("cls");
					Movies.ShowMovie();
					cout << "\n0.Go back" << endl;
					cin >> choice;
					switch (choice) {
					case 0:
						exitMenu = true;
						break;
					default:
						cout << "Error! Please, try again!" << endl;
						break;
					}
					break;
				case 2:
					system("cls");
					cout << "Search by: \n1.Name;\n2.Genre;\n3.Country of production;\n4.Year of production;\n0.Go back\n";
					cin >> choice;
					switch (choice) {
					case 1:
						system("cls");
						Movies.SearchByName();
						break;
					case 2:
						system("cls");
						Movies.SearchByGenre();
						break;
					case 3:
						system("cls");
						Movies.SearchByCountry();
						break;
					case 4:
						system("cls");
						Movies.SearchByYear();
						break;
					case 0:
						exitMenu = true;
						break;
					default:
						cout << "Error! Please, try again!" << endl;
						break;
					}
					break;
				case 3:
					system("cls");
					cout << "Welcome " << username << "!" <<
						"\n\nThank you for reading!\n" <<
						"CppStream is examination project, which was created to meet the needs " <<
						"\nof finding information about movies, " <<
						"serials, cartoon's, anime. "<< endl;
					    cout << " " << endl;
						cout << username << ", as a user you can use such functionality:" <<
						"\nShow store - this will allow you to browse our media library;" <<
						"\nSearch - this feature allows you to search for a media file by name, genre, country of manufacture or year of release." << endl;
					    cout << " " << endl;
						cout << username << ", if you are an administrator and want to make changes to our library" <<
						" please, log in using your password." <<
						"\n\nWe hope you enjoy using our app CppStream!" <<
						"\n\n0.Go back" << endl;
					cin >> choice;
					switch (choice) {
					case 0:
						exitMenu = true;
						break;
					default:
						cout << "Error! Please, try again!" << endl;
						break;
					}
					break;
				case 0:
					exitMainMenu = true;
					break;
				default:
					cout << "Error! Please, try again!" << endl;
					break;
					}

				}
			}
			break;
		case 2:
			system("cls");
			cout << "If you administrator,please enter your password: " << endl;
			cin >> password;
			switch (password) {
			case 1234:
				exitMainMenu = false;
				while (!exitMainMenu) {
					system("cls");
					cout << "======================CppStream======================" << endl;
					cout << "\nHello administrator " << username << "!" << endl;
					cout << "Administrator " << username << " please, select what you need: ";
					cout << "\n\n1.Show store\n2.Search\n3.Add new object\n4.Edit object\n5.Delete object\n0.Exit" << endl;
					cin >> choice;
					switch (choice) {
						exitMenu = false;
						while (!exitMenu) {
					case 1:
						system("cls");
						Movies.ShowMovie();
						cout << "\n0.Go back" << endl;
						cin >> choice;
						switch (choice) {
						case 0:
							exitMenu = true;
							break;
						default:
							cout << "Error! Please, try again!" << endl;
							break;
						}
						break;
					case 2:
						system("cls");
						cout << "Search by: \n1.Name;\n2.Genre;\n3.Country of production;\n4.Year of production;\n0.Go back\n";
						cin >> choice;
						switch (choice) {
						case 1:
							system("cls");
							Movies.SearchByName();
							break;
						case 2:
							system("cls");
							Movies.SearchByGenre();
							break;
						case 3:
							system("cls");
							Movies.SearchByCountry();
							break;
						case 4:
							system("cls");
							Movies.SearchByYear();
							break;
						case 0:
							exitMenu = true;
							break;
						default:
							cout << "Error! Please, try again!" << endl;
							break;
						}
						break;
					case 3:
						system("cls");
						Movies.AddMovie();
						cout << "Object has been added!\n0.Go back" << endl;
						cin >> choice;
						switch (choice) {
						case 0:
							exitMenu = true;
							break;
						default:
							cout << "Error! Please, try again!" << endl;
							break;
						}
						break;
					case 4:
						system("cls");
						Movies.EditMovie();
						Movies.WriteFile();
						cout << "Editing was successful!\n0.Go back" << endl;
						cin >> choice;
						switch (choice) {
						case 0:
							exitMenu = true;
							break;
						default:
							cout << "Error! Please, try again!" << endl;
							break;
						}
						break;
					case 5:
						system("cls");
						cout << "Administrator, enter ID of object you want to delete: ";
						cin >> deletingID;
						Movies.DeleteMovie(deletingID);
						Movies.WriteFile();
						cout << "Deletion was successful!\n0.Go back" << endl;
						cin >> choice;
						switch (choice) {
						case 0:
							exitMenu = true;
							break;
						default:
							cout << "Error! Please, try again!" << endl;
							break;
						}
						break;
					case 0:
						exitMainMenu = true;
						break;
					default:
						cout << "Error! Please, try again!" << endl;
						break;
						}
					}
				}
				break;
			case 0:
				exitProgram = true;
				break;
			default:
				cout << "Error! Please, try again!" << endl;
				break;
			}
		}
		break;
	}
}

