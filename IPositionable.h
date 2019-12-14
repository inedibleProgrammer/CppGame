#pragma once

class IPositionable
{
public:
	// virtual ~IPositionable() = 0;
	virtual void SetX(int x) = 0;
	virtual int GetX() const = 0;

	virtual void SetY(int y) = 0;
	virtual int GetY() const = 0;

	virtual char GetSymbol() const = 0;
	virtual void SetSymbol(char symbol) = 0;

	virtual void MoveUp() = 0;
	virtual void MoveDown() = 0;
	virtual void MoveLeft() = 0;
	virtual void MoveRight() = 0;
};