#include <iostream>
#include "Game.h"

int main()
{
	printf("Beginning of Program...\n\n\n");

	Game game{};
	game.Start();

	// char testChar = 0x0;

	// printf("%c", testChar);

	char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
	char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };

	std::vector<char> test;
	std::string tester = "\033[38;5;40m";

	// std::cout << blue << "This text should be blue" << normal << std::endl;

	printf("%s", tester.c_str());

	printf("\n\n\nEnd of Program");

	tester = "\033[38;5;7m";
	printf("%s", tester.c_str());
	return 0;
}