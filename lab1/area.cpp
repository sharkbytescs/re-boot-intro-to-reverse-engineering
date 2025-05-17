// area.cpp
#include <iostream> 

using namespace std;

int main() {
  int length = 5;   // local variable, stack stored
  int width = 10;   // local variable, stack stored
  int area = 0;
 
	area = length * width;
  cout <<  "The area of the rectangle is: " << area << endl;
  
  return 0;
}
