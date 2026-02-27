#include <iostream>
using namespace std;
main()
{
	int factorial, number;
	factorial=1;
	number=1;
	cout<<"please enter the number of factorial";
	cin>>number;
	
	while(number>1)
	{
	factorial=factorial*number;
	number--;
}
cout<<"the factorial is"<<factorial;
}
