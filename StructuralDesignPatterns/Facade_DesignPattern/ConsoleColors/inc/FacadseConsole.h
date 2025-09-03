#pragma once
#include<string>
#include <windows.h>

enum class Color { RED, GREEN,BLUE,WHITE };
class FacadeConsole
{
	/* inline - This keyword(available since C++17) allows the static member to be defined in the header file
	//  without causing multiple definition errors when the header is included in multiple source files */
	inline static HANDLE m_std;
	static FacadeConsole m_instance;
	FacadeConsole();
	
public:
	~FacadeConsole()=default;
	static void Write(const std::string& text, Color color = Color::WHITE);
	static void WriteLine(const std::string& text, Color color = Color::WHITE);
	static WORD GetColor(Color color);
	
};


