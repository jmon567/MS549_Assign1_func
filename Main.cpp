#include <iostream>
#include<string>
#include <chrono>
#include <thread>
#include <ctime>
#include "func.h"

using namespace std;

int main()
{
	//srand(time(NULL));
	bool notDone = true;
	while (notDone)
	{
		int option = menu();
		if (option == 1)
		{
			breath();
		}else if (option == 2)
		{
			roll();
		
		}
		else
		{
			notDone = false;
		}
	}
	return 0;
}