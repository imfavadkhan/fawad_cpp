#include <iostream>
using namespace std;
int main(){
	
	int num_students;
	int num_tests;
	
	double total;
	double average;
	
	cout <<"For how many students you do the test : ";
	cin  >> num_students;
	
	cout <<"How many tests you  do for each student : ";
	cin  << num_tests;
	
	for (int student = 1; student <= num_student; student++){
	total = 0;	
	
	for (int test    = 1; test    <= num_tests  ; test++   ){
	
		double score;
 		cout << "Enter score " << test    << " for ";
		cout << "student "     << student << ": ";
		cin  >> score;
		
		total += score;
 }
	}
	}
	}
	
	return = 0;
}
