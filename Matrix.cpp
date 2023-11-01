#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n;
	//Двумерные массивы
	
	const int rows = 4; // кол-во рядов двумерного массива
	const int cols = 3; // кол-о коллонок двумерого массива
	int mx[rows][cols]; // объявление двумерного массива
	mx[2][1] = 7;
	std::cout << "mx[2][1] = " << mx[2][1] << '\n';

	int table[rows][cols]{
		{ 5,  -8, 10 }, // 0
		{ 10,  0,  23}, // 1
		{ 0,  38, 69 }, // 2
		{ 1,  70,  0 }  // 3
	//    0   1    2
	};
	// перебор элементов двумерного массива
	int zeros = 0; // счетчик элементов равных 0
	std::cout << "Двумерный массив: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << table[i][j] << '\t';
			if (table[i][j] == 0)
				zeros++;
		}
		std::cout << '\n';
	}
		std::cout << "Нулей в массиве: " << zeros << '\n';

		
	

	// задача 1
	const int rows1 = 5; 
	const int cols1 = 5; 
	int mx1[rows1][cols1]{};


	std::cout << "Двумерный массив: \n";
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			mx1[i][j] = rand() % 90 + 10;
			std::cout << mx1[i][j] << '\t';

		
		}
		std::cout << '\n';
	}
	int min = mx1[0][0];
	int max = mx1[0][0];
	int sum = 0;
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			sum += mx1[i][j];
			max = mx1[i][j] > max ? mx1[i][j] : max;
			min = mx1[i][j] < min ? mx1[i][j] : min;
		}
	}
	std::cout << "максимум: " << max << '\n';
	std::cout << "минимум: " << min << '\n';
	std::cout << "сумма: " << sum << '\n';
	std::cout << "Среднее арифметическое: " << sum / (rows1 * cols1) << '\n';



	return 0;
}