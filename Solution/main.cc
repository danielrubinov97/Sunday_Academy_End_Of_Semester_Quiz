#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main (){
    int ID, hours_worked;
    double hourly_rate;
    string First, Last;

    cout << "Welcome to the payment program." << endl;
    cout << "Let's calculate how much money you earn per week." << endl;
    bool valid = false;
    int count = 0; //Error Counts
    while(valid == false && count < 5){
        cout << "Please input your identification code (ID):" << endl;
        cin >> ID;
        if(ID < 0){
            cout << "ERROR: 101" << endl;
            cout << "Invalid ID: ID cannot be negative." << endl;
            count++;
            cout << "\t This is your " << count << " attempt." << endl;
            cout << "\t You have " << 5 - count << " attempt(s) left!" << endl;
            if(count == 5){
                cout << "FATAL ERROR: 501" << endl;
                cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
            }
        }
        else if(ID > 99999){ //If the ID is greater than 5 digits.
            cout << "ERROR: 102" << endl;
            cout << "Invalid ID: ID is too many digits long." << endl;
            count++;
            cout << "\t This is your " << count << " attempt." << endl;
            cout << "\t You have " << 5 - count << " attempt(s) left!" << endl;
            if(count == 5){
                cout << "FATAL ERROR: 501" << endl;
                cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
            }
        }
        else{
            cout << "Okay, your ID is: " << ID << endl;
            //Could add a response here to double check and verify they are satisfied with their input.
			valid = true;
        }
    }

    cout << "What is your first name?" << endl;
    cin >> First;
    //No validation due to complexity. Could possibly check for special symbols even though some names contain certain special symbols. Could also check for spaces.
    cout << "What is your last name?" << endl;
    cin >> Last;
    cout << "Okay, your full name is: (Last, First) " << endl;
    cout << Last << ", " << First;
    //Verify if they are satisfied with their input.

    cout << "Great! We now know who you are, " << First << " " << Last << "." << endl;
    //Validation:
    valid = false;
    count = 0; //Error Counts
    while(valid == false && count < 5){
        cout << First << ", " <<  "what is your hourly rate?" << endl;
        cin >> hourly_rate;
        if(hourly_rate < 0){
            cout << "ERROR: 103" << endl;
            cout << "Invalid hourly rate: rate cannot be negative." << endl;
            count++;
            cout << "\t This is your " << count << " attempt." << endl;
            cout << "\t You have " << 5 - count << " attempt(s) left!" << endl;
            if(count == 5){
                cout << "FATAL ERROR: 501" << endl;
                cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
            }
        }
        else if(hourly_rate > 2000){
            cout << "ERROR: 104" << endl;
            cout << "Invalid hourly rate: hourly rate is too high!" << endl;
            count++;
            cout << "\t This is your " << count << " attempt." << endl;
            cout << "\t You have " << 5 - count << " attempt(s) left!" << endl;
            if(count == 5){
                cout << "FATAL ERROR: 501" << endl;
                cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
            }
        }
        else{
            cout << "Okay, your hourly rate is: " << hourly_rate << endl;
            //Could add a response here to double check and verify they are satisfied with their input.
			valid = true;
        }
    }

    valid = false;
    count = 0; //Error Counts
    while(valid == false && count < 5){
        cout << First << ", " <<  "how many hours do you work a week?" << endl;
        cin >> hours_worked;
        if(hours_worked < 0){
            cout << "ERROR: 105" << endl;
            cout << "Invalid hours worked: you cannot work less than 0 hours a week!" << endl;
            count++;
            cout << "\t This is your " << count << " attempt." << endl;
            cout << "\t You have " << 5 - count << " attempt(s) left!" << endl;
            if(count == 5){
                cout << "FATAL ERROR: 501" << endl;
                cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
            }
        }
        else if(hours_worked > 126){ //168 hours in a week, say you sleep 6 hours a day for 7 days a week, thats 42 hours. That means you can work max of 126 hours a week.
            cout << "ERROR: 106" << endl;
            cout << "Invalid hours worked: hours worked is too high! You need to sleep sometime!" << endl;
            count++;
            cout << "\t This is your " << count << " attempt." << endl;
            cout << "\t You have " << 5 - count << " attempt(s) left!" << endl;
            if(count == 5){
                cout << "FATAL ERROR: 501" << endl;
                cout << "Too many tries." << endl;
				cout << "Run the program again." << endl;
				exit(EXIT_FAILURE);
            }
        }
        else{
            cout << "Okay, the amount hours you worked this week is: " << hours_worked << endl;
            //Could add a response here to double check and verify they are satisfied with their input.
			valid = true;
        }
    }

    
    
    return 0;
}