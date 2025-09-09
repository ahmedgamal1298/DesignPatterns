#include "../inc/FileOutputStream.h"


FileOutputStream::FileOutputStream(const string& FileName ) {

	m_Writer.open(FileName);
	if (!m_Writer.is_open())
	{
		throw std::runtime_error("Couldn't open the File\n");
	}
}
void FileOutputStream::Write(const std::string& text) {

	if (m_Writer.is_open())
	{
	
		m_Writer << text;
	}

}
void FileOutputStream::Close() {

	if (m_Writer.is_open())
	{
		m_Writer.close();


	}

}
