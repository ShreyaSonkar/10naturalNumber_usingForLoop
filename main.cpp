#include <iostream>

using namespace std;

int main() {
  int i, sum = 0;
  cout << "The ten natural numbers are: " << endl;
  for (i = 1; i <= 10; i++){
 	cout << i << endl;
    sum = sum + i;
  }
  cout << "The sum of ten natural numbers is: " << sum << endl;
  
	return 0;
}