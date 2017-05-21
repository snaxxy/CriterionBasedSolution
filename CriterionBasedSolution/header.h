#include <iostream>
#include <ctime>
#include "Solution.h"
#define ARRAYSIZE 4
#define BUYINGPRICE 50
#define SELLINGPRICE 60

using namespace std;
void minmax(int A[ARRAYSIZE][ARRAYSIZE]);
void BayesLaplace(int A[ARRAYSIZE][ARRAYSIZE]);
void Savage(int A[ARRAYSIZE][ARRAYSIZE]);
