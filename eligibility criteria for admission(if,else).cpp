#include <iostream>
using namespace std;
int main(){
	//declaring variables
	double total_score;
	double fsc_score;
	double test;
	double interview;
	
	//displaying values
	cout<<"enter your fsc marks (out of 1200):"<<endl;
	cin>>fsc_score;
	cout<<"enter your test marks (out of 100):"<<endl;
	cin>>test;
	cout<<"enter your interview marks (out of 10):"<<endl;
	cin>>interview;
	
	//by formula
	total_score=(fsc_score/1200*50)+(test/100*30)+(interview/10*20);
	cout<<"your total weighetage is :"<<total_score;
	
	if  (total_score>75){
		cout<<"\nyou  are eligible for admission";
	}else{
		cout<<"\nyou are not eligible for admission";
	}
	
	return 0;
	
}
