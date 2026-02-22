#include <iostream>
using namespace std;
main(void)
{
	//declaration of variable 
	int age1, age2, age3, age4 ,age5, age6, age7, age8, age9, age10;
	int TotalAge, AverageAge;
	cout<<"please enter the age of 1st student :" ;
	cin>>age1;
	cout<<"please enter the age of second student :" ;
	cin>>age2;
	cout<<"please enter the age of 3rd student :" ;
	cin>>age3;
	cout<<"please enter the age of 4th student :" ;
	cin>>age4;
	cout<<"please enter the age of 5th student :" ;
	cin>>age5;
	cout<<"please enter the age of 6th student :" ;
	cin>>age6;
	cout<<"please enter the age of 7th student :" ;
	cin>>age7;
	cout<<"please enter the age of 8th student :" ;
	cin>>age8;
	cout<<"please enter the age of 9th student :" ;
	cin>>age9;
	cout<<"please enter the age of 10th student :";
	cin>>age10;
	
	//to calculate the average age and total age 
	TotalAge=age1+age2+age3+age4+age5+age6+age7+age8+age9+age10;
	AverageAge=TotalAge/10;
	// now displayed the average age 
	cout<<"the average age is :";
	cout<<AverageAge;
}
