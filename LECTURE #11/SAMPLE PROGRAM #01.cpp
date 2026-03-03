#include <iostream>
using namespace std;
main(){
	int c [100];
	int i, z;
	i=0;
	do{
		 
		cout<<"\nplease enter the number";
		cin>>z ;
		if(z!=-1){
			c[i]=z;
			i++;
		}
		
	}
	while(z!=-1 && i<100);
	cout<<"the total number of positive integers entered by the user"<<i-1;
    return 0;
	}
	
