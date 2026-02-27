#include <iostream>
using namespace std;
main()
{
	int tryNum;
	char c;
	do{
		cout<<"please enter a character from A-Z for guessing:";
		cin>>c;
		if(c=='z')
		{
			cout<<"congratulation you guess a correct character";
			tryNum=6;
			
		}
		else
		{
			cout<<"you guess wrong character :";
			tryNum++;
			
		}
		
	}
	while(tryNum<=5);
}
