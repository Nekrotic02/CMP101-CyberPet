#include <string>
#include <iostream>
#include <thread>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include "Eye-Spy.h"

int hunger = 5;
int tiredness = 5;
std::string name; 
std::string mood;

#include "Multi-Threaded_Functions.h"
#include "Eye-Spy.h"
#include "Interactions.h"

int main()
{
	depreciate_hunger(hunger);
	depreciate_sleep(tiredness);
	mood_check(mood);

	std::cout << "Please name your pet: ";
	std::cin >> name;
	system("cls");
	while (true)
	{
		int option = 0;
		// print the menu to choose if they want to view stats, feed the pet, put the pet to bed, tell it a joke or play eye-spy
		std::cout << "Pet name: " << name << std::endl; 
		std::cout << std::endl;
		std::cout << "1) Show Stats" << std::endl;
		std::cout << "2) Feed Pet" << std::endl;
		std::cout << "3) Put Pet to Bed" << std::endl;
		std::cout << "4) Play eye-spy" << std::endl;
		std::cout << "5) Exit" << std::endl;
		std::cout << "Please enter Selection: ";
		std::cin >> option;
		std::cout << std::endl;

		switch (option)
		{
			case 1:
				system("cls"); show_stats(); system("Pause"); system("cls");
				break;
			case 2:
				feed_pet(hunger); system("cls");
				break;
			case 3:
				put_to_bed(tiredness); system("cls");
				break;
			case 4:
				system("cls"); eye_spy(); system("cls");
				break;
			case 5:
				exit(0);
				break; 
		}
	}
}