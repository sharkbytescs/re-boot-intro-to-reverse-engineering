#include <iostream>

using namespace std;

int main() {

	int inputNumber;
        int factorial=1;

        cout << "Please enter a number between 1 and 5: ";
        cin >>  inputNumber;

        cout << "calculating the factorial of " << inputNumber << endl;

        for(int i=1; i<=inputNumber; i++) {

                factorial = factorial * i;

                //print the output
                if (i != inputNumber) {
                        cout <<  i << " * ";
                } else {
                        cout << i << " = " << factorial <<endl;
                }
        }
}
