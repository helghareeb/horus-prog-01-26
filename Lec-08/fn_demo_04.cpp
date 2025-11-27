#include <iostream>

int max (int a, int b) {
	return (a > b) ? a : b;
	/*
	if (a > b)
		return a;
	else
		return b;
	*/
}

int max (short a, short b) {
	return (a > b) ? a : b;
}


float max (float a, float b) {
	return (a > b) ? a : b;
}

double max (double a, double b) {
	return (a > b) ? a : b;
}

long max (long a, long b) {
	return (a > b) ? a : b;
}
/*
int main(){
	float num1, num2;
	std::cout << "Enter two numbers: ";
	std::cin >> num1 >> num2;
	std::cout << "The maximum number is: " << max(num1, num2) << std::endl;
	return 0;
}
*/