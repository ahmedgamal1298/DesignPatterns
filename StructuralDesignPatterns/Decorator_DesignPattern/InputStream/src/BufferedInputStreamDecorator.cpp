#include "../inc/BufferedInputStreamDecorator.h"
#include "../inc/FileInputStream.h"
#include <iostream>
using std::cout;
void BufferedInputStreamDecorator::Read(string& text) {
	cout << "Reading with Buffering\n";
	m_stream->Read(text);
	


}
void BufferedInputStreamDecorator::Close() {
	m_stream->Close();

}
