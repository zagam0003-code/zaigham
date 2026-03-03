#include <iostream>
using namespace std;
void f(int i);
main(){
	int i ;
	i=10;
	cout<<" \n in main the value of i is "<<i;
	f(i);{
	cout<<"\n in back main the value of i is:"<<i;
}
}
void f(int i){
	
	i*=2;
	cout<<" \n in function the value of i is ;"<<i;
	
}
