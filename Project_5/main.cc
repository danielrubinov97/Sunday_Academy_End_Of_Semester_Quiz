//Using the code from Project_4 we will now learn about functions. How we could clean up our main function a bit.

//Functions are similar to the int main at we already have. The structure is similar. We can have functions of different types and get them to return everything we choose.
//Functions are pre-built into the C++ language.

#include<iostream>
#include<string>
#include<stdlib.h> //For a good exit keyword. exit(EXIT_FAILURE);

using namespace std;

void askSchoolHours(int &hours){ //Hours here are the hoursYouGoToSchool
	//We will use a variable to check for validity of the input.
	//If the input is invalid, the loop will re-run to let the person try again.
	//We can also count how many time the person tries to input information.
	bool valid = false; //A bool type is called a boolean type. Where int can hold integer numbers. A bool holds either true or false.
	int count = 0;
	while(valid == false && count != 5){ //So the loop will run until valid is no longer false. We start off with false. Once we can prove that the input is valid we change it to true.
	//Also count not equal to 5. So, the loop will run while valid is false and count is not equal to 5.
		cout << "Please enter the number of hours you go to school per day:" << endl;
 		cin >> hours;

		if(hours < 0){
			cout << "You can't go to school for less than 0 hours." << endl;
			cout << "Try again!" << endl;
			count = count + 1; //This adds 1 to count every time the person does something wrong. We could also write count++. Same thing as count = count + 1.
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
			}
		}
		else if(hours > 16){
			cout << "You can't go to school more than 16 hours a day! That's illegal!" << endl;
			cout << "Please try again" << endl;
			count = count + 1; //This adds 1 to count every time the person does something wrong. We could also write count++. Same thing as count = count + 1.
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
			}
		}
		else {
			cout << "Okay, you got to school: " << hours << " hour(s) per day." << endl;
			//This is valid.
			//So we say it's valid by turning valid to true.
			valid = true;
		}
	}

	return;
}

void askSleepHours(int &hours){//Hours here are the hoursYouSleep.
	bool valid = false;
	int count = 0;

	while(valid == false && count != 5){//same conditions
		cout << "Please enter number of hours you sleep per day: " << endl;

		cin >> hours;
		
		if(hours < 0){
			cout << "You can't sleep less than 0 hours. You need to sleep sometime!" << endl;
			cout << "Please try again!" << endl;
			count = count + 1; //This adds 1 to count every time the person does something wrong. We could also write count++. Same thing as count = count + 1.
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
			}
		}
		else if(hours > 12){
			cout << "You seem to be sleeping too much!" << endl;
			cout << "Please fix your sleeping pattern and try again!" << endl;
			count = count + 1; //This adds 1 to count every time the person does something wrong. We could also write count++. Same thing as count = count + 1.
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
			}
		}
		else{
			cout << "Okay, you sleep for: " << hours << " hour(s) per day." << endl;		
			//This is valid.
			//So we say it's valid by turning valid to true.
			valid = true;
		}
	}

	return;
}

void askPlayingHours(int &hours){//Hours here are the hoursYouPlayGames
	bool valid = false;
	int count = 0;

	while(valid == false && count != 5){//same conditions
		cout << "Please enter number of yours you play games in a day: " << endl;

		cin >> hours;

		if(hours < 0){
			cout << "It is impossible to play less than zero hours a day!" << endl;
			cout << "Try again!" << endl;
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
			}
		}
		else if(hours > 8){
			cout << "That is too many hours of playing games in a single day! Relax! Read a book or something!" << endl;
			cout << "Fix your habits!" << endl;
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
			}
		}
		else{
			cout << "Okay, you play for: " << hours << " hour(s) per day." << endl;
			//This is valid.
			//So we say it's valid by turning valid to true.
			valid = true;
		}
	}

	return;
}

void calculateWeekly(int &hoursSchool, int &hoursSleep, int &hoursPlay){ //& is not needed here, but for the sake on consistance I left it.
	cout << "So, in total you go to school for: " << hoursSchool * 5 << " hour(s) per week." << endl; //Notice here we are doing a mathematical operation and
	//multiplying what ever is inside our variable by 5, because there are 5 school days a week.

	cout << "So, in total you sleep for: " << hoursSleep * 7 << " hours(s) per week." << endl;

	cout << "So, in total you play games for: " << hoursPlay * 7 << " hour(s) per week." << endl;
}

int main(){
	//VARIABLES EXIST IN SCOPES
	//These three variables only exist inside int main. Any function we make above or below the int main will not have access to the information inside the variables.
	//There are a few ways we could get around this problem. The worst one is to move these variables above the int main. These variables will become global variables and that isn't safe.
	//Another option is to pass them along to the function. &Give the function the power to write to them.
	int hoursYouGoToSchool;
	int hoursYouSleep;
	int hoursYouPlayGames;
	//Introduction:
	cout << "Welcome to my program!" << endl;
	
	askSchoolHours(hoursYouGoToSchool);

	cout << endl << "-------------------" << endl;//Just to make the output look nicer.

	askSleepHours(hoursYouSleep);

	cout << endl << "-------------------" << endl;
	
	askPlayingHours(hoursYouPlayGames);

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

	if(total_amount_of_hours_per_day > 24){ //We could do another loop for this one, but we will have to loop everything from the beginning of the code to this point.
	//Another solution is that we could also do this check a bit earlier or even check as we go along. For example if the first two inputs already exceed 24 hours that's a problem.
	//Lastly, there is a way more elegant solution, but this solutions requires functions. Which we will do for the next project.
		cout << "No good! Something doesn't add up. Please try again!" << endl;
		return 1;
	}
	else{
		cout << "Looks good! The math makes sense." << endl;
	}

	cout << endl;

	calculateWeekly(hoursYouGoToSchool, hoursYouSleep, hoursYouPlayGames);

	//Notice how the int main is simplier and cleaner. Of course a lot more work can go into it to make it even nicer, but you could look into that.
	
	//The next goal is to add some storage to this code. We need to be able to store some of this data so we can catalog it.

	//We will also introduce arrays and strings so that we could add some names to your data. (To who does this data belong?)

	return 0;
}
