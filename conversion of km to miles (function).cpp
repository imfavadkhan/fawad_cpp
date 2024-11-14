/*5. Write a C++ program that converts a distance from
kilometers to miles using a user-definedfunction.*/

#include <iostream>
using namespace std;

float convert_km_to_miles(float distance_km){
	
	return distance_km * 0.6231;
	
}
 
int main(){
	
	int distance_km;
	float distance_miles;
	
	cout << "Enter a distance in km : ";
	cin  >> distance_km;
	
	distance_miles = distance_km * 0.6231;
	
	cout << distance_km << " km is equal to " << distance_miles << " miles ";
	
	
	return 0;
	
}
