#include "../inc/InputStreamDecorator.h"

InputStreamDecorator::InputStreamDecorator(unique_ptr<InputStream>ptr) :m_stream(std::move(ptr)){


}