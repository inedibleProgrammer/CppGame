#pragma once

#include "IPositionable.h"

class Player : public IPositionable
{
private:
	int m_x;
	int m_y;
	char m_symbol;
public:
	Player(int x, int y, char symbol);
	~Player() = default;
public: // Accessors:
	int GetX() const { return m_x; }
	void SetX(int x) { m_x = x; }

	int GetY() const { return m_y; }
	void SetY(int y) { m_x = y; }

	int GetSymbol() const { return m_symbol; }
	void SetSymbol(char symbol) { m_symbol = symbol; }

public:
	void Update(int x, int y) override;
};