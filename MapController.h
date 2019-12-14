#pragma once

#include "IPositionable.h"

#include "Screen.h"

class MapController
{
private:

public:
	MapController();

public:


public:
	void ClearPosition(Screen::Buffer_T* buffer, IPositionable & p);
	void SetPosition(Screen::Buffer_T* buffer, IPositionable& p);
};