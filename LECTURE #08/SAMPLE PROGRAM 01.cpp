#include <iostream>
using namespace std;
main(){
	int salary;
	float deduction, netPayable;
	cout<<"please enter the salary ";
	cin>>salary;
	switch(salary/10000)
	{
		case 0:
			deduction=0;
			cout<<"netPayable(salary-deduction)=";
			cout<<salary<<"-"<<deduction<<"="<<netPayable;
			break;
			case 1:
				deduction=1000;
				netPayable=salary-deduction;
				cout<<"netPayable=(salary-deduction)= ";
				cout<<salary<<"-"<<deduction<<"="<<netPayable;
	            break;
	            default:
	            	deduction=salary*7/100;
	            	netPayable=salary-deduction;
	            	cout<<"netpayable=salary-deduction=";
	            	cout<<salary<<"-"<<deduction<<"="<<netPayable;
	            	
	}
	return(5);
	
}

#include <iostream>   // Preprocessor directive to include the iostream library 
                      // which provides input/output stream objects like cin and cout.

using namespace std;  // This statement allows us to use standard library names 
                      // (like cout, cin) without prefixing them with std::

// Entry point of the program. Note: Standard-compliant signature should be int main()
main(){

	int salary;           // Integer variable to store the gross salary input by the user.
	                      // Integer is used assuming salary is a whole number.

	float deduction,      // Floating-point variable to store calculated deduction.
	      netPayable;     // Floating-point variable to store final salary after deduction.
	                      // Float is used because percentage deduction may produce decimals.

	cout<<"please enter the salary ";  // Prompts user for salary input.
	cin>>salary;                      // Reads input from keyboard and stores it in 'salary'.

	// Switch statement evaluates salary/10000.
	// This performs integer division, meaning:
	// 0  -> salary between 0 and 9999
	// 1  -> salary between 10000 and 19999
	// >=2 -> salary 20000 and above
	// This is used to categorize salary ranges efficiently.
	switch(salary/10000)
	{
		case 0:
			// If salary is less than 10000
			deduction=0;   // No deduction applied for lowest salary bracket.
			
			// WARNING: netPayable is not assigned a value here.
			// This leads to undefined behavior because netPayable contains garbage.
			// Proper implementation should assign:
			// netPayable = salary - deduction;

			cout<<"netPayable(salary-deduction)=";
			cout<<salary<<"-"<<deduction<<"="<<netPayable;
			break;

		case 1:
			// If salary is between 10000 and 19999
			deduction=1000;              // Fixed deduction amount.
			netPayable=salary-deduction; // Net salary computed after deduction.

			cout<<"netPayable=(salary-deduction)= ";
			cout<<salary<<"-"<<deduction<<"="<<netPayable;
	        break;

	    default:
	    	// If salary is 20000 or more
	    	// Deduction calculated as 7% of salary.
	    	// Note: salary*7/100 uses integer arithmetic first,
	    	// which may cause precision truncation before assignment to float.
	    	// Better approach: salary * 0.07
	    	deduction=salary*7/100;

	    	netPayable=salary-deduction;  // Final payable salary.

	    	cout<<"netpayable=salary-deduction=";
	    	cout<<salary<<"-"<<deduction<<"="<<netPayable;
	}

	return(5);  // Program returns 5 to the operating system.
	            // Conventionally, return 0 indicates successful execution.
	            // Returning 5 is unusual unless used intentionally as a status code.
}
