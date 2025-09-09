#include "../inc/BufferedOutputStreamDecorator.h"
#include <iostream>
using std::cout;

void BufferedOutputStreamDecorator::Write(const std::string& text) {
	std::cout << "Buffered Write\n";
	stream->Write(text);
}

void BufferedOutputStreamDecorator::Close() {
	stream->Close();
}