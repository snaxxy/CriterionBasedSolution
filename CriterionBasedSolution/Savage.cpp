#include "header.h"

void Savage(int A[ARRAYSIZE][ARRAYSIZE]) {
	//Расчет оценочных функций
	for (int j = 0; j < ARRAYSIZE; j++) {
		//Поиск максимального значения для текущего варианта
		int max = A[0][j];
		for (int i = 0; i < ARRAYSIZE; i++) {
			if (A[i][j]>max) {
				max = A[i][j];
			}
		}
		//Расчёт остатков
		for (int i = 0; i < ARRAYSIZE; i++) {
			A[i][j] = max - A[i][j];
		}
	}

	//Вывод матрицы остатков
	cout << "Критерий Сэвиджа:" << endl;
	cout << "    |";
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		cout << "  f" << i + 1 << "  |";
	}
	cout << endl << "-";
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		cout << "--------";
	}
	cout << endl;
	for (int i = 0; i < ARRAYSIZE; i++) {
		cout << " x" << i + 1 << " |";
		for (int j = 0; j < ARRAYSIZE; j++) {
			printf("%5d", A[i][j]);
			cout << " |";
		}
		cout << endl;
	}
	cout << endl;

	//Поиск наибольших остатков и формирование столбца наибольших разностей
	int Delta_ir[ARRAYSIZE];
	for (int i = 0; i < ARRAYSIZE; i++) {
		int max = 0;
		for (int j = 0; j < ARRAYSIZE; j++) {
			if (A[i][j] > max) {
				max = A[i][j];
			}
		}
		Delta_ir[i] = max;
	}

	//Вывод столбца наибольших разностей
	cout << "  X |  Delta_ir " << endl;
	cout << "----------------" << endl;
	for (int i = 0; i < ARRAYSIZE; i++) {
		cout << " x" << i + 1 << " | ";
		printf("%6d", Delta_ir[i]);
		cout << endl;
	}
	cout << endl;

	//Поиск минимума в столбце наибольших разностей
	int min = Delta_ir[0];
	int minnum = 0;
	for (int i = 0; i < ARRAYSIZE; i++) {
		if (Delta_ir[i] < min) {
			min = Delta_ir[i];
			minnum = i;
		}
	}

	//Вывод минимума из столбца наибольших разностей
	cout << "Минимум Delta_ir = " << min << endl;
	cout << endl;

	//Вывод соответствующего варианта
	cout << "Наилучший вариант - x" << minnum + 1 << endl;
}
