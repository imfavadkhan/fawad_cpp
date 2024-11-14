/*6. Write a C++ program that utilizes a user-defined function to
determine the maximum value amongthree integers.*/

/*#include <iostream>
using namespace std;

int find_max_number(int a, int b, int c){
	if (a == b && a == c){
		return -1;
	} 
	else{
	
	int max = a;
	
	if(b > max){
		max = b;
	}
	if(c > max){
		max = c;
	}
	return max;
}
}
int main(){
	
	int max  = find_max_number(5 ,5 ,5 );
	
	if (max != -1){
		cout <<"max number is : " << max << endl;
	}else{
		cout << "all numbers  are  same " <<endl;
		}
cout <<"==============================================================================="<<endl;}*/



// now finding minimum number among three
#include <iostream>	
using namespace std;

int find_min_number(int a, int b, int c){
	
	int min = a;
	if (b < min){
		min = b;
	}
	if (c < min){
		min = c;
	}
	return min;
}	
int main(){
	
cout <<"========================================================"<<endl;

	cout << "Minimun value is : " << find_min_number(3 ,2 , 1);
	
cout <<"\n========================================================"<<endl;

	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
