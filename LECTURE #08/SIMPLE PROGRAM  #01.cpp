#include <iostream>

using namespace std;
main(){
	char grade;
	cout<<"please enter the grade of yours";
	cin>>grade;
	
    switch(grade){
    	case 'A':
    	case 'a':
    	cout<<"exellent ";
    	break;
    	case 'B':
    	case 'b':
    	cout<<"very good";
    	break;
    	case 'C':
    	case 'c':
    	cout<<"good";
    	break;
    	case 'd':
    	case 'D':
    	cout<<"okay";
    	break;
    	case 'F':
    	case 'f':
    	cout<<"fail";
    	break;
    	default:
    		cout<<" please enter the grade of your result From A-F:";
    }
    
	
	
    
		
}
