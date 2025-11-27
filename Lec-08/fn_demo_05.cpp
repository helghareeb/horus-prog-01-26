#include <iostream>
using namespace std;

// Function prototype
string foo();
/*
int main() {
	cout << foo() << endl;
	return 0;
}
*/

string foo() {

	/*
	This is a multi-line comment.
	and it spans multiple lines.
	It should be ignored by the compiler.
	and it can contain various characters: !@#$%^&*()_+{}|:"<>?[];',./`~/
	*/

	return "This is from inside the function foo.";
}