#pragma once
#include <vector>
using namespace std;

class classtack
{
private:
	vector<int> vstack;
public:
	void push(int elem);
	int pop();
	bool isEmpty();
	void multiPop(int  N);
	void show();
};

