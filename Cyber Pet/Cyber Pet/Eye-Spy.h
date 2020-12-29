#pragma once
void Desk()
{
	std::string input{};
	do
	{
		std::cout << "Eye Spy with my little eye...something begining with D" << std::endl;
		std::cout << "Please enter your guess (Or exit): ";
		std::cin >> input;
		std::cout << std::endl;
		if (input == "Desk")
		{
			break;
		}
	} while (input != "Exit");
	
}
void Chair()
{
	std::string input{};
	do
	{
		std::cout << "Eye Spy with my little eye...something begining with C" << std::endl;
		std::cout << "Please enter your guess (Or exit): ";
		std::cin >> input;
		std::cout << std::endl;
		if (input == "Chair")
		{
			break;
		}
	} while (input != "Exit");
}
	void Book()
{
	std::string input{};
	do
	{
		std::cout << "Eye Spy with my little eye...something begining with B" << std::endl;
		std::cout << "Please enter your guess (Or exit): ";
		std::cin >> input;
		std::cout << std::endl;
		if (input == "Book")
		{
			break;
		}
	} while (input != "Exit");

}
void Phone()
{
	std::string input{};
	do
	{
		std::cout << "Eye Spy with my little eye...something begining with P" << std::endl;
		std::cout << "Please enter your guess (Or exit): ";
		std::cin >> input;
		std::cout << std::endl;
		if (input == "Phone")
		{
			break;
		}
	} while (input != "Exit");
}
void Laptop()
{
	std::string input{};
	do
	{
		std::cout << "Eye Spy with my little eye...something begining with L" << std::endl;
		std::cout << "Please enter your guess (Or exit): ";
		std::cin >> input;
		std::cout << std::endl;
		if (input == "Laptop")
		{
			break;
		}
	} while (input != "Exit");

}