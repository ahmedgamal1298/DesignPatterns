#include "../inc/ConcreteDecoratorB.h"



void ConcreteDecoratorB::Operation() {
	cout << "ConcreteDecoratorB Operation Invoked\n";
	component_->Operation();


}