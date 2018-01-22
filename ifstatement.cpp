//
//
#include <iostream>

using namespace std;

int main(){

	int age;            //This line declares an integer named age
	
	cout<<" What is your age?\n";       //Prints "What is your age"
	cin>> age;         //Asks for input of age. (Integer)

	if(age <5){                //If statement that compares users age to age of a child
		cout<<"You are a child\n";       // Prints out "You are a child"
	}else{           //if the previous comparison was false then else will be compared
		cout<<"You are not a child\n";       // Prints out "You are not a child"
	}

//-----------------------------------------------------------------------------------------------------------

	int canDrive = 16;            //This line declares an integer named canDrive
	int age1;            //This line declares an integer named age
	int tooOldToDrive = 80; //This line declares an interger named tooOldToDrive

	//The above to variables can be written like this as well
//	int canDrive, age, tooOldToDrive;

	
	cout<<" What is your age?\n";       //Prints "What is your age"
	cin>> age1;         //Asks for input of age. (Integer)

	if(age1 >= canDrive){              //Checks age against age to see iif it is greater than or equal to driving age 
		cout<<"You can drive\n";       // Prints out "You can drive"
	}else if(age1 >= tooOldToDrive) {       //Compares age to see if you are too old to drive 
		cout<<"You are too old to drive safely\n";       // Prints out "You are not a child"
	}else{
		cout<<"You are too young to drive\n";
	}


	





	return 0;
}
