#include <iostream>
#include "stack.h"
#include <vector>
using namespace std;


int main()
{
    classtack stack;
    int elemnt, size;
    cout << "enter first size stack = ";
    cin >> size;
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << "enter element = ";
        cin >> elemnt;
        stack.push(elemnt);
    }
    stack.show();
    stack.pop();
    stack.show();
    cout << "does stack empty? " << stack.isEmpty() << endl;
    cout << "how many u want pop out? ";
    cin >> size;
    stack.multiPop(size);
    stack.show();
}
    