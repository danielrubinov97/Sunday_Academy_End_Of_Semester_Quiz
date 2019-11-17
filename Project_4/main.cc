//Using the code from Project_3 we will now learn about strings and loops

//Strings are variable types like ints
//Strings are just a collection of characters. These characters can be combined into words and sentences.

//Loops are pre-built into the C++ language.

#include<iostream> //Contains cin and cout
#include<string> //Contains string

using namespace std;

int main(){
	//Here we declare the variables, give them names and define their type. These variables are only integers. Which means they cannot be decimal numbers.
	int hoursYouGoToSchool;
	int hoursYouSleep;
	int hoursYouPlayGames;
	//Introduction:
	cout << "Welcome to my program!" << endl;
	//We will use a variable to check for validity of the input.
	//If the input is invalid, the loop will re-run to let the person try again.
	//We can also count how many time the person tries to input information.
	bool valid = false; //A bool type is called a boolean type. Where int can hold integer numbers. A bool holds either true or false.
	int count = 0;
	while(valid == false && count != 5){ //So the loop will run until valid is no longer false. We start off with false. Once we can prove that the input is valid we change it to true.
	//Also count not equal to 5. So, the loop will run while valid is false and count is not equal to 5.
		cout << "Please enter the number of hours you go to school per day:" << endl;
 		cin >> hoursYouGoToSchool;

		if(hoursYouGoToSchool < 0){
			cout << "You can't go to school for less than 0 hours." << endl;
			cout << "Try again!" << endl;
			count = count + 1; //This adds 1 to count every time the person does something wrong. We could also write count++. Same thing as count = count + 1.
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				return 1; //Too many tries. End the program with error code 1.
			}
		}
		else if(hoursYouGoToSchool > 16){
			cout << "You can't go to school more than 16 hours a day! That's illegal!" << endl;
			cout << "Please try again" << endl;
			count = count + 1; //This adds 1 to count every time the person does something wrong. We could also write count++. Same thing as count = count + 1.
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				return 1; //Too many tries. End the program with error code 1.
			}
		}
		else {
			cout << "Okay, you got to school: " << hoursYouGoToSchool << " hour(s) per day." << endl;
			//This is valid.
			//So we say it's valid by turning valid to true.
			valid = true;
		}
	}

	//Next time we will need to check validity we should have the variable valid to be false by default.
	valid = false;
	//Reset the counter to give another 5 tries.
	count = 0;

	cout << endl << "-------------------" << endl;//Just to make the output look nicer.
	//Same Process

	while(valid == false && count != 5){//same conditions
		cout << "Please enter number of hours you sleep per day: " << endl;

		cin >> hoursYouSleep;
		
		if(hoursYouSleep < 0){
			cout << "You can't sleep less than 0 hours. You need to sleep sometime!" << endl;
			cout << "Please try again!" << endl;
			count = count + 1; //This adds 1 to count every time the person does something wrong. We could also write count++. Same thing as count = count + 1.
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				return 1; //Too many tries. End the program with error code 1.
			}
		}
		else if(hoursYouSleep > 12){
			cout << "You seem to be sleeping too much!" << endl;
			cout << "Please fix your sleeping pattern and try again!" << endl;
			count = count + 1; //This adds 1 to count every time the person does something wrong. We could also write count++. Same thing as count = count + 1.
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				return 1; //Too many tries. End the program with error code 1.
			}
		}
		else{
			cout << "Okay, you sleep for: " << hoursYouSleep << " hour(s) per day." << endl;		
			//This is valid.
			//So we say it's valid by turning valid to true.
			valid = true;
		}
	}

	//Next time we will need to check validity we should have the variable valid to be false by default.
	valid = false;
	//Reset the counter to give another 5 tries.
	count = 0;

	cout << endl << "-------------------" << endl;
	
	//Same Process
	while(valid == false && count != 5){//same conditions
		cout << "Please enter number of yours you play games in a day: " << endl;

		cin >> hoursYouPlayGames;

		if(hoursYouPlayGames < 0){
			cout << "It is impossible to play less than zero hours a day!" << endl;
			cout << "Try again!" << endl;
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				return 1; //Too many tries. End the program with error code 1.
			}
		}
		else if(hoursYouPlayGames > 8){
			cout << "That is too many hours of playing games in a single day! Relax! Read a book or something!" << endl;
			cout << "Fix your habits!" << endl;
			cout << "This is your " << count << " attenmpt." << endl;
			cout << "You have " << 5 - count << " attempts left." << endl;
			if (count == 5){
				cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				return 1; //Too many tries. End the program with error code 1.
			}
		}
		else{
			cout << "Okay, you play for: " << hoursYouPlayGames << " hour(s) per day." << endl;
			//This is valid.
			//So we say it's valid by turning valid to true.
			valid = true;
		}
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

	cout << "So, in total you go to school for: " << hoursYouGoToSchool * 5 << " hour(s) per week." << endl; //Notice here we are doing a mathematical operation and
	//multiplying what ever is inside our variable by 5, because there are 5 school days a week.

	cout << "So, in total you sleep for: " << hoursYouSleep * 7 << " hours(s) per week." << endl;

	cout << "So, in total you play games for: " << hoursYouPlayGames * 7 << " hour(s) per week." << endl;

	//Notice there seams to be a lot of clutter in the int main, next time we will try to simplify things and make them more simplified.

	return 0;
}
