#include <iostream>
using namespace std;
int main(){

	int number;
	int product;
 
    cout <<"Enter a number : ";
    cin  >> number;
 
	for(int i = 1 ; i <= 10; i++){
		
		product = number * i;
		cout << number << " * " << i << " = " << product << endl;
		cout <<"========================================"<< endl;
		
	}


return 0;
}
