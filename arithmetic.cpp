//This program will go over arithmetic in C++
//

#include <iostream>

using namespace std;

int main(){

	int menu=0;

	while(menu == 0){
		int arth;
		int a = 0 ,b=0 ,c=0;
		

		cout<<"Welcome to Arithmetic in C++\n";
		cout<<"1.Add\n";
		cout<<"2.Subtract\n";
		cout<<"3.Divide\n";
		cout<<"4.Multiply\n";
		cout<<"5.Modulus\n";
		
		cin>>arth;

		if (arth == 1){
			cout<<"Enter the first value.\n";
			cin>>a;
			cout<<"Enter the second value.\n";
			cin>>b;

			c=a+b;//In C++ you place the result variable first
			cout<< a << " + " <<b <<" = " <<c <<endl;
			
			/*
			There are many different ways to do addition.
			Ex:
			You can add to the same variable like this
			a = a+b;
			
			Ex: You CANNOT do this
			a+b = c;
			*/
			
		}else if(arth == 2){
			
			cout<<"Enter the first value.\n";
			cin>>a;
			cout<<"Enter the second value.\n";
			cin>>b;
			
			c= a-b;
			cout<< a << " - " <<b <<" = " <<c <<endl;
		}else if(arth == 3){
			
			cout<<"Enter the first value.\n";
			cin>>a;
			cout<<"Enter the second value.\n";
			cin>>b;
			
			c= a/b;
		
			cout<< a << " / " <<b <<" = " <<c <<endl;
		
		}else if(arth == 4){

			cout<<"Enter the first value.\n";
			cin>>a;
			cout<<"Enter the second value.\n";
			cin>>b;
		
			c= a*b;	
			cout<< a << " / " <<b <<" = " <<c <<endl;
		
		}else{

			cout<<"Enter the first value.\n";
			cin>>a;
			cout<<"Enter the second value.\n";
			cin>>b;
			
			c= a % b;
			//Modulos is similar to division but it only returns the decimal
			cout<< a << " / " <<b <<" = " <<c <<endl;
		}
		
	
	cout<<"Would you like to exit? Type '1' to exit and '0' to continue.\n";
	cin>>menu;
	}

	return 0;
}
