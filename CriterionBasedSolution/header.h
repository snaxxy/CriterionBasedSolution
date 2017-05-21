#include <iostream>

#define ARRAYSIZE 4
#define BUYINGPRICE 50
#define SELLINGPRICE 60

using namespace std;
void Minimax(int A[ARRAYSIZE][ARRAYSIZE]);
void BayesLaplace(int A[ARRAYSIZE][ARRAYSIZE], double q[ARRAYSIZE]);
void Savage(int A[ARRAYSIZE][ARRAYSIZE]);
