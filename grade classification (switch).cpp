

#include <iostream>
using namespace std;
int main(){
	
	int number;
	cout<<"enter a number (0 to 100) :"<<endl;
	cin>>number;
	
	number = number/10;
	
	switch(number){
	case 10:
	case 9:
		cout<<"Grade A"<<endl;
	break;
	
	case 8:
		cout<<"Grade B"<<endl;
	break;
	
	case 7:
	case 6:
	case 5:
		cout<<"Grade C"<<endl;
	break;
	
	default:
		cout<<"Fail"<<endl;
	}
	return 0;
}
