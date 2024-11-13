#include <iostream>
#include<string>
#include <chrono>
#include <thread>
#include <ctime>
#include "func.h"

using namespace std;

int menu()
{
	int choice;
	cout << "Options" << endl;
	cout << "1. Breath" << endl;
	cout << "2. Roll" << endl;
	cout << "3. Exit " << endl;
	cin >> choice;
	return choice;

}

void breath()
{
		cout << "Breath in..." << endl;

		for (int i = 1; i <= 4; ++i)
		{
			cout << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}

		cout << "Breath out..." << endl;
		for (int i = 1; i <= 4; ++i)
		{
			cout << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
		cout << endl;
}

void roll ()

{
	 int dice1 = rand() % 6;
	 int dice2 = rand() % 6;
	 int sum = dice1 + dice2;
	this_thread::sleep_for(chrono::seconds(1));

	  cout << "The two dice you rolled add up to " << sum << endl;
	
}

