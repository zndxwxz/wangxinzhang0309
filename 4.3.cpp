#include<iostream>
using namespace std;
int main()
{
	bool list[100];
	for(int i=0;i<100;i++)
	{
		list[i] = false;
	}
	for (int j = 0; j < 100; j++)
	{
		for (int m = j; m < 100; m += j + 1)
		{
			if (list[m])
				list[m] = false;
			else
				list[m] = true;
		}
	}
	for (int n = 0; n < 100; n++)
	{
		if (list[n])
			cout << n + 1 << " ";
	}
}