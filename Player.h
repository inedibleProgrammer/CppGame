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
	int GetX() const override { return m_x; }
	void SetX(int x) override { m_x = x; }

	int GetY() const override { return m_y; }
	void SetY(int y) override { m_x = y; }

	char GetSymbol() const override { return m_symbol; }
	void SetSymbol(char symbol) override { m_symbol = symbol; }

public:
	void MoveUp() override;
	void MoveDown() override;
	void MoveLeft() override;
	void MoveRight() override;
};