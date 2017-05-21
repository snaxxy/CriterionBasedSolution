#include "header.h"

void Minimax(int A[ARRAYSIZE][ARRAYSIZE]) {

	int air[ARRAYSIZE]; //������� ����������� �����������

	//������ ���������
	for (int i = 0; i < ARRAYSIZE; i++) {
		int min = A[i][i];
		for (int j = 0; j < ARRAYSIZE; j++) {
			if (A[i][j] < min) {
				min = A[i][j];
			}
		}
		air[i] = min;
	}

	//����� ���������
	cout << endl;
	cout << "����������� ��������:" << endl;
	cout << endl;
	cout << "  X |  a_ir " << endl;
	cout << "------------" << endl;
	for (int i = 0; i < ARRAYSIZE; i++) {
		cout << " x" << i + 1 << " | ";
		printf("%4d", air[i]);
		cout << endl;
	}
	cout << endl;

	int max = air[0]; //�������� �� ���������
	int maxnum = 0; //����� ���������

	//����� ���������
	for (int i = 0; i < ARRAYSIZE; i++) {
		if (air[i]>max) {
			max = air[i];
			maxnum = i;
		}
	}

	//����� ��������� �� ���������
	cout << "�������� a_ir = " << max << endl << endl;

	//����� ������� ��������
	cout << "��������� ������� - x" << maxnum + 1 << endl;
}
