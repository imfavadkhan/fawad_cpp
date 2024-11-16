#include <iostream>
using namespace std;
int main(){
	float number1;
	float number2;
	char oprtrs;
	
	cout << "Enter number 1: ";
	cin >> number1;
	
	cout << "Enter number 2: ";
	cin >> number2;
	
	cout << "Enter an Operator (+ , - , * , /) ";
	cin >> oprtrs;
	
	if (oprtrs =='+'){
		cout << "Result Will Be: " <<number1+number2;
	} else if (oprtrs == '-'){
		cout << "Result Will Be: " <<number2-number1;
	}else if (oprtrs == '*'){
		cout << "Result Will Be: " <<number1*number2;
	}else if (oprtrs == '/'){
	   cout << "Result Will Be: " <<number1/number2;
	}if (number2 == 0){
		cout << "Divsion is not possible";
	}
	
}
