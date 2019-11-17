//Using the code from Project_6 we will now learn about how to write into files.

//Strings are variable types like ints
//Strings are just a collection of characters. These characters can be combined into words and sentences.

#include<iostream>
#include<string>
#include<stdlib.h> //For a good exit keyword. exit(EXIT_FAILURE);
#include<fstream> //For reading from a file as input.

using namespace std;

ifstream input_file("data", ios::in);

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
	//Here is where we will read the data file.
	//50 variables for 50 people. Each one is designed for one person. EXAMPLE hoursYouGoToSchool[0] is the amount of hours the first person goes to school.
	int hoursYouGoToSchool[50];
	int hoursYouSleep[50];
	int hoursYouPlayGames[50];
	//Declaring variables for storing names.
	string First[50];
	string Last[50];
	cout << "------------" << endl;
	cout << "Pulling data" << endl;
	cout << "------------" << endl;
	//Two counters i and j.
	int i = 0;
	int j = 0;
	//Pull the number of total people in the file.
	int numberOfPeople;
	input_file >> numberOfPeople; //Pulls the number of people from the file. Open the data file to see what's in it. The first thing you see is the number of people.
	for(i = 0; i < numberOfPeople; i++){
		input_file >> First[i];
		input_file >> Last[i];
		input_file >>hoursYouGoToSchool[i];
		input_file >> hoursYouSleep[i];
		input_file >> hoursYouPlayGames[i];
	}

	//Introduction:
	cout << "Welcome to my program!" << endl;
	//Print:
	for(i = 0; i < numberOfPeople; i++){
		cout << First[i] << " ";
		cout << Last[i] << " "; 
		cout << hoursYouGoToSchool[i] << " ";
		cout << hoursYouSleep[i] << " ";
		cout << hoursYouPlayGames[i] << endl;
				
	}

	int total_amount_of_hours_per_day;

	cout << "Remember, there are only 24 hours in a day! So if you spend more than 24 hours during the day, sleeping, going to school and playing games, something is off." << endl;
	cout << "So let's check that." << endl;
	
	for(i = 0; i < numberOfPeople; i++){
		total_amount_of_hours_per_day = hoursYouGoToSchool[i] + hoursYouPlayGames[i] + hoursYouSleep[i];
		cout << endl;
		cout << "----------------------------------------------" << endl;
		cout << "The total amount of hours " << First[i] << " " << Last[i] << " spends a day, sleeping, going to school and playing games is: " << total_amount_of_hours_per_day << "." << endl;

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
		cout << "For: " << First[i] << " " << Last[i] << endl;
		calculateWeekly(hoursYouGoToSchool[i], hoursYouSleep[i], hoursYouPlayGames[i]);
	}
	cout << endl;
	cout << "---------------------------" << endl;
	//Now we want to add some people!
	cout << "Would you like to add your hours too?(Y/y)" << endl;
	char response;
	cin >> response;
	if(response == 'Y' || response == 'y'){
		cout << "Okay! Adding you as another person!" << endl;
		numberOfPeople = numberOfPeople + 1;
		cout << "What is your first name?" << endl;
		cin >> First[numberOfPeople - 1];
		cout << "What is your last name?" << endl;
		cin >> Last[numberOfPeople - 1];
		askSchoolHours(hoursYouGoToSchool[numberOfPeople - 1]);
		askSleepHours(hoursYouSleep[numberOfPeople - 1]);
		askPlayingHours(hoursYouPlayGames[numberOfPeople - 1]);
	}
	else {
		cout << "Okay end of code!" << endl;
		return 0;
	}
	cout << endl;
	cout << "----------------------------------------------" << endl;
	input_file.close();
	ofstream output_file("data", ios::out); //We use this to write into our data file. To overwrite out data file.
	
	cout << "SAVING YOUR DATA" << endl;
	output_file <<numberOfPeople << endl;
	for(i = 0; i < numberOfPeople; i++){
		output_file << First[i] << " ";
		output_file << Last[i] << " "; 
		output_file << hoursYouGoToSchool[i] << " ";
		output_file << hoursYouSleep[i] << " ";
		output_file << hoursYouPlayGames[i] << endl;

	}
	cout << "Data saved!" << endl;
	output_file.close();
	cout << "Check the data file!" << endl;




	return 0;
}
