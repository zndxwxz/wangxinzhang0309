#include<iostream>
using namespace std;

void arrange(int p[], int size);

int main()
{
	int size, a;
	cout << "������Ԫ�ظ���" << endl;
	cin >> size;
	int* p = new int[size];
	cout << "����������" << endl;
	for (int i = 0; i < size; i++)
		cin >> *(p + i);
	cout  << "����������Ҫ���������" << endl;
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

	