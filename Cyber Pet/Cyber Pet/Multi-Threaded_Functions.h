#pragma once

void depreciate_hunger(int& hunger)
{
	std::thread Hunger_thread = std::thread([&hunger]()
		{
			while (true)
			{
				if (hunger != 0)
				{
					// depreciate the hunger value and sleep for 5 minutes 
					hunger--;
					Sleep(300000);
				}
			}
		});
	Hunger_thread.detach();
}

void depreciate_sleep(int& tiredness)// this will be threaded as to run constantly and simultaniously running along side the rest of the program in the main function
{
	std::thread Sleep_thread = std::thread([&tiredness]()
		{
			while (true)
			{
				if (tiredness != 0)
				{
					// depreciate sleep every 5 minutes 
					tiredness--;
					Sleep(300000);
				}
			}
		});
	Sleep_thread.detach();
}

void mood_check(std::string& mood)// this will be threaded as to run constantly and simultaniously running along side the rest of the program in the main function
{
	std::thread Mood_thread = std::thread([&mood]()
		{
			while (true)
			{
				// add the sleep and hunger together and depending on the value will dictate the mood of the creature 
				int temp_mood = hunger + tiredness;

				if (temp_mood == 0)
				{
					mood = "Dead";
				}
				else if (temp_mood >= 0 && temp_mood <= 2)
				{
					mood = "Sad";
				}
				else if (temp_mood > 2 && temp_mood <= 4)
				{
					mood = "Unhappy";
				}
				else if (temp_mood > 4 && temp_mood <= 6)
				{
					mood = "Meh";
				}
				else if (temp_mood > 6 && temp_mood <= 8)
				{
					mood = "Contempt";
				}
				else if (temp_mood > 8 && temp_mood <= 10)
				{
					mood = "Happy";
				}
			}
		});
	Mood_thread.detach();
}