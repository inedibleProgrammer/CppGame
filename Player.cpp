#include "Player.h"

Player::Player(int x, int y, char symbol)
	: m_x(x)
	, m_y(y)
	, m_symbol(symbol)
{

}

void Player::Update(int x, int y)
{
	m_x = x;
	m_y = y;
}