//Project 5: Jolly Banker
//Author: Brent Stone
//CSS 342
#include "stdafx.h"
#include "JollyBanker.h"


int main()
{
	JollyBanker bank;
	bank.ReadTransactions();
	bank.ExeTransactions();
	bank.Display();

	system("pause");
     return 0;
}

