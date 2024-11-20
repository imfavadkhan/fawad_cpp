#include <iostream>
using namespace std;
int main(){
	
	int number;
	int sum = 0;
	
	do {
		cout <<"Enter a positve number (negative to stop)  :  ";
		cin  >> number;
		
		
	if (number > 0){
		
		sum += number;
	}
	   }
	
	while(number > 0);
		
		cout << "====================================================" << endl;
		cout << "The sum of all positive number is          : " << sum << endl;
		cout << "====================================================" << endl;
	
	
	
	
	}
