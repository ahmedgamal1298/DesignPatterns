#include "../inc/OutputSreamDecorator.h"

OutputSreamDecorator::OutputSreamDecorator(unique_ptr<OutputStream>ptr) :stream(std::move(ptr)){

}
