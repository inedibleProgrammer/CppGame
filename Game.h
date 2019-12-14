#pragma once

#include "MapController.h"
#include "Player.h"
#include "Screen.h"
#include "User.h"


class Game
{
	bool           m_finished;
	MapController  m_mapController;
	Player         m_player;
	Screen         m_screen;
	User           m_user;

public:
	Game();

public:
	void Start();
	void Logic();

public:
};