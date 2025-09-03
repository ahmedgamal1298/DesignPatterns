#include "../inc/FacadseConsole.h"
#include <stdexcept>
WORD FacadeConsole::GetColor(Color color) {
	switch(color) {
		case Color::RED:
			return FOREGROUND_RED;
		case Color::GREEN:
			return FOREGROUND_GREEN;

		case Color::BLUE:
			return FOREGROUND_BLUE;
		default:
			return FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	
	}

}
FacadeConsole FacadeConsole::m_instance;
FacadeConsole::FacadeConsole() {
	m_std = GetStdHandle(STD_OUTPUT_HANDLE);
}

void FacadeConsole::Write(const std::string& text, Color color) {
	CONSOLE_SCREEN_BUFFER_INFO WriteInfo{};
	if (!GetConsoleScreenBufferInfo(m_std, &WriteInfo))
	{
		throw std::runtime_error{"Error While Retrieving Console Information"};
	}

	SetConsoleTextAttribute(m_std,GetColor(color));

	DWORD DataWritten{};
	WriteConsoleA(m_std, text.c_str(), text.length(), &DataWritten, nullptr);

	SetConsoleTextAttribute(m_std, WriteInfo.wAttributes);


}
void FacadeConsole::WriteLine(const std::string& text, Color color) {

	Write(text + '\n', color);
}