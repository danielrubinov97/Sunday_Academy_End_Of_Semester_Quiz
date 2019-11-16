//We will learn about variables in this project. How to create, store and output data using variables.

#include<iostream>

using namespace std;

int main(){
	//Here we declare the variables, give them names and define their type. These variables are only integers. Which means they cannot be decimal numbers.
	int hoursYouGoToSchool;
	int hoursYouSleep;
	int hoursYouPlayGames;

	//The person using our software won't really open up our code, so we need give instructions to the people using our programs.
	cout << "Welcome to my program!" << endl;
	cout << "Please enter the number of hours you go to school per day:" << endl;

	cin >> hoursYouGoToSchool; // Should be about 8 hours a day, but we won't be checking the valdity of the inputs.

	cout << "Okay, you got to school: " << hoursYouGoToSchool << " hour(s) per day." << endl;

	cout << endl << "-------------------" << endl;//Just to make the output look nicer.

	cout << "Please enter number of hours you sleep per day: " << endl;

	cin >> hoursYouSleep;

	cout << "Okay, you sleep for: " << hoursYouSleep << " hour(s) per day." << endl;

	cout << endl << "-------------------" << endl;

	cout << "Please enter number of yours you play games in a day: " << endl;

	cin >> hoursYouPlayGames;

	cout << "Okay, you play for: " << hoursYouPlayGames << " hour(s) per day." << endl;

	cout << endl << "------------------------------------" << endl;

	cout << "Okay so, you go to school for " << hoursYouGoToSchool << " hour(s) per day." << endl;

	cout << "Okay so, you sleep for: " << hoursYouSleep << " hour(s) per day." << endl;
	
	cout << "Okay so, you play for: " << hoursYouPlayGames << " hour(s) per day." << endl;

	cout << "So, in total you go to school for: " << hoursYouGoToSchool * 5 << " hour(s) per week." << endl;

	cout << "So, in total you sleep for: " << hoursYouSleep * 7 << " hours(s) per week." << endl;

	cout << "So, in total you play games for: " << hoursYouPlayGames * 7 << " hour(s) per week." << endl;

	return 0;
}
