#include <iostream>
using namespace std;

int main(){
	
	int number;
	int last_digit;
	int total_digits = 0;
	cout << "Enter a number : " ;
	cin  >> number;
	
	while (number != 0){
		
	last_digit = number % 10;
	number = number / 10;
	total_digits = total_digits + 1;
	
	}
	cout <<"Total digits     : "<< total_digits;
	
	
	return 0;
	
}
