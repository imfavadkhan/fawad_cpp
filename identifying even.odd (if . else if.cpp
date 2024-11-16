#include <iostream>
using namespace std;
int main(){

	int num;
	char choice;
	
	cout <<"Enter a  number : ";
	cin >>num;
	
	cout <<"E or e is for Even , O or o is for Odd :";
	cin >>choice;
	
	// for even numbers
	if (choice == 'E' || choice == 'e'){
		
		for (int i = 0; i <= num; i = i+2){
			cout <<i<<endl;	}}
 
 	//  for odd numbers
	else  if(choice == 'O' || choice == 'o'){
		
		for (int i = 1; i <= num; i = i+2 ){
			cout <<i<<endl;}}
			
	else{
		
		
		cout <<"erorr"<<endl;
	}

return 0;}
