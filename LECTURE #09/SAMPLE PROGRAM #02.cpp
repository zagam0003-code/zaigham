#include <iostream>
using namespace std;

double circleArea (double);
main()
{
	double rad1,rad2, ringArea;
	cout<<"please enter the outer radius of value :";
	cin>>rad1;
	cout<<"please enter the radius of inner circle :";
	cin>>rad2;
	ringArea=circleArea(rad1)-circleArea(rad2);
	cout<<"Area of the ring having inner radius:"<<rad2<<"outer radius:"<<rad1<<"is"<<ringArea;
	
	
}
double circleArea (double radius)
{
	return(3.14*radius*radius);
	
}
