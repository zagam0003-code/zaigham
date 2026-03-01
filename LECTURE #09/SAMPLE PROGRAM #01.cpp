 #include <iostream>
using namespace std;

double raiseToPow(double base, int exponent);  // Function declaration

int main()
{
    double x;
    int i;

    cout << "Please enter the number: ";
    cin >> x;

    cout << "Please enter the power: ";
    cin >> i;

    cout << x << " raised to power " << i << " is equal to "
         << raiseToPow(x, i);

    return 0;
}

// Function definition
double raiseToPow(double base, int exponent)
{
    double result = 1;

    for(int count = 0; count < exponent; count++)
    {
        result *= base;
    }

    return result;
}
