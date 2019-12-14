#pragma once

class IPositionable
{
public:
	// virtual ~IPositionable() = 0;
	virtual void Update(int x, int y) = 0;
};