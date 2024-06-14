#include <iostream>

using namespace std;

int main() {

	system("date");
	string mystr;

	cout << "Hello, World! Enter words: ";
	getline (cin,mystr);

	cout << "You entered: " << mystr;
	return 0;
}
