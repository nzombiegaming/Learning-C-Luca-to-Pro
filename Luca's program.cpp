// ConsoleApplication3.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"

#include <iostream>


using namespace std;

int main()
{
	int object;

	cout << "you got sentenced to 25 years in prison, and since you dont want to wait 25 years to get out, you decide to break out. you have 4 objects in your room, object 1=file, 2=keys, 3=shovel, 4=small drill. Wich one do you choose?" << endl;

	cin >> object;

	switch (object) {


	case 1:

		cout << "you managed to get through the bars on the door." << endl;

		break;


	case 2:

		cout << "you managed to open the doors of your cell." << endl;

		break;

	case 3:

		cout << "you managed to dig a hole in the ground." << endl;

		break;

	case 4:

		cout << "you managed to drill a hole in the wall." << endl;

		break;


	}


	int way;

	cout << "you got out of your cell.. somehow. Now you can choose where to go, you find yourself in the middle of a corridor. there are 3 escape routes, 1=main door, 2=vents, 3=training ground." << endl;

	cin >> way;

	switch (way) {

	case 1:

		cout << "you tried to open the main door.. its locked, and the guards noticed you... you failed to escape. GAME OVER." << endl;

		break;

		return 0;

	case 2:

		cout << "you went onto the railing near you, and climbed up to the vent." << endl;

		break;

	case 3:

		cout << "you openend the door to the training ground. nothing special there, so you go back, and try the vents." << endl;

		break;

	}


	int weapon;

	cout << "you`re crawling through the vents.. trying not to make any sounds.. suddenly, your pants get stuck in a small gap in the vents.. you try to get them out again, but you accidentaly put too much weight on one spot.. and you fall through the vents.. the guards come running at you, you get up, run through a door.. ending up at the training grounds.. QUICK! you have to choose a weapon, 1=dumbbell, 2=weights, 3=bar." << endl;

	cin >> weapon;

	switch (weapon) {

	case 1:

		cout << "you picked up the dumbbell, the guards come running at you, you swing the heavy dumbbell at them, hitting the first one.. blood splatters all over the ground.. you stand in schock.. the other guard runs at you, hits you multiple times with his fists, and ending it with tasing you to the ground. GAME OVER." << endl;

		break;

	case 2:

		cout << "you picked up the weights, the guards come running, you throw the weights at them... hitting down both, unfortunately.. they both get up again, slamming you onto the ground and tasing you." << endl;

		break;

	case 3:

		cout << "you picked up the bar, the guards come running.. you swing at them, you hit one on the head.. he falls over, blood drips down the bar, before the other guard could do anything, you hit him as well, he collapses" << endl;

		break;

	}

	int finale;

	cout << "from the training grounds you see a fence. you could climb over it.. or try the main door, with the keys from the dead guards.. 1=fence, 2=main door." << endl;

		cin >> finale;

	switch (finale) {

	case 1:

		cout << "you sprint to the fence.. scared of grabbing it, you dont know if its electrified.. you grab it, you`re still alive! you climb over it.. start running... you`re out of prison.. from now on, your life is a completely different story, no one knows if you made it.. or if you just ended up getting caught. its your choice, on how you want it now. THANK YOU FOR PLAYING MY REALLY SHORT GAME!" << endl;

		break;

	case 2:

		cout << "you pick up the dead guards key, you run towards the main door, trying desperatly to open the door with the key.. it wont work.. you decide to go back to the training grounds.. you notice that one of the dead guards has a gun.. you pick it up.. its loaded.. point it at your head and... GAME OVER." << endl;

		break;
	}

	return 0;
	
}

