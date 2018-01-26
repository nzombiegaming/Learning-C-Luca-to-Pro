/*
	Today we are going to be talking about switch statements. Switch statements are important to clean programming. 
	Switch statements allow you to use the versitility of if statements but without all of the nested if's.
	Switch statements look better and are easy to modify if you need to change something later on (you will need to).
	Each case in a switch statement (case 1, 16, 18...) is what you will compare your age too. You could use character,
	integers, strings and others with switch statements. If statements do not allow you to us <= >= < > in c++. Switch
	statements are good for when you need a lot of options and you have a list of options for the user.
*/
#include <iostream>

using namespace std;

int main(){

	int age;            //This line declares an integer named age
	cout<<"Enter your age\n";
	cin>> age;

	switch(age){ // Switch statements are basically more compact if statement
			//they are commonly used when there is a large amount of options or nested if statments
		case 1: //This is a colon not a semicolon REMEMBER THAT!
			
			cout<< "You are too young to do anything. Your age is " <<age <<endl;
			break;//Break exits out of the switch statement.
		
		case 16:
			cout<< "You are old enough to drive. Your age is " <<age <<endl;
			break;

		case 18:	
			cout<<"You can drink alcohol in Canada, Europe and other places. Your age is " <<age <<endl;
			break;
		case 21:
			cout<<"You can drink alcohol in United States. Your age is " <<age <<endl;
			break;
		default:
			cout<<"Your age is not special enough. Your age is " <<age <<endl;
			break;
		} 	

	return 0;
}
