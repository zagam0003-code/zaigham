#include <iostream>
using namespace std;
main()
{
	//The program to calculates the discount amount for a costumer
	
	int amount, discount, netpayable;
	amount=0;
	discount=0;
	netpayable=0;
	cout<<"Please enter the amount of bill:";
	cin>>amount;
	if(amount>5000 )
	{
		discount=amount*(15.0/100);
		netpayable=amount-discount;
		cout<<"the discounted amount:"<<netpayable;
	}
	else{
		 discount=amount*(10.0/100);
		 netpayable=amount-discount;
		cout<<"the amount after discount:"<<netpayable;
	}
}
