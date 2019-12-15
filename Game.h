#pragma once

#include "FileManager.h"
#include "MapController.h"
#include "Player.h"
#include "Screen.h"
#include "User.h"


class Game
{
public:
	enum class GameStates
	{
		MainMenu,
		LoadWorldMap,
		Running,
		End,
	};
private:
	FileManager    m_fileManager;
	GameStates     m_gameState;
	MapController  m_mapController;
	Player         m_player;
	Screen         m_screen;
	User           m_user;

public:
	Game();

public:
	void Start();
	void MainMenuControl();
	void LoadWorldMapControl();
	void GameRunningControl();
	void Logic();

	void PanScreen();
};