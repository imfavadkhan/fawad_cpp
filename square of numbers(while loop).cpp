#include <iostream>
using namespace std;
int main(){
	
	int number = 1;
	int limit  = 10;
	
	while (number <= limit ){
	
		int square =  number * number;
		
		
		cout <<"=================================================="<<endl;
		cout << "Square of " << number << " is " << square << endl;
		
		number ++;
	}
	
}
