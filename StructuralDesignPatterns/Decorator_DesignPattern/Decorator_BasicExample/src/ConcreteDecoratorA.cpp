#include "../inc/ConcreteDecoratorA.h"

void ConcreteDecoratorA::Operation() {
	cout << "ConcreteDecoratorA Operation Invoked\n";
	component_->Operation();


}
