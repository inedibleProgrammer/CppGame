#pragma once

#include "MapController.h"
#include "Screen.h"

#include <fstream>
#include <string>

class FileManager
{
private:
	std::ifstream m_mapFile;

public:
	FileManager();

public:
	// TODO: Merge these by making Buffer_T polymorphic
	void LoadScreen(Screen::Buffer_T* buffer, std::string fileName);
	void LoadMap(MapController::Buffer_T* buffer, std::string fileName);
};