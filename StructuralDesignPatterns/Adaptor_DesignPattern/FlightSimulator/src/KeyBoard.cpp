#include "../inc/KeyBoard.h"

std::default_random_engine KeyBoard::MyRand{ 12345 };

bool KeyBoard::SimulateInput() {
	//means what is the probability for the random generator to return true or false 
	std::bernoulli_distribution dist{ 0.5 };
	return dist(KeyBoard::MyRand);
}
bool KeyBoard::Up() {
	return SimulateInput();

}

bool KeyBoard::Down() {
	return SimulateInput();

}

bool KeyBoard::Left() {
	return SimulateInput();

}
bool KeyBoard::Right() {
	return SimulateInput();

}
