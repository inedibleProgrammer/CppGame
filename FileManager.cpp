#include "FileManager.h"

FileManager::FileManager()
{

}

void FileManager::LoadScreen(Screen::Buffer_T* buffer, std::string fileName)
{
	m_mapFile.open(fileName);
	std::string s;

	buffer->clear();

	if (!m_mapFile.is_open())
	{
		// Failure
	}
	else
	{
		while (!m_mapFile.eof())
		{
			std::getline(m_mapFile, s);
			buffer->push_back(s);
		}
	}

	m_mapFile.close();
}

void FileManager::LoadMap(MapController::Buffer_T* buffer, std::string fileName)
{
	m_mapFile.open(fileName);
	std::string s;

	buffer->clear();

	if (!m_mapFile.is_open())
	{
		// Failure
	}
	else
	{
		while (!m_mapFile.eof())
		{
			std::getline(m_mapFile, s);
			buffer->push_back(s);
		}
	}

	m_mapFile.close();
}