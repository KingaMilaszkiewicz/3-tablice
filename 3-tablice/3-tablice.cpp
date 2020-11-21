// 3-tablice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define N 3
#define M 4

int main() {
	int tab[N][M];
	int lowestNumbers[N];
	int x = 0;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			x++;
			std::cout << "Podaj liczbe ("<< x << "/12): " << std::endl;
			std::cin >> tab[i][j];
		}
		int lowest = tab[i][0]; // declaring first lowest number to compare others to
		for(int j = 1; j < M; j++) { // checking the rest of the row for the lowest number
			if (tab[i][j] < lowest) {
				lowest = tab[i][j];
			}
		}
		lowestNumbers[i] = lowest; // creating a table with the lowest numbers to nicely display it
	}
	for(int i = 0; i < N; i++) {
		std::cout << "Najmniejsza liczba w wierszu " << i << " to " << lowestNumbers[i] << "." << std::endl;
	}
	return 0;
}