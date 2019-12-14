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

void Game::Logic()
{
	char userInput = m_user.GetUserInput();
	Screen::Buffer_T* buffer = m_screen.GetBuffer();

	switch (userInput)
	{
	case 'w':
		m_mapController.ClearPosition(buffer, m_player);
		m_player.MoveUp();
		m_mapController.SetPosition(buffer, m_player);
		m_user.ResetInput();
		break;
	case 'a':
		m_mapController.ClearPosition(buffer, m_player);
		m_player.MoveLeft();
		m_mapController.SetPosition(buffer, m_player);
		m_user.ResetInput();
		break;
	case 's':
		m_mapController.ClearPosition(buffer, m_player);
		m_player.MoveDown();
		m_mapController.SetPosition(buffer, m_player);
		m_user.ResetInput();
		break;
	case 'd':
		m_mapController.ClearPosition(buffer, m_player);
		m_player.MoveRight();
		m_mapController.SetPosition(buffer, m_player);
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