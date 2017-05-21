#include "header.h"

void BayesLaplace(int A[ARRAYSIZE][ARRAYSIZE], double q[ARRAYSIZE]) {

	double air[ARRAYSIZE]; //Столбец мат. ожиданий

	//Расчёт мат. ожиданий
	for (int i = 0; i < ARRAYSIZE; i++) {
		air[i] = 0;
		for (int j = 0; j < ARRAYSIZE; j++) {
			air[i] = air[i] + A[i][j]*q[j];
		}
	}

	//Вывод столбца мат. ожиданий
	cout << endl;
	cout << "Критерий Байеса - Лапласа:" << endl;
	cout << endl;
	cout << "  X |  a_ir " << endl;
	cout << "------------" << endl;
	for (int i = 0; i < ARRAYSIZE; i++) {
		cout << " x" << i + 1 << " | ";
		printf("% 5.3f", air[i]);
		cout << endl;
	}
	cout << endl;

	double max = air[0]; //Максимум из мат. ожиданий
	int maxnum = 0; //Номер максимального мат. ожидания

	//Расчёт максимума
	for (int i = 0; i < ARRAYSIZE; i++) {
		if (air[i]>max) {
			max = air[i];
			maxnum = i;
		}
	}

	//Вывод максимального ожидания
	cout << "max a_ir = " << max << endl;
	cout << endl;

	//Вывод наилучшего варианта
	cout << "Наилучший вариант - x" << maxnum + 1 << endl;
}
