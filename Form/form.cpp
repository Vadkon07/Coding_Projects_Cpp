#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
	srand(time(NULL));
    	int random_number = std::rand();
  	
	system("clear");
	cout << " \n";
	cout << " \n";
	cout << "Welcome to the Buy House FAKE System!" << endl;
	cout << " \n";
	cout << "--- Enter Your Request Information ---" << endl;
	string name;
	cout << "Enter your name: ";
	getline(cin,name);
	string surname;
	cout << "Enter your surname: ";
	getline(cin,surname);
	string price;
	cout << "Enter your price: ";
	getline(cin,price);
	string info;
	cout << "Enter your questions (if you don't have them, just enter 'NO'): ";
	getline(cin,info);
	string contact;
	cout << "Enter your contact info (mail, phone number, website, address): ";
	getline(cin,contact);

	system("clear");
	cout << "\033[32mRequest created succesfully!";
	cout << "\033[0m \n";
	cout << "\n --- Request Information ---" << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Price (in dollars): " << price << endl;
	cout << "Additional info: " << info << endl;
	cout << "Contact info: " << contact << endl;
	cout << " \n";
	cout << " \n";
	cout << "Request number is: " << random_number << endl;
	cout << " \n";
	cout << " \n";
	string send;
	cout << "Send this request to a database? YES/NO: ";
	getline(cin,send);

	if (send == "YES") {
			freopen ("request_info.txt", "w", stdout);
			cout << "\n --- Request Information ---" << endl;
			cout << "Name: " << name << endl;
			cout << "Surname: " << surname << endl;
			cout << "Price (in dollars): " << price << endl;
			cout << "Additional info: " << info << endl;
			cout << "Contact info: " << contact << endl;
			cout << " \n";
			cout << " \n";
			cout << "Request number is: " << random_number << endl;
			cout << " \n";
			cout << " \n";
			time_t now = time(0);
			char* dt = ctime(&now);
			cout << "Created at: " << dt << endl;
			fclose (stdout);
			return 0;
			} else {
			return 0; }
}
