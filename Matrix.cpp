#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n;
	//��������� �������
	
	const int rows = 4; // ���-�� ����� ���������� �������
	const int cols = 3; // ���-� �������� ��������� �������
	int mx[rows][cols]; // ���������� ���������� �������
	mx[2][1] = 7;
	std::cout << "mx[2][1] = " << mx[2][1] << '\n';

	int table[rows][cols]{
		{ 5,  -8, 10 }, // 0
		{ 10,  0,  23}, // 1
		{ 0,  38, 69 }, // 2
		{ 1,  70,  0 }  // 3
	//    0   1    2
	};
	// ������� ��������� ���������� �������
	int zeros = 0; // ������� ��������� ������ 0
	std::cout << "��������� ������: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << table[i][j] << '\t';
			if (table[i][j] == 0)
				zeros++;
		}
		std::cout << '\n';
	}
		std::cout << "����� � �������: " << zeros << '\n';

		
	

	// ������ 1
	const int rows1 = 5; 
	const int cols1 = 5; 
	int mx1[rows1][cols1]{};


	std::cout << "��������� ������: \n";
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
	std::cout << "��������: " << max << '\n';
	std::cout << "�������: " << min << '\n';
	std::cout << "�����: " << sum << '\n';
	std::cout << "������� ��������������: " << sum / (rows1 * cols1) << '\n';












	return 0;
}