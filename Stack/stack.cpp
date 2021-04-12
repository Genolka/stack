#include "stack.h"
#include <vector>
#include <iostream>
using namespace std;

void classtack::push(int elem)
{
	vstack.push_back(elem);
}

int classtack::pop()
{
	cout << "poped " << vstack[vstack.size() - 1] << endl;
	vstack.pop_back();
	return 0;
}

bool classtack::isEmpty()
{
	return vstack.empty();
}

void classtack::multiPop(int N)
{
	for (int i = 0; i < N; i++) {
		vstack.pop_back();
	}
}

void classtack::show()
{
	cout << "size vector is " << vstack.size() << endl;
	cout << "showing all elements:\n";
	for (int i = 0; i < vstack.size(); i++) {
		cout << vstack[i] << endl;
	}
}
