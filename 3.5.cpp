#include<iostream>
using namespace std;
int main()
{
	int a = 1, b = 1;
	for (int i = 1; i < 10; i++) {
		a = (b + 1) * 2;
		b = a;
	}

	cout << a << endl;
}