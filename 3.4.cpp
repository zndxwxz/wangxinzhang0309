#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "���������ߣ�"<<endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout << "���Ϊ" << double_area(side1,side2,side3) << endl;
	else
		cout << "���߲�����������" << endl;
}