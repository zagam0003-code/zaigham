#include <iostream>
using namespace std;
double square(double x);
main(){
	double number =123.123;
	cout<<"the square of"<<number<<"is"<<square(number);

}
double square(double x){
	return x*x;
}
