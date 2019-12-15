#include "Screen.h"


Screen::Screen()
{

}


void Screen::Write()
{
	for (std::string s : m_buffer)
	{
		printf("%s\n", s.c_str());
	}
}