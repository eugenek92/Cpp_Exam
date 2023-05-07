#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

void Mainmenu() {
	int choice;
	bool exitProgram = false;
	bool exitMainMenu = false;
	bool exitMenu = false;
	string username;
	Movie Movies;
	Movies.CreateMovie();
	int DeletingID = 0;

	while (!exitProgram) {
		system("cls");
		cout << "=================CppStream=================";
		cout << "\nWelcome to CppStream! Please, enter your name: " << endl;
		cin >> username;
		system("cls");
		cout << "=================CppStream=================";
		cout << "\nPlease, select as which you want to enter: " << "\n1.Guest;\n2.Administrator\n0.Close CppStream app" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			exitMainMenu = false;
			while (!exitMainMenu) {
				system("cls");
				cout << "Hello " << username << "!" << "\nWelcome to our stream-service \"CppStream\"" << endl;
				cout << username << " please, select what you want to do: ";
				cout << "\n1.Show store\n2.Search\n3.Watch information about service\n0.Exit" << endl;
				cin >> choice;
				switch (choice) {
					exitMenu = false;
					while (!exitMenu) {
				case 1:
					system("cls");
					Movies.ShowMovie();
					cout << "0.Go back" << endl;
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
					cout << "Information about CppStream in progres...Coming soon...\n0.Go back" << endl;
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
			exitMainMenu = false;
			while (!exitMainMenu) {
				system("cls");
				cout << "Hello administrator " << username << "!" << endl;
				cout <<"Administrator " << username << " please, select what you need: ";
				cout << "\n1.Show store\n2.Search\n3.Add new object\n4.Edit object\n5.Delete object\n0.Exit" << endl;
				cin >> choice;
				switch (choice) {
					exitMenu = false;
					while (!exitMenu) {
				case 2:
					system("cls");
					cout << "Search by: \n1.Name;\n2.Genre;\n3.Country of production;\n4.Year of production;\n0.Go back\n";
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
}

