#include <stdlib.h>
#include <iostream>
#include <thread>
#include <chrono>
#define TRUE 1



//Customization Guide: scrool this code down and find some lines named as 'if (number == <number>');, and inside them just insted of 'free' for e.g., insert any your app or command execution name (even fastfetch).
//
//
using namespace std;

int main() {
	system("clear");
	int number;
	
	while (TRUE){

	back:
	
	cout << " \n";
	cout << "--- Linux Fast Tools --- \n";
	cout << " \n";
	cout << "0. Exit \n";
	cout << "1. Full System Update \n";
	cout << "2. Memory Info \n";
	cout << "3. CPU Info \n";
	cout << "99. Info \n";
	cout << " \n";
	cout << "Enter tool's number: ";

	cin >> number;

	if (number == 0) {
		return 0;
	}

	if (number == 99) {
		printf(" \n");
		printf("This code is open source, and he is created by Vadkon. If you found any bugs, send an email on vadkonbeats@gmail.com (better if you found a solution for it). \n");
		printf(" \n");
		printf("Originally this code is adapted for Arch Linux, and I think that it's possible that some commands and file locations can be different (you can check code and adapt if for your needs and distributions. \n");
		{ goto back;
		}

	}

	if (number == 1) {
		system("sudo pacman -Syu");
	}
       
	if (number == 2) {
		system("free -h");
		printf(" \n");
		printf("*Linux Command is 'free -h'");
	}

	if (number == 3) {
		system("cat /proc/cpuinfo");
		printf(" \n");
		printf("*Linux Command is 'cat /proc/cpuinfo");
	}
       
	if (number > 3) {
		printf(" \n");
		printf("\033[31mWrong number!\n");
		printf("\033[0m\n");
	}

	}

	return EXIT_SUCCESS;
}
