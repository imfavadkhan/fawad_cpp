#include <iostream>
using namespace std;
int main(){
	
	//declare variables
	float num1;
	float num2;
	float result;
	int choice;
	
	//getting  values from the user
	cout<<"first number is:"<<endl;
	cin>>num1;
	cout<<"second number is:"<<endl;
	cin>>num2;
	
	//declare operations
	cout<<"enter any of the following"<<endl;
	
	cout<<"----------------------------"<<endl;
	cout<<"1. enter 1 for addition"<<endl;
	cout<<"2. enter 2 for subtraction"<<endl;
	cout<<"3. enter 3 for multiplication"<<endl;
	cout<<"4. enter 4 for division"<<endl;
	cin>>choice;
	cout<<"----------------------------"<<endl;
	
	//switch
	switch(choice){
		case 1:
		result = num1 + num2;
		cout<<"result  is :"<<result<<endl;
		break;
		case 2:
		result = num1 - num2;
		cout<<"result  is :"<<result<<endl;
		break;
		case 3:
		result = num1 * num2;
		cout<<"result  is :"<<result<<endl;
		break;
		case 4:
		result = num1 / num2;
		cout<<"result  is :"<<result<<endl;
		break;
		default:
			cout<<"invalid! error"<<endl;
	}
	 
	return 0;
}
