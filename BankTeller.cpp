// BankTeller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int Ram = 1;
	do 
	{
		int WithdrawAmount = rand() % 1000;
		int Moneys[] = { 100, 50, 20, 10, 5, 2, 1 };
		cout << WithdrawAmount << endl;
		for (int x = 0; x < 7; x++) 
		{
			if (WithdrawAmount >= Moneys[x])
			{
				cout << Moneys[x] << "'s: " << WithdrawAmount / Moneys[x] << endl;
				WithdrawAmount %= Moneys[x];
			}
		}
		cout << "Run Again?" << endl;
		cin >> Ram;
	} while (Ram != -1);
}


