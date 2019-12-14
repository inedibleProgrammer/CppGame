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
	std::unique_ptr<Buffer_T> GetBuffer_2() { return std::unique_ptr<Buffer_T>(&m_buffer); }

public:
	void Write();

};