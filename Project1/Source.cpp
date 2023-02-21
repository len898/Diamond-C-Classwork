#include <iostream>

//void fillRow(char arr1[], int length, char background);

int main() {
	const int width = 21;
	//std::cout << "Enter the width: ";
	//std::cin >> width;

	char arrayToBeUsed[width][width];

	for (int row = 0; row < width; row++) {
		for (int column = 0; column < width; column++) {
			arrayToBeUsed[row][column] = ' ';
		}
	}
	int offset = width / 2;
	int distFromMiddle = width - 1;

	for (int row = 0; row < width/2; row++) {
		int numSpecial = row * 2 + 1;
		int currStars = 0;
		for (int column = offset; column < width; column++) {
			arrayToBeUsed[row][column] = '*';
			arrayToBeUsed[row + distFromMiddle][column] = '*';
			currStars++;
			if (currStars == numSpecial)
			{
				column = width;
			}
		}
		offset--;
		distFromMiddle = distFromMiddle - 2;
	}

	for (int row = width / 2; row == width / 2; row++) {
		for (int column = 0; column < width; column++) {
			arrayToBeUsed[row][column] = '*';
		}
	}


	for (int row = 0; row < width; row++) {
		for (int column = 0; column < width; column++) {
			std::cout << arrayToBeUsed[row][column];
		}
		std::cout << std::endl;
	}

}
