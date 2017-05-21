#include "header.h"

void BayesLaplace(int A[ARRAYSIZE][ARRAYSIZE], double q[ARRAYSIZE]) {

	double air[ARRAYSIZE]; //������� ���. ��������

	//������ ���. ��������
	for (int i = 0; i < ARRAYSIZE; i++) {
		air[i] = 0;
		for (int j = 0; j < ARRAYSIZE; j++) {
			air[i] = air[i] + A[i][j]*q[j];
		}
	}

	//����� ������� ���. ��������
	cout << endl;
	cout << "�������� ������ - �������:" << endl;
	cout << endl;
	cout << "  X |  a_ir " << endl;
	cout << "------------" << endl;
	for (int i = 0; i < ARRAYSIZE; i++) {
		cout << " x" << i + 1 << " | ";
		printf("% 5.3f", air[i]);
		cout << endl;
	}
	cout << endl;

	double max = air[0]; //�������� �� ���. ��������
	int maxnum = 0; //����� ������������� ���. ��������

	//������ ���������
	for (int i = 0; i < ARRAYSIZE; i++) {
		if (air[i]>max) {
			max = air[i];
			maxnum = i;
		}
	}

	//����� ������������� ��������
	cout << "max a_ir = " << max << endl;
	cout << endl;

	//����� ���������� ��������
	cout << "��������� ������� - x" << maxnum + 1 << endl;
}
