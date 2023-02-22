#include <iostream>

int main() {
	const int width = 80;

	char arrayToBeUsed[width][width] ;

	for (int row = 0; row < width; row++) {
		for (int column = 0; column < width; column++) {
			arrayToBeUsed[row][column] = ' ';
		}
	}

	if (width % 2 != 0) {
		int starsForRow = width;
		int middle = width / 2;
		int offset = 0;
		int middleDistance = 0;

		while (starsForRow >= 1) {
			for (int numStars = 0; numStars < starsForRow; numStars++) {
				arrayToBeUsed[middle + offset][middleDistance + numStars] = '*';
				arrayToBeUsed[middle - offset][middleDistance + numStars] = '*';
			}
			starsForRow -= 2;
			offset += 1;
			middleDistance += 1;
		}
	}
	else {
		int starsForRow = width;
		int middle = width / 2;
		int lowerOffset = 1;
		int upperOffset = 0;
		int middleDistance = 0;

		while (starsForRow >= 1) {
			for (int numStars = 0; numStars < starsForRow; numStars++) {
				if (middleDistance + numStars < width / 2) {
					arrayToBeUsed[middle + upperOffset][middleDistance + numStars] = '\\';
					arrayToBeUsed[middle - lowerOffset][middleDistance + numStars] = '/';
				}
				else {
					arrayToBeUsed[middle + upperOffset][middleDistance + numStars] = '/';
					arrayToBeUsed[middle - lowerOffset][middleDistance + numStars] = '\\';
				}
				
			}
			starsForRow -= 2;
			upperOffset += 1;
			lowerOffset += 1;
			middleDistance += 1;
		}
	}

	

	for (int row = 0; row < width; row++) {
		for (int column = 0; column < width; column++) {
			std::cout << arrayToBeUsed[row][column];
		}
		std::cout << std::endl;
	}

}