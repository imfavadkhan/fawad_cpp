#include <iostream>
using namespace std;
int main(){
	
	int choice;
	
	// any of the following
	cout<<"1. for cash"<<endl;
	cout<<"2. for credit card"<<endl;
	cout<<"3. for paypal"<<endl;
	cin>>choice;
	
	//switch
	switch(choice){
	case 1:
		cout<<"there is no charges on cash"<<endl;
		break;
	case 2:
		cout<<"note that processing fee 2.5% may apply to your trasaction"<<endl;
		break;
	case 3:
		cout<<"payments are secure and the processing fee may 3% percent apply to your transaction, purchase protection also included"<<endl;
		break;	
	default:
		cout<<"error! please select a number between 1 to 3"<<endl;	
		}
	return 0;
}
