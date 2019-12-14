#pragma once

#include "Player.h"
#include "Screen.h"
#include "User.h"


class Game
{
	bool m_finished;
	Player m_player;
	Screen m_screen;
	User   m_user;

public:
	Game();

public:
	void Start();
	void HandleUserInput();
	void Logic();

public:
};