#include "User.h"

User::User()
	: m_input(nullCharacter)
	, m_userInputThread(AcquireKeyboardInput, std::ref(m_input))
{

}

void User::ResetInput()
{
	m_input = nullCharacter;
}

/* static */ void User::AcquireKeyboardInput(char & userInput)
{
	while (1)
	{
		userInput = _getch();
	}
}