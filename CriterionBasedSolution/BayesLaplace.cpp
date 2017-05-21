#include "header.h"

void BayesLaplace(int A[ARRAYSIZE][ARRAYSIZE]) {
	double air[4];
	double q[4];
	q[0] = 0.15;
	q[1] = 0.3;
	q[2] = 0.3;
	q[3] = 0.25;
	for (int i = 0; i < 4; i++) {
		air[i] = 0;
		for (int j = 0; j < 4; j++) {
			air[i] = air[i] + A[i][j]*q[j];
		}
	}
	double max = air[0];
	int maxnum = 0;
	for (int i = 0; i < 4; i++) {
		if (air[i]>max) {
			max = air[i];
			maxnum = i;
		}
	}
	cout << endl;
	cout << "Критерий Байеса - Лапласа:" << endl;
	cout << endl;
	cout << "    | air " << endl;
	for (int i = 0; i < 4; i++) {
		cout << " x" << i + 1 << " | " << air[i] << endl;
	}
	cout << endl;
	cout << "max air = " << max << endl;
	cout << endl;
	cout << "Наилучший вариант - x" << maxnum + 1 << endl;
	cout << "__________________________________________________" << endl;
}
