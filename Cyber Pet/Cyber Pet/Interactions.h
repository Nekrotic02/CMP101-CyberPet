#pragma once

void feed_pet(int& hunger)
{
	if (hunger != 5)
	{
		hunger++;
	}
}
void put_to_bed(int& tiredness)
{
	if (tiredness != 5)
	{
		tiredness++;
	}
}
void eye_spy() // this will be threaded as to run constantly and simultaniously running along side the rest of the program in the main function
{
	int roll;
	roll = rand() % 5 + 1;

	switch (roll)
	{
	case 1: Desk(); break; 
	case 2: Chair(); break; 
	case 3: Book(); break;
	case 4: Phone(); break; 
	case 5: Laptop(); break;
	}

}
void display_mood()
{
	if (mood == "Happy")
	{
		std::cout << "                     ,                        " << std::endl;
		std::cout << "                ,.  | \                       " << std::endl;
		std::cout << "               |: \ ; :\                      " << std::endl;
		std::cout << "               :' ;\| ::\                     " << std::endl;
		std::cout << "                \ : | `::\                    " << std::endl;
		std::cout << "                _)  |   `:`.                  " << std::endl;
		std::cout << "              ,' , `.    ;: ;                 " << std::endl;
		std::cout << "            ,' ;:  ; '  ,:: |_                " << std::endl;
		std::cout << "           /,   ` .    ;::: |:`-.__           " << std::endl;
		std::cout << "        _,' _o\  ,::.`:' ;  ;   . '           " << std::endl;
		std::cout << "   _,-'           `:.          ;""\,          " << std::endl;
		std::cout << " ,-'                     ,:         `-;,      " << std::endl;
		std::cout << " \,                       ;:           ;--._  " << std::endl;
		std::cout << "  `.______,-,----._     ,' ;:        ,/ ,  ,` " << std::endl;
		std::cout << "         / /,-';'  \     ; `:      ,'/,::.::: " << std::endl;
		std::cout << "       ,',;-'-'_,--;    ;   :.   ,',',;:::::: " << std::endl;
		std::cout << "      ( /___,-'     `.     ;::,,'o/  ,::::::: " << std::endl;
		std::cout << "       `'             )    ;:,'o /  ;  - -::: " << std::endl;
		std::cout << "                      \__ _,'o ,'         ,:: " << std::endl;
		std::cout << "                         ) `--'       ,..:::: " << std::endl;
		std::cout << "      -hrr-              ; `.        ,::::::: " << std::endl;
		std::cout << "                          ;  ``::.    ::::::: " << std::endl;

	}
	else if (mood == "Contempt")
	{
		std::cout << "                             ;\               " << std::endl;
		std::cout << "                            |' \              " << std::endl;
		std::cout << "         _                  ; : ;             " << std::endl;
		std::cout << "        / `-.              /: : |             " << std::endl;
		std::cout << "       |  ,-.`-.          ,': : |             " << std::endl;
		std::cout << "       \  :  `. `.       ,'-. : |             " << std::endl;
		std::cout << "        \ ;    ;  `-.__,'    `-.|             " << std::endl;
		std::cout << "         \ ;   ;  :::  ,::'`:.  `.            " << std::endl;
		std::cout << "          \ `-. :  `    :.    `.  \           " << std::endl;
		std::cout << "           \   \    ,   ;   ,:    (\          " << std::endl;
		std::cout << "            \   :., :.    ,'o)): ` `-.        " << std::endl;
		std::cout << "           ,/,' ;' ,::  `.`---'   `.  `-._    " << std::endl;
		std::cout << "         ,/  :  ; '       `;'          ,--`.  " << std::endl;
		std::cout << "        ;/   :; ;             ,:'     (   ,:) " << std::endl;
		std::cout << "          ,.,:.    ; ,:.,  ,-._ `.     \  '/  " << std::endl;
		std::cout << "          '::'     `:'`  ,'(  \`._____.-' '   " << std::endl;
		std::cout << "             ;,   ;  `.  `. `._`-.  \\        " << std::endl;
		std::cout << "             ;:.  ;:       `-._`-.\  \`.      " << std::endl;
		std::cout << "              '`:. :        |' `. `\  ) \     " << std::endl;
		std::cout << "      -hrr-      ` ;:       |    `--\__,'     " << std::endl;
		std::cout << "                   '`      ,'                 " << std::endl;
		std::cout << "                        ,-'                   " << std::endl;

	}
	else if (mood == "Meh")
	{
		std::cout << "           ____,'`-,                                   " << std::endl;
		std::cout << "      _,--'   ,/::.;                                   " << std::endl;
		std::cout << "   ,-'       ,/::,' `---.___        ___,_              " << std::endl;
		std::cout << "   |       ,:';:/        ;' `; `--./ ,-^.;--.          " << std::endl;
		std::cout << "   |:     ,:';,'         '         `.   ;`   `-.       " << std::endl;
		std::cout << "    \:.,:::/;/ -:.                   `  | `     `-.    " << std::endl;
		std::cout << "     \:::,'//__.;  ,;  ,  ,  :.`-.   :. |  ;       :.  " << std::endl;
		std::cout << "      \,',';/O)^. :'  ;  :   '__` `  :::`.       .:' ) " << std::endl;
		std::cout << "      |,'  |\__,: ;      ;  '/O)`.   :::`;       ' ,'  " << std::endl;
		std::cout << "           |`--''            \__,' , ::::(       ,'    " << std::endl;
		std::cout << "           `    ,            `--' ,: :::,'\   ,-'      " << std::endl;
		std::cout << "            | ,;         ,    ,::'  ,:::   |,'         " << std::endl;
		std::cout << "            |,:        .(          ,:::|   `           " << std::endl;
		std::cout << "            ::'_   _   ::         ,::/:|               " << std::endl;
		std::cout << "           ,',' `-' \   `.      ,:::/,:|               " << std::endl;
		std::cout << "          | : _  _   |   '     ,::,' :::               " << std::endl;
		std::cout << "          | \ O`'O  ,',   ,    :,'   ;::               " << std::endl;
		std::cout << "          \ `-'`--',:' ,' , ,,'      ::                " << std::endl;
		std::cout << "            ``:.:.__   ',-','        ::'               " << std::endl;
		std::cout << "    -hrr-      `--.__, ,::.         ::'                " << std::endl;
		std::cout << "                   |:  ::::.       ::'                 " << std::endl;
		std::cout << "                   |:  ::::::    ,::'                  " << std::endl;
	}
	else if (mood == "Unhappy")
	{
		std::cout << "       ,.                                   " << std::endl;
		std::cout << "      /  `-._                               " << std::endl;
		std::cout << "     /       `.     ___            __       " << std::endl;
		std::cout << "   ,'       _/ ,---'   `-.       ,'  `.     " << std::endl;
		std::cout << "  /   /`---' \/           `--.  /      \    " << std::endl;
		std::cout << " /   |       /             _  `/  -.    `.  " << std::endl;
		std::cout << " \   |              ,.    /O\  \    \     \ " << std::endl;
		std::cout << "  \   `.           /O \  '   `. `. / \    | " << std::endl;
		std::cout << "   `._  `-.       /   ,   .    ,  `.  \  ,' " << std::endl;
		std::cout << "      `-.        .   /     `--'     \  \/   " << std::endl;
		std::cout << "         \        `-',d8o8b.        /       " << std::endl;
		std::cout << "          \          dP'88`8b      /        " << std::endl;
		std::cout << "           \  ,'`.     `YP'       |         " << std::endl;
		std::cout << "    -hrr-   \/ .        |       | |         " << std::endl;
		std::cout << "            /  |\       :       |/\         " << std::endl;
		std::cout << "           /   | `.   ,:::     / \ \        " << std::endl;
		std::cout << "          ,\       `-'`""'`.--'  )o )       " << std::endl;
		std::cout << "         (o `.__,               / o/        " << std::endl;
		std::cout << "          \ o   \_           ,-'o /         " << std::endl;
		std::cout << "           \  o  o`-----.__,' o ,'          " << std::endl;
		std::cout << "            `----. o  o  o  o ,'            " << std::endl;
		std::cout << "                  `----------'              " << std::endl;

	}
	else if (mood == "Sad")
	{
		std::cout << "                              ,.  ,                     " << std::endl;
		std::cout << "                          .-. \ \| \                    " << std::endl;
		std::cout << "             ,---._    _,-.> `.\ \ (                    " << std::endl;
		std::cout << "            (__,'  `   `>-         -\                   " << std::endl;
		std::cout << "                     ,-'             `-.                " << std::endl;
		std::cout << "         ,-'       ,  ,    .       .    `.              " << std::endl;
		std::cout << "       ,'\       ,' ,-'    `-.      ;    :`.            " << std::endl;
		std::cout << "      (__;     ,',,'      ,   `     : `. :  \           " << std::endl;
		std::cout << "             ,' |  _,'   /_    `    :  ; :   \          " << std::endl;
		std::cout << "            /  ,',' |   /  \        '     ;   \         " << std::endl;
		std::cout << "           /   | |(o|  /  (o)          |  |    ;        " << std::endl;
		std::cout << "          /     ___-^-^-----.          |  |    |        " << std::endl;
		std::cout << "         (   ,---. `-.           :.    |       :        " << std::endl;
		std::cout << "          ;,'      )  `          :..   |        |       " << std::endl;
		std::cout << "          :\      /              :.    |        ;       " << std::endl;
		std::cout << "          :.`-.__,              ,:`    |        |       " << std::endl;
		std::cout << "          ;`.    .             ':'      \      ,        " << std::endl;
		std::cout << "         /   `-.__\           '      ,   \     \.       " << std::endl;
		std::cout << "        (   ,'    \`--,-----.       /     \     \`.     " << std::endl;
		std::cout << "         `-'       \,' ,'   /    / |       \     | `.   " << std::endl;
		std::cout << "      -hrr-        /  '   ,'    /-.|        `.   ;   `. " << std::endl;
		std::cout << "                  (      /`----'   |          `--'     `" << std::endl;
		std::cout << "                   `.__,'                               " << std::endl;

	}
	else if (mood == "Dead")
	{
		std::cout << "888       888        d8888  .d8888b. 88888888888 8888888888 8888888b.  " << std::endl;
		std::cout << "888   o   888       d88888 d88P  Y88b    888     888        888   Y88b " << std::endl;
		std::cout << "888  d8b  888      d88P888 Y88b.         888     888        888    888 " << std::endl;
		std::cout << "888 d888b 888     d88P 888   Y888b.      888     8888888    888    888 " << std::endl;
		std::cout << "888d88888b888    d88P  888      Y88b.    888     888        888    888 " << std::endl;
		std::cout << "88888P Y88888   d88P   888        888    888     888        888    888 " << std::endl;
		std::cout << "8888P   Y8888  d8888888888 Y88b  d88P    888     888        888  .d88P " << std::endl;
		std::cout << "888P     Y888 d88P     888   Y8888P      888     8888888888 8888888P   " << std::endl;

	}
}
void show_stats()
{
	std::cout << std::endl;
	std::cout << "Hunger: " << hunger << std::endl;
	std::cout << "Tiredness: " << tiredness << std::endl;
	std::cout << "Mood: " << mood << std::endl;
	display_mood();
	std::cout << std::endl;
}