#ifndef HEADER
#define HEADER

#include <iostream>

#define ARRAYSIZE 5
#define BUYINGPRICE 40
#define SELLINGPRICE 70

using namespace std;
void Minimax(int A[ARRAYSIZE][ARRAYSIZE]);
void BayesLaplace(int A[ARRAYSIZE][ARRAYSIZE], double q[ARRAYSIZE]);
void Savage(int A[ARRAYSIZE][ARRAYSIZE]);
#endif