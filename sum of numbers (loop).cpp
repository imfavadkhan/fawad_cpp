#include <iostream>
using namespace std;
int main(){
	
	int num;
	cout<<"Enter a number :";
	cin>>num;
	
	int sum = 0;
	
	for(int i=1; i<=num; i++){
	
		 sum += i;
		 }	
		 
		 cout<<"sum  of all numbers from (1 to 20) :"<<sum;

	
	return 0;
}
