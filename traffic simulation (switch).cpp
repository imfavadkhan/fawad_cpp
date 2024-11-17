#include <iostream>
using namespace std;
int main(){
	
	int choice;
	int result;
	
//	cout<<"red";
//	cin>>signal1;
//	
//	cout<<"yellow";
//	cin>>signal2;
//	
//	cout<<"green";
//	cin>>signal3;
	
	cout<<"1.r for red"<<endl;
	cout<<"2.y for yellow"<<endl;
	cout<<"3.g for green"<<endl;
	cin>>choice;
	
	switch(choice){
	case 1:
		result=choice;
		cout<<"signal is red stop"<<endl;
		break;
	case 2:
		result=choice;
		cout<<"signal is yellow slow down"<<endl;
		break;
	case 3:
		result=choice;
		cout<<"signal is green go"<<endl;
		break;
		default:
			cout<<"error! you put invalid signal"<<endl;
	}
	return 0;
}
