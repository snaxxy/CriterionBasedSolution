#include "header.h"

const int price1 = 50;
const int price2 = 60;

int main() {
	//���������
	setlocale(LC_ALL, "RUS");
	//��������� �������
	int A[ARRAYSIZE][ARRAYSIZE];
	double q[ARRAYSIZE];

	int qsum = 0;

	//���� ������ ��������� ������
	cout << "������� ������� ��������� ������:" << endl;
	for (int i = 0; i<ARRAYSIZE; i++)
	{
		cout << "����� " << i + 1 << " = ";
		cin >> q[i];
		qsum += q[i];
	}

	//������ ������������
	cout << endl << "������������ �����������:" << endl;
	for (int i = 0; i<ARRAYSIZE; i++)
	{
		q[i] = q[i] / qsum;
		cout << "q" << i + 1 << " = " << q[i] << endl;
	}

	cout << endl << "������� ��������� ������:" << endl;

	//������ ������� ��������� ������
	for (int i = 0; i < ARRAYSIZE; i++) {
		for (int j = 0; j < ARRAYSIZE; j++) {
			if (j >= i) {
				A[i][j] = (i + 1) * (SELLINGPRICE - BUYINGPRICE);
			}
			else {
				A[i][j] = (j + 1) * SELLINGPRICE - (i + 1)*BUYINGPRICE;
			}
		}
	}

	//����� ������� ��������� ������
	cout << "    |";
	for (int i=0; i < ARRAYSIZE; i++)
	{
		cout << "  f" << i+1 << "  |";
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

	//������
	cout << endl << "===========================" << endl;
	Minimax(A);
	cout << endl << "===========================" << endl;
	BayesLaplace(A, q);
	cout << endl << "===========================" << endl;
	Savage(A);

	system("pause");
}
