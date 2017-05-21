#ifndef SOLUTION_H
#define SOLUTION_H
class Solution
{
	int f_[4];

public:
	Solution();
	Solution(int f[4]);
	void setf(int j, int value);
	int getf(int j);
	~Solution();
};
#endif SOLUTION_H
