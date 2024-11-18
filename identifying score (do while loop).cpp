#include <iostream>
using namespace std;
int main (){
	
	char choice;
	
	do {
	
	int score1;
	int score2;
	int score3;
	
	cout << "Enter your score : ";
	cin  >> score1 ;
	cout << "Enter your score : ";
	cin  >> score2 ;
	cout << "Enter your score : ";
	cin  >> score3 ;
	
	double average = (score1 + score2 + score3)/3;
	cout << "================================================="<<endl;
	cout << "The average of the three scores is  : "<< average << endl;
	cout << "================================================="<<endl;
	cout << "Do you want to enter score again (Enter Y or y) : ";
	cin  >> choice;
	}
	
	while (choice == 'Y' || choice == 'y');
}
