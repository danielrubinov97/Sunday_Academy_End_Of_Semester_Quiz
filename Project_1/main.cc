#include<iostream> //Library that holds keywords such as cout and cin

using namespace std; //This sets your "Dialect" to be in the standard dialect. Which means that we can have different cout and cin keywords. Doing different things, but std::cin and std::cout is what we use. It's is also a bit annoying to keep writing std::cin or std::cout. Hence using this namespace in this manner allows us to go around this.


//This is the main function it is called main because this is where our code runs from. Down the line you will see that we will have functions but they will not run until to call on them to run inside in the int main.
//
//Notice that wherever there is an opening curly { there is also a closing curly brace }. Everything that lives inside these curly braces blongs to either a function, if statment or loop that called it.
int main(){
	//This is an example of cout. Where the output of Hello World will show up in the console. endl ends the line and goes to the next line.
	cout << "Hello World" << endl;	

	cout << "Welcome to C++ class!";

	cout << " I hope you will enjoy the rest of the semester!" << endl;

	//return indicates the end of the function.
	return 0;
}
