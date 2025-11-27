#include <iostream>
using namespace std;

void swap(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
/*
int main()
{
	int num1 = 1;
	int num2 = 2;
	swap(num1, num2);
	cout << "After invoking the swap function, num1 is "
		<< num1 << " and num2 is " << num2 << endl;
	return 0;
}
*/