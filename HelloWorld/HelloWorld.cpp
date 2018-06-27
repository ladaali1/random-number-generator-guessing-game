// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

class HelloWorld
{
protected:
	int rand1, rand2, sign, answer;

public:
	void GenerateRandom()
	{
		std::cout << "2 random number is being selected from 1 to 10:" << endl;
		rand1 = (rand() % 10) + 1;
		cout << "First Random Number Is: " << rand1 << endl;
		rand2 = (rand() % 10) + 1;
		cout << "Second Random Number Is: " << rand2 << endl;
		sign = rand() % 4 + 1;
		ChooseOperator(rand1, rand2, sign);



	}

	void ChooseOperator(int rand1, int rand2, int sign)
	{
		char symbol;
		if (sign == 1)
		{
			answer = rand1 + rand2;
			symbol = '+';
		}
		else if (sign == 2)
		{
			answer = rand1 - rand2;
			symbol = '-';
		}
		else if (sign == 3)
		{
			answer = rand1 * rand2;
			symbol = '*';
		}
		else if (sign == 4)
		{
			answer = rand1 / rand2;
			symbol = '/';
		}

		cout << "Equation Chosen is: " << rand1 << ' ' << symbol << ' ' << rand2 << ' ' << '=' << ' ' << answer << endl;
	}
};


int main()
{
	HelloWorld hw;
	std::cout << "hello-world" << std::endl;
	cout << "________________________" << endl;
	hw.GenerateRandom();
}

