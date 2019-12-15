#pragma once

// #include <conio.h> // Colors with _cprintf()

#include <memory>
#include <string>
#include <vector>

class Screen
{
public:
	using Buffer_T = std::vector<std::string>;
private:
	Buffer_T m_buffer;
public:
	Screen();

public:
	Buffer_T* GetBuffer() { return &m_buffer; }
	

public:
	void Write();

};