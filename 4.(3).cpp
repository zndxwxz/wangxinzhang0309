#include<iostream>
using namespace std;

void arrange(int p[], int size);

int main()
{
	int size, a;
	cout << "请输入元素个数" << endl;
	cin >> size;
	int* p = new int[size];
	cout << "请输入数组" << endl;
	for (int i = 0; i < size; i++)
		cin >> *(p + i);
	cout  << "请输入你想要输出的数组" << endl;
	cin >> a;
	cout << "p[" << a - 1 << "] = " << *(p + a - 1) << endl;
	arrange(p, size);
	for (int b = 0; b < size; b++)
		cout << *(p + b) << " ";
	cout << endl;
	delete p;
}
void arrange(int p[], int size)
{
	int temp;
	for (int n = 0; n < size; n++)
		for (int m = 0; m < size - 1; m++)
			if (*(p + m) > *(p + m + 1))
			{
				temp = *(p + m);
				*(p + m) = *(p + m + 1);
				*(p + m + 1) = temp;
			}
}

	