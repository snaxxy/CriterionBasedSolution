#include "header.h"

void Minimax(int A[ARRAYSIZE][ARRAYSIZE]) {

	int air[ARRAYSIZE]; //Столбец минимальных результатов

	//Расчёт минимумов
	for (int i = 0; i < ARRAYSIZE; i++) {
		int min = A[i][i];
		for (int j = 0; j < ARRAYSIZE; j++) {
			if (A[i][j] < min) {
				min = A[i][j];
			}
		}
		air[i] = min;
	}

	//Вывод минимумов
	cout << endl;
	cout << "Минимаксный критерий:" << endl;
	cout << endl;
	cout << "  X |  a_ir " << endl;
	cout << "------------" << endl;
	for (int i = 0; i < ARRAYSIZE; i++) {
		cout << " x" << i + 1 << " | ";
		printf("%4d", air[i]);
		cout << endl;
	}
	cout << endl;

	int max = air[0]; //Максимум из минимумов
	int maxnum = 0; //Номер максимума

	//Поиск максимума
	for (int i = 0; i < ARRAYSIZE; i++) {
		if (air[i]>max) {
			max = air[i];
			maxnum = i;
		}
	}

	//Вывод максимума из минимумов
	cout << "Максимум a_ir = " << max << endl << endl;

	//Вывод лучшего варианта
	cout << "Наилучший вариант - x" << maxnum + 1 << endl;
}
