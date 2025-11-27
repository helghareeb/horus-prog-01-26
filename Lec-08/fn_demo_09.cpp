#include <iostream>
using namespace std;

int g_x;


void myFunction(int x[5]) { 
	for (int i = 0; i < 5; i++) { 
		cout << x[i] << "\n"; 
	} 
	g_x += 50;
}

int main() { 
	g_x = 100;
	cout << "Global variable g_x: " << g_x << "\n";
	int numbers[5] = { 10, 20, 30, 40, 50 }; 
	myFunction(numbers);
	cout << "Global variable g_x after function call: " << g_x << "\n";
	return 0; }
