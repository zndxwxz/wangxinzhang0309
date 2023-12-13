#include<iostream>
using namespace std;
int main()
{
	int size = 10;
	int list[10];
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < 10; i++)
		cin >> list[i];
	cout << "The distinct numbers are:" ;
	cout << list[0] << " " << endl;;
	for (int m = 1; m < size; m++)
	{
		for (int j = 0; j < m; j++)
		{
			if (list[m] != list[j])
			{
				if (j == m - 1)
					cout << list[m] << " ";
			}
			else break;
		}
	}
}