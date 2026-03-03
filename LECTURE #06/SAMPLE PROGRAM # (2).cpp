#include <iostream>
using namespace std;
main()
{
	int sum,number, upperlimit;
	sum=0;
	number=1;
	cout<<"Please enter the upper limit;";
	cin>>upperlimit;
	while(number<=upperlimit)
	{
		if((number%2)==0)
		{
		
		sum=sum+number;
	}
		number=number+1;
		
	}
	cout<<" the integers starting from 1 :"<<sum;
	
	
}
