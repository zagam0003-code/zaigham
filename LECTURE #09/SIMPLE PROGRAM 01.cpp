#include <iostream>
using namespace std;
int square(int);

 main(){
 int number, result;
result=0;
number=0;
cout<<"please enter the number that you want ";
cin>>number;
result=square(number);
cout<<"the square of"<<number<<"then result is :"<<result;
return(0);
}
 int square( int number)
 {
 	return(number*number);
 }
