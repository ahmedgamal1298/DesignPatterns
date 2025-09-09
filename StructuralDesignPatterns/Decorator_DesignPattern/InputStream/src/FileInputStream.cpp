#include "../inc/FileInputStream.h"


FileInputStream::FileInputStream(const string& FileName) {

	m_Reader.open(FileName);
	if (!m_Reader.is_open())
	{
		throw std::runtime_error("Couldn't open the File\n");
	}
}
void FileInputStream::Read(string& text) {
	if (m_Reader.is_open())
	{
		text.clear();
		std::getline(m_Reader, text);
		
	
	}


}
void FileInputStream::Close() {

	if (m_Reader.is_open())
	{
		m_Reader.close();


	}

}
