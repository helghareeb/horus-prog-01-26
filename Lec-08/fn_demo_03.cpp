#include <iostream>
using namespace std;

int sum(int start, int stop) {
	int sum = 0;

	for (int i = start; i <= stop; i++)
		sum += i;

	return sum;

}

/*
int main() {

	cout << "The sum of the first 10 natural numbers is: " << sum(1, 10) << endl;
	cout << "The sum of the first 20 natural numbers is: " << sum(11, 20) << endl;
	cout << "The sum of the first 30 natural numbers is: " << sum(21, 30) << endl;

	/*
	int sum = 0;

	for (int i = 1; i <= 10; i++) 
		sum += i;
	
	cout << "The sum of the first 10 natural numbers is: " << sum << endl;

	for (int i = 11; i <= 20; i++)
		sum += i;
	cout << "The sum of the first 20 natural numbers is: " << sum << endl;

	for (int i = 21; i <= 30; i++)
		sum += i;
	cout << "The sum of the first 30 natural numbers is: " << sum << endl;
	*/


//}
