//This program is using what we have learned using char
//
#include <iostream>

using namespace std;

int main(){

	char menu; 
	char quit;
	quit = 'n';

		//To compare characters you use ' ' to show where the character is.
	
	while(quit == 'n'){
	

		cout<<" Welcome to Character Tester!\n";
		cout<<"I: for the initial test\n";
		cout<<"T: for the Truth Detector\n";
		cin>> menu;
		switch(menu){
			case 'I'://This is to avoid case sensitivity
			case 'i':
				char a;
	
				cout<< "What is your Middle Initial?\n";
				cin>> a;
	
				cout<< "Your middle Initial is "<<a <<endl;
				break;
	
			case 'T':
			case 't': 
				char TorF, x;
				cout<<"You will be asked a series of questions answer either T or F\n";
				cout<<"Type 'x' to continue/n";
				cin>> x;
	
				cout<<" Are you in school?\n";
				cin>> TorF;

				if(TorF == 'T'||'t'){
					cout<<" You are in school!\n";
				}else{
					cout<<"You are not in school!\n";
				}
				
				cout<<"Do you eat breakfast?\n";
				cin>>TorF;
			
				if(TorF == 'T'||'t'){
					cout<<" You eat the most important meal of the day!\n";
				}else{
					cout<<"You need breakfast to increase productivity\n";
				}
		}
		
		cout<<"Would you like to quit? Type 'n' for no and 'y' for yes\n";
		cin>> quit;
 			
	}	

	return 0;
}

