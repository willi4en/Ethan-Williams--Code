// Program: factorial.cpp
// Description: Test and develop the factorial function - main() has test
// code to check and see if the factorial() function works properly.

# include <iostream>
# include <cmath>

using namespace std;

double factorial(int N) {

   double return_val = N;
        
        if (N != 0){
	        for (int i = N; i > 0; i--){
		    
	    	    return_val *= i;
    	    }
    	    return_val /= N;

        }
        else {
	            return_val = 1;
	    }
    
   return return_val;
}
int main() {

	cout << fixed << "factorial(0) is " << factorial(0) << " should be 1" << endl;
	cout << fixed << "factorial(1) is " << factorial(1) << " should be 1" << endl;
	cout << fixed << "factorial(2) is " << factorial(2) << " should be 2" << endl;
	cout << fixed << "factorial(5) is " << factorial(5) << " should be 120" << endl;
	cout << fixed << "factorial(10) is " << factorial(10) << " should be 3628800" << endl;
	cout << fixed << "factorial(20) is " << factorial(20) << " should be 1307674368000" << endl;

	return 0;
}