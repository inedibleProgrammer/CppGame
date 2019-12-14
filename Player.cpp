#include "Player.h"

Player::Player(int x, int y, char symbol)
	: m_x(x)
	, m_y(y)
	, m_symbol(symbol)
{

}

void Player::MoveUp()
{
	m_y = m_y - 1;
}

void Player::MoveDown()
{
	m_y = m_y + 1;
}

void Player::MoveLeft()
{
	m_x = m_x - 1;
}

void Player::MoveRight()
{
	m_x = m_x + 1;
}