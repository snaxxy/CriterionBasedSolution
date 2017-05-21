#include "header.h"

void minmax(int A[ARRAYSIZE][ARRAYSIZE]) {
	int arrmin[4];
	for (int i = 0; i < 4; i++) {
		int min = A[i][i];
		for (int j = 0; j < 4; j++) {
			if (A[i][j] < min) {
				min = A[i][j];
			}
		}
		arrmin[i] = min;
	}
	int max = arrmin[0];
	int maxnum = 0;
	for (int i = 0; i < 4; i++) {
		if (arrmin[i]>max) {
			max = arrmin[i];
			maxnum = i;
		}
	}
	cout << endl;
	cout << "__________________________________________________" << endl;
	cout << endl;
	cout << "Минимаксный критерий:" << endl;
	cout << endl;
	cout << "    | air " << endl;
	for (int i = 0; i < 4; i++) {
		cout << " x" << i + 1 << " | " << arrmin[i] << endl;
	}
	cout << endl;
	cout << "max air = " << max << endl;
	cout << endl;
	cout << "Наилучший вариант - x" << maxnum + 1 << endl;
	cout << "__________________________________________________" << endl;
}
