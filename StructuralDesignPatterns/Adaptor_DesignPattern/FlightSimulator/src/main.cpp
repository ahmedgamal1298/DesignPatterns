#include <iostream>
#include <thread>
#include <chrono>
#include "../inc/Input.h"
#include "../inc/KeyBoard.h"
#include "../inc/AccelAdapter.h"
using namespace std;
void Game(Input*in) {

	for (int i = 0; i < 5; i++)
	{
		std::cout << "------------------" << std::endl;
		if (in->Up())
			std::cout << "Go Up" << std::endl;
		else if(in->Down())
			std::cout << "Go Down" << std::endl;
		else
			std::cout << "Plane is Leveling" << std::endl;
		if (in->Left())
			std::cout << "Go Left" << std::endl;
		else if (in->Right())
			std::cout << "Go Right" << std::endl;
		else
			std::cout << "Plane is Straight" << std::endl;
		std::cout << "------------------" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1s));
		
	}

}

int main() {
	//KeyBoard k;
	Input* k = new AccelAdapter();
	Game(k);

	return 0;
}