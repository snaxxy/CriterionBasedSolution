#include "header.h"

const int price1 = 50;
const int price2 = 60;
int main() {
	//Настройка
	setlocale(LC_ALL, "RUS");
	//Начальные условия
	//Solution A[4];
	int A[ARRAYSIZE][ARRAYSIZE];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j >= i) {
				A[i][j] = (i + 1) * (SELLINGPRICE - BUYINGPRICE);
				//A[i].setf(j, (i + 1) * (price2 - price1));
			}
			else {
				A[i][j] = (j + 1) * (SELLINGPRICE - (i + 1)*BUYINGPRICE);
				//A[i].setf(j, (j + 1) * price2 - (i + 1)*price1);
			}
		}
	}
	cout << "    |  f1  |  f2  |  f3  |  f4  |" << endl;
	for (int i = 0; i < 4; i++) {
		cout << " x" << i + 1 << " |";
		for (int j = 0; j < 4; j++) {
			//if (A[i].getf(j) > 0) {
			//	cout << "  " << A[i].getf(j) << "  |";
			if (A[i][j] > 0)
			{
				cout << "  " << A[i][j] << "  |";
			}
			else {
				//if (A[i].getf(j) < 0 && A[i].getf(j)>-100) {
				//	cout << " " << A[i].getf(j) << "  |";
				if (A[i][j] < 0 && A[i][j]>-100) {
					cout << " " << A[i][j] << "  |";
				}
				else {
					//cout << " " << A[i].getf(j) << " |";
					cout << " " << A[i][j] << " |";
				}
			}
		}
		cout << endl;
	}
	minmax(A);
	BayesLaplace(A);
	Savage(A);
	system("pause");
}
