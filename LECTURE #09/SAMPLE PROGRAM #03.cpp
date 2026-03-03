#include <iostream>
using namespace std;
int isEven(int);
main(){
	int number;
	cout<<"please enter the number";
	cin>>number;
    
    if(isEven(number)){
    	cout<<"Entered number is even";
	}
	else
	{
		cout<<"Entered number is odd :\n";
	}
}
isEven(int number){
	if(2*(number/2)==number)
	{
		return 1;
		
	}
	else{
	return 0;
	}
}
