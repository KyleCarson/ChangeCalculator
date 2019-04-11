// ChangeKalkulator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>

int main()
{
	while (true)
	{
		double bill = 0;

		std::cout << "\nWhat's the bill amount?\n";

		std::cin >> bill;

		double given;

		std::cout << "\nHow much cash did the customer give?\n";

		std::cin >> given;

		if (given < bill)
		{
			double owed = bill - given;

			std::cout << "\nCustomer owes $" << owed << "\n\n";
		}
		else
		{
			double totalChange = given - bill;

			double remainingChange = totalChange;

			int hundreds = remainingChange / 100;

			remainingChange = remainingChange - (hundreds * 100);

			int fifties = remainingChange / 50;

			remainingChange = remainingChange - (fifties * 50);

			int twenties = remainingChange / 20;

			remainingChange = remainingChange - (twenties * 20);

			int tens = remainingChange / 10;

			remainingChange = remainingChange - (tens * 10);

			int fives = remainingChange / 5;

			remainingChange = remainingChange - (fives * 5);

			int ones = remainingChange / 1;

			remainingChange = remainingChange - (ones * 1);

			int quarters = remainingChange / 0.25;

			remainingChange = remainingChange - (quarters * 0.25);

			int dimes = remainingChange / 0.10;

			remainingChange = remainingChange - (dimes * 0.10);

			int nickels = remainingChange / 0.05;

			remainingChange = remainingChange - (nickels * 0.05);

			int pennies = remainingChange / 0.01;

			remainingChange = remainingChange - (pennies * 0.01);

			while (remainingChange > 0)
			{
				if (remainingChange >= 0.005)
				{
					pennies++;
				}

				remainingChange -= 0.01;
			}

			std::cout << "\n\nChange: $" << totalChange << "\n";

			std::cout << "------------------------------\n";

			if (hundreds > 0)
			{
				std::cout << "\t" << hundreds << " hundred-dollar bill";

				if (hundreds > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (fifties > 0)
			{
				std::cout << "\t" << fifties << " fifty-dollar bill";

				if (fifties > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (twenties > 0)
			{
				std::cout << "\t" << twenties << " twenty-dollar bill";

				if (twenties > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (tens > 0)
			{
				std::cout << "\t" << tens << " ten-dollar bill";

				if (tens > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (fives > 0)
			{
				std::cout << "\t" << fives << " five-dollar bill";

				if (fives > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (ones > 0)
			{
				std::cout << "\t" << ones << " one-dollar bill";

				if (ones > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (quarters > 0)
			{
				std::cout << "\t" << quarters << " quarter";

				if (quarters > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (dimes > 0)
			{
				std::cout << "\t" << dimes << " dime";

				if (dimes > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (nickels > 0)
			{
				std::cout << "\t" << nickels << " nickel";

				if (nickels > 1)
				{
					std::cout << "s\n";
				}
				else
				{
					std::cout << "\n";
				}
			}

			if (pennies > 0)
			{
				std::cout << "\t" << pennies << " penn";

				if (pennies > 1)
				{
					std::cout << "ies\n\n";
				}
				else
				{
					std::cout << "y\n\n";
				}
			}
		}

		system("pause");
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
