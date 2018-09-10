# factorial#include <iostream>
using namespace std;

double calcFactorial(double fac){
	double end = 1;

	if(fac == 0)
	  return 1;
	else if(fac == 1)
	  return 1;
	else {
	  int auxFac = fac;

	  for(int i = fac - 1; i > 0; i = i - 2){
	    end = end * auxFac * i;
	    auxFac = i - 1;

	    //cout << fac << " | " << auxFac << " | " << i << " | " << end << endl;
	  }
	}

	return end;
}


int main() {
	int repeat = 1;
	int repeatAUX = 0;
	float number = 0;

    while(repeat == 1){
	  do {
   	  cout << "Write the number: ";
	    cin >> number;
	  }
	  while(number < 0);

	  cout << number << "! is: " << calcFactorial(number) << "\n" << endl;


	  cout << "Repeat? 1 for yes anything else to not: ";
	  cin >> repeatAUX;
	  if(repeatAUX != 1)
	    repeat = 0;
    }

	return 0;
}
