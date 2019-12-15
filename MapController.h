#pragma once

#include "IPositionable.h"

#include "Screen.h"

class MapController
{
public:
	using Buffer_T = std::vector<std::string>;

private:
	Buffer_T m_buffer;

public:
	MapController();

public:
	Buffer_T* GetBuffer() { return &m_buffer; }

public:
	void ClearPosition(Screen::Buffer_T* buffer, IPositionable & p);
	void SetPosition(Screen::Buffer_T* buffer, IPositionable& p);
};