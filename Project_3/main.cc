//Using the code from Project_2 we will now learn about 

#include<iostream>

using namespace std;

int main(){
	//Here we declare the variables, give them names and define their type. These variables are only integers. Which means they cannot be decimal numbers.
	int hoursYouGoToSchool;
	int hoursYouSleep;
	int hoursYouPlayGames;
	//Introduction:
	cout << "Welcome to my program!" << endl;
	cout << "Please enter the number of hours you go to school per day:" << endl;

	cin >> hoursYouGoToSchool; // Should be about 8 hours a day, but we won't be checking the valdity of the inputs. So now we will check for it, if it's not what we like then we can ask them to enter it again.

	if(hoursYouGoToSchool < 0){
		cout << "You can't go to school for less than 0 hours." << endl;
		cout << "Try again!" << endl;
		//We are ending are program with a 1 means error code 1. Something went wrong.
		return 1;
	}
	else if(hoursYouGoToSchool > 16){
		cout << "You can't go to school more than 16 hours a day! That's illegal!" << endl;
		cout << "Please try again" << endl;
		return 1;
	}
	else {
		cout << "Okay, you got to school: " << hoursYouGoToSchool << " hour(s) per day." << endl;
	}

	cout << endl << "-------------------" << endl;//Just to make the output look nicer.
	//Same Process
	cout << "Please enter number of hours you sleep per day: " << endl;

	cin >> hoursYouSleep;
	
	if(hoursYouSleep < 0){
		cout << "You can't sleep less than 0 hours. You need to sleep sometime!" << endl;
		cout << "Please try again!" << endl;
		return 1;
	}
	else if(hoursYouSleep > 12){
		cout << "You seem to be sleeping too much!" << endl;
		cout << "Please fix your sleeping pattern and try again!" << endl;
		return 1;
	}
	else{
		cout << "Okay, you sleep for: " << hoursYouSleep << " hour(s) per day." << endl;		
	}
	
	cout << endl << "-------------------" << endl;
	
	//Same Process
	cout << "Please enter number of yours you play games in a day: " << endl;

	cin >> hoursYouPlayGames;

	if(hoursYouPlayGames < 0){
		cout << "It is impossible to play less than zero hours a day!" << endl;
		cout << "Try again!" << endl;
		return 1;
	}
	else if(hoursYouPlayGames > 8){
		cout << "That is too many hours of playing games in a single day! Relax! Read a book or something!" << endl;
		cout << "Fix your habits!" << endl;
		return 1;
	}
	else{
		cout << "Okay, you play for: " << hoursYouPlayGames << " hour(s) per day." << endl;
	}

	cout << endl << "------------------------------------" << endl;

	cout << "Okay so, you go to school for " << hoursYouGoToSchool << " hour(s) per day." << endl;

	cout << "Okay so, you sleep for: " << hoursYouSleep << " hour(s) per day." << endl;
	
	cout << "Okay so, you play for: " << hoursYouPlayGames << " hour(s) per day." << endl;

	cout << endl;

	int total_amount_of_hours_per_day;

	cout << "Remember, there are only 24 hours in a day! So if you spend more than 24 hours during the day, sleeping, going to school and playing games, something is off." << endl;
	cout << "So let's check that." << endl;
	total_amount_of_hours_per_day = hoursYouGoToSchool + hoursYouPlayGames + hoursYouSleep;
	cout << "The total amount of hours you spend a day, sleeping, going to school and playing games is: " << total_amount_of_hours_per_day << "." << endl;

	if(total_amount_of_hours_per_day > 24){
		cout << "No good! Something doesn't add up. Please try again!" << endl;
		return 1;
	}
	else{
		cout << "Looks good! The math makes sense." << endl;
	}

	cout << endl;

	cout << "So, in total you go to school for: " << hoursYouGoToSchool * 5 << " hour(s) per week." << endl; //Notice here we are doing a mathematical operation and
	//multiplying what ever is inside our variable by 5, because there are 5 school days a week.

	cout << "So, in total you sleep for: " << hoursYouSleep * 7 << " hours(s) per week." << endl;

	cout << "So, in total you play games for: " << hoursYouPlayGames * 7 << " hour(s) per week." << endl;

	//Notice that if a person entered something wrong the whole program ends. Next project we will build upon this and we will allow people to re-enter values so they won't have to re=run the program.
	//We could also keep track of how many times that person retried entering the correct value. If they keep not putting the correct responses we could end the program saying that they really don't understand something.

	return 0;
}
