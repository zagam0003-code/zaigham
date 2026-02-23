#include <iostream>
using namespace std;
main()
{
	int number, digit;
	
	cout<<"please enter 4-digit number: ";
	cin>>number;
	
	digit=number%10;
	cout<<"the digit are:" ;
		cout<<digit;
		
		number=number/10;
		cout<<"the remaining digit are :";
	    cout<<number <<endl;
	    
	    digit=number%10;
	    cout<<"the digit are :";
	    cout<<digit<<endl;
	    
	    number=number/10;
	    cout<<"the remainig digit:";
	    cout<<number<<endl;
	     digit=number%10;
	     cout<<"the digits are :";
	     cout<<digit<<endl;
	     
	     number=number/10;
	     cout<<"the remaing digit are:";
	     cout<<number;
	     
	    
	
}
