#include "Game.h"

Game::Game()
	: m_finished(false)
	, m_player(5, 5, '@')
	, m_screen()
{

}

void Game::Start()
{
	while (!m_finished)
	{
		// HandleUserInput();
		
		Logic();
		m_screen.Write();
		std::this_thread::sleep_for(std::chrono::milliseconds{ 10 });
		system("cls");
		
	}
}

void Game::HandleUserInput()
{
	char userInput = m_user.GetUserInput();
	switch (userInput)
	{
	case 'w':
		m_user.ResetInput();
		break;
	case 'a':
		m_user.ResetInput();
		break;
	case 's':
		m_user.ResetInput();
		break;
	case 'd':
		m_user.ResetInput();
		break;
	case 't':
		m_finished = true;
		break;
	default:
		m_user.ResetInput();
		break;
	}
}

void Game::Logic()
{
	// Screen::Buffer_T buffer = m_screen.GetBuffer();
	char userInput = m_user.GetUserInput();
	Screen::Buffer_T* buffer = m_screen.GetBuffer();

	switch (userInput)
	{
	case 'w':
		(*buffer)[m_player.GetY()][m_player.GetX()] = ' ';
		m_player.Update(m_player.GetX(), m_player.GetY() - 1);
		(*buffer)[m_player.GetY()][m_player.GetX()] = m_player.GetSymbol();
		m_user.ResetInput();
		break;
	case 'a':
		(*buffer)[m_player.GetY()][m_player.GetX()] = ' ';
		m_player.Update(m_player.GetX() - 1, m_player.GetY());
		(*buffer)[m_player.GetY()][m_player.GetX()] = m_player.GetSymbol();
		m_user.ResetInput();
		break;
	case 's':
		(*buffer)[m_player.GetY()][m_player.GetX()] = ' ';
		m_player.Update(m_player.GetX(), m_player.GetY() + 1);
		(*buffer)[m_player.GetY()][m_player.GetX()] = m_player.GetSymbol();
		m_user.ResetInput();
		break;
	case 'd':
		(*buffer)[m_player.GetY()][m_player.GetX()] = ' ';
		m_player.Update(m_player.GetX() + 1, m_player.GetY());
		(*buffer)[m_player.GetY()][m_player.GetX()] = m_player.GetSymbol();
		m_user.ResetInput();
		break;
	case 't':
		m_finished = true;
		break;
	default:
		m_user.ResetInput();
		break;
	}
}