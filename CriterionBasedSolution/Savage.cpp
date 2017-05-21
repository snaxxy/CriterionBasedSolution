#include "header.h"

void Savage(int A[ARRAYSIZE][ARRAYSIZE]) {
	for (int j = 0; j < 4; j++) {
		int max = A[0][j];
		for (int i = 0; i < 4; i++) {
			if (A[i][j]>max) {
				max = A[i][j];
			}
		}
		for (int i = 0; i < 4; i++) {
			//A[i].setf(j, max - A[i].getf(j));
			A[i][j] = max - A[i][j];
		}
	}
	cout << endl;
	cout << "Критерий Сэвиджа:" << endl;
	cout << endl;
	cout << "    |  f1  |  f2  |  f3  |  f4  |" << endl;
	for (int i = 0; i < 4; i++) {
		cout << " x" << i + 1 << " |";
		for (int j = 0; j < 4; j++) {
			if (A[i][j] == 0) {
				cout << "  " << A[i][j] << "   |";
			}
			else {
				if (A[i][j] >= 100) {
					cout << " " << A[i][j] << "  |";
				}
				else {
					cout << "  " << A[i][j] << "  |";
				}
			}
		}
		cout << endl;
	}
	int arrmax[4];
	for (int i = 0; i < 4; i++) {
		int max = A[i][i];
		for (int j = 0; j < 4; j++) {
			if (A[i][j] > max) {
				max = A[i][j];
			}
		}
		arrmax[i] = max;
	}
	int min = arrmax[0];
	int minnum = 0;
	for (int i = 0; i < 4; i++) {
		if (arrmax[i] < min) {
			min = arrmax[i];
			minnum = i;
		}
	}
	cout << endl;
	cout << "    | max(maxair-air) " << endl;
	for (int i = 0; i < 4; i++) {
		cout << " x" << i + 1 << " |     " << arrmax[i] << endl;
	}
	cout << endl;
	cout << "min air = " << min << endl;
	cout << endl;
	cout << "Наилучший вариант - x" << minnum + 1 << endl;
	cout << "__________________________________________________" << endl;
}
