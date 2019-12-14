#pragma once

#include <conio.h> // for _getch()
#include <thread>

class User
{
public:
	static constexpr char nullCharacter = 0x0;

private:
	char m_input;
	std::thread m_userInputThread;

public:
	User();

public:
	char GetUserInput() const { return m_input; }

public:
	void ResetInput();

public:
	static void AcquireKeyboardInput(char & userInput);
};