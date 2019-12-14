#include "Screen.h"


Screen::Screen()
{
	m_buffer.push_back("*******************************************************************************************************");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*                                                                                                     *");
	m_buffer.push_back("*******************************************************************************************************");
}


void Screen::Write()
{
	for (std::string s : m_buffer)
	{
		printf("%s\n", s.c_str());
	}
}