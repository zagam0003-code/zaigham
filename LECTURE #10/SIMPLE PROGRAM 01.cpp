#include <iostream>
using namespace std;
int i;
void f();

main(){
	//declaration of global variable 
     
	 i=10;
	 cout<<"\n in main(),the value of i is:"<<i;
	 f ();
	    cout<<"\n back in the main (), the value of i is :"<<i;
	    
}
void f()
{
	cout<<"\n"<<"in f() the value of i is:"<<i;
	i=20;
}
