#include <iostream>
#include "Store.h"

using namespace std;

void Store::CreateStore() {
	movies = new Movie[size];

}

void Store::AddMovie() {
	Movie* tmpArr = new Movie[size + 1];
	for (int i = 0; i < size; i++) {
		tmpArr[i] = movies[i];
	}
	tmpArr[size].CreateMovie();
	delete[]movies;
	movies = tmpArr;
	size++;
}