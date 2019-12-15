#include "Game.h"

Game::Game()
	: m_fileManager()
	, m_gameState(GameStates::MainMenu)
	, m_mapController()
	, m_player(0, 1, '>')
	, m_screen()
	, m_user()
{
	Screen::Buffer_T* buffer = m_screen.GetBuffer();
	m_fileManager.LoadScreen(buffer, "MainMenu.txt");
}

void Game::Start()
{
	while (m_gameState != GameStates::End)
	{		
		switch (m_gameState)
		{
		case GameStates::MainMenu:
			MainMenuControl();
			break;
		case GameStates::LoadWorldMap:
			LoadWorldMapControl();
			break;
		case GameStates::Running:
			GameRunningControl();
			break;
		case GameStates::End:
			break;
		default: // logic error
			break;
		}

		m_screen.Write();
		std::this_thread::sleep_for(std::chrono::milliseconds{ 10 });
		system("cls");
	}
}

void Game::MainMenuControl()
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
	case 's':
		m_mapController.ClearPosition(buffer, m_player);
		m_player.MoveDown();
		m_mapController.SetPosition(buffer, m_player);
		m_user.ResetInput();
		break;
	case '\r': // press enter
		m_gameState = GameStates::LoadWorldMap;
		break;
	case 't':
		m_gameState = GameStates::End;
		break;
	default:
		m_user.ResetInput();
		break;
	}
}

void Game::LoadWorldMapControl()
{
	Screen::Buffer_T* buffer = m_mapController.GetBuffer();
	m_fileManager.LoadScreen(buffer, "WorldMap.txt");

	m_player.SetX(50);
	m_player.SetY(15);
	m_player.SetSymbol('@');

	m_gameState = GameStates::Running;
}

void Game::GameRunningControl()
{
	char userInput = m_user.GetUserInput();
	MapController::Buffer_T* buffer = m_mapController.GetBuffer();

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
		m_gameState = GameStates::End;
		break;
	default:
		m_user.ResetInput();
		break;
	}

	PanScreen();
}

void Game::Logic()
{

}

void Game::PanScreen()
{
	std::string s;
	MapController::Buffer_T* mapBuffer = m_mapController.GetBuffer();
	Screen::Buffer_T* screenBuffer = m_screen.GetBuffer();
	int verticalBound;
	int leftBound;
	static int rightBound;

	screenBuffer->clear();

	for (int i = m_player.GetY() - 8; i < m_player.GetY() + 9; i++)
	{
		if (i <= 0)
		{
			i = 0;
		}
		if (i > 30)
		{
			continue;
		}

		leftBound = m_player.GetX() - 20;
		if (leftBound <= 0)
		{
			leftBound = 0;
		}

		rightBound = 40;
		if (rightBound + m_player.GetX() > 200)
		{
			rightBound = rightBound - 1;
		}
		s = mapBuffer->at(i).substr(leftBound, rightBound);
		screenBuffer->push_back(s);
	}
}