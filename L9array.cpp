//Lesson 9 Arrays in C++
//Arrays can store multiple objects into one.
//Arrays count starting from 0
//So an array of size 5 will have values form array[0] to array[4]

#include <iostream>

using namespace std;

int main(){

	
	int arr[10];//This initializes the array and makes it of size 10(it can hold 10 objects)
	cout<<"First Array" <<endl;
	//This loop will run through each stage of the array and fill it with the value of i.
	for(int i=0; i<10;i++){
		arr[i]= i;		
		cout<< arr[i] << endl;
	}

	cout<<"Second Array" <<endl;
	int arr1[5] = {35,25,12,6,2};
	cout<< arr1[0] <<endl;
	cout<< arr1[3] <<endl;
	cout<< arr1[4] <<endl;

	cout<<"Name array" <<endl;

	char nArr[6] ={'N','A','T','H','A','N'};
	for(int j =0; j<6; j++){
		cout<< nArr[j];
	} 
	cout<<endl;	



	return 0;
}
