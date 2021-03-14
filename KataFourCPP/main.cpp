#include <iostream>
#include <cmath>
#include <string>

int main() {

	//Math functions:
	std::cout << sqrt(25) << std::endl;
	std::cout << remainder(10, 3) << std::endl; //remainder of 1
	std::cout << 10 % 3 << std::endl; //modulous
	//std::cout << 10 % 3.25 << std::endl; NOTE: this will not work!
	std::cout << remainder(10, 3.25) << std::endl; //This will return 0.25
	//other functions: ceil, floor, trunc, round...
		//difference between floor and trunc is only seen in negative numbers
	
	//Strings: 
	std::string greeting = "hello";
	std::cout << greeting[0] << std::endl;
	std::string additional_greeting = " world";

	std::cout << greeting + additional_greeting << std::endl;

	std::string comp_greeting = greeting + additional_greeting;
	comp_greeting += "!";

	std::cout << comp_greeting << std::endl;
	std::cout << comp_greeting.length() << std::endl;


	std::string userInput;

	//If you write Hello There!, only Hello will be printed because cin object only grabs the first word.
	//The cin object needs to know when to stop. In this case, a whitespace is the terminating character. 

	//std::cout << "Type: Hello There\n" << std::endl;
	//std::cin >> userInput;
	//std::cout << userInput << std::endl;

	//std::string left_over;
	//std::cin >> left_over;
	//std::cout << left_over << std::endl; 

	//How to get all words?
	std::cout << "Enter a different string\n";
	std::string user_input;
	getline(std::cin, user_input);
	std::cout << user_input << std::endl;

	//string methods:
		//.length(); num of chars in a string
		//.size(); does same as length function
		// += is the append for strings
		//.append("put your string to append here");
		//.insert(<index>, "what to insert at index");
		//.erase(<index>, <total to remove>

	std::string new_str = "teststr";
	new_str.erase(3, 1); //This will remove the second 't' in the string. Result: tesstr
	std::cout << new_str << std::endl;
	std::cout << new_str.insert(3, "t") << std::endl; //insert t at index 3. Result: teststr

	std::string another_str = "abcdefg";
	std::cout << another_str.erase(3, 2) << std::endl; //This will start at index 3, and erase [index, index+2)

	

	return 0;
}