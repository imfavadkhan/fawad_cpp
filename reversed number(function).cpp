#include <iostream>
using namespace std;
int get_reversed_number(int number){

	int reversed_number = 0;
	int last_digit;
	
	while (number != 0){
		
	last_digit = number % 10 ;
	number = number / 10;
	reversed_number = reversed_number * 10 + last_digit; 
		
	}
	return reversed_number;
	}

int main(){
	
	int number;
	int reversed_number;
	
	cout << "=================================================="<<endl;
	
	cout << "Enter a number     : ";
	cin  >> number;
	
	reversed_number = get_reversed_number(number);
	
	cout << "=================================================="<<endl;
	cout << "Original number is : " << number << endl << endl;
	
	cout << "Reversed number is : " << reversed_number << endl;
	cout << "=================================================="<<endl;
	
	return 0;
}
