#include<iostream>
using namespace std;

int main()
{
	int num[4] = { 0,1,1,1 };
	int index = 4;
	while (index <= 20190324)
	{
		num[index % 3] = num[1] + num[2] + num[3];
		num[index % 3] %= 10000;
		index++;
	}
	cout << num[index % 3] << endl;
	return 0;
}
