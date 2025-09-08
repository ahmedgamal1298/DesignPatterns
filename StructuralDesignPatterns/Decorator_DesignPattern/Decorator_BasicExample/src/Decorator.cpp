#include "../inc/Decorator.h"

Decorator::Decorator(std::unique_ptr<Component>ptr) :component_(std::move(ptr)){}