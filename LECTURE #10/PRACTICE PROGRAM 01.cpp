#include <iostream>
using namespace std;
int a;
void i();
main(){
	a=5;
	cout<<" \n in main the value of a is :"<<a;
	
	i();
	cout<<" \n back in main the value of i is :"<<a;
	
}
void i(){
	cout<<" \n in i() , the value of a is "<<a;
	a=10;
}
