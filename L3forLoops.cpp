//For loops are loops that keep running until the variant ends it

#include <iostream>

using namespace std;

int main(){

	int i,x=10;
	
	for(i=0;i<x;i++){//I is the variant(it changes). There are 3 steps to a for loop. Step 1: Declare variant
				//Step 2: Compare variant to a something. Step 3:Increment or decrement variant.
				//Step 3 is very important and without it you will get an infinite loop.

	cout<<"I am a for loop I am on loop " <<i <<endl; 
	}
	/*
	When you run this program it will output this line X amount of times. It is good to get into the habbit of declaring 
	x outside of the loop. This will allow you to easily change the variable when you start making larger programs.
	Run this program to see the output.
	*/

//This is an INFINITE LOOP. This should not be done ever unless you want to crash your program.
	
	/*TODO Find what is wrong with the below code and why it is an infinite loop.
	
	int i,x=10;
	
	for(i=0;i<x;i){//I is the variant(it changes). There are 3 steps to a for loop. Step 1: Declare variant
				//Step 2: Compare variant to a something. Step 3:Increment or decrement variant.
				//Step 3 is very important and without it you will get an infinite loop.
	i--;
	cout<<"I am a for loop I am on loop " <<i <<endl; 
	}

	*/


	return 0;

}
