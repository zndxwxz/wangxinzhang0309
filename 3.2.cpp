#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	for (int divisor = 2; divisor <= num / 2; divisor++)
	{
		if(num%divisor==0)
		{
			return false;
		}
	}
	return true;
}
void primenumber(int primeofnumber)
{
	int line = 10;
    primeofnumber = 200;
	int count = 0;
	int num = 2;
	while (count < primeofnumber)
	{
		if(is_prime(num))
		{
			count++;
			if(count%line==0)
			{
				cout << setw(5) << num << endl;
			}
			else
			{
				cout << setw(5) << num;
			}
		}
		num++;
	}


}
int main()
{
	cout << "Ç°200¸öËØÊý£º" << endl;
	primenumber(200);
}
