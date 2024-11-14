/*Question no 1 and 2
1. Write a C++ program that utilizes a user-defined function
to display all the odd numbers from 0 upto a user-specified 
number. The function should not return any value.

2. Write a C++ program that utilizes a user-defined function
to display all the even numbers from 0 upto a user-specified
 number. The function should not return any value.*/
 
#include <iostream>
using namespace std;
void display_odd_numbers_upto(int numbers){
	
	for(int i = 0; i <= numbers; i++){
		if (i % 2 != 0){
			cout << i <<endl;
		}
	}
	cout <<"============================================"<<endl<<endl;	
}

void display_even_numbers_upto(int numbers){
		for(int i = 0; i <= numbers; i++){
		if (i % 2 == 0){
			cout << i <<endl;
		}
	}	
	
}

int main(){
	int number;
	cout << "enter a number :";
	cin  >>  number;
	
	display_odd_numbers_upto(number);
	display_even_numbers_upto(number);
return 0;
}

