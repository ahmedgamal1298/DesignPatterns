// FunctionalDecorator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::runtime_error;
int Add(int a, int b)
{
    return a + b;
}

int Subtract(int a, int b)
{
    return a - b;
}

int Divide(int a, int b)
{
    return a / b;
}

int Multiply(int a, int b)
{
    return a * b;
}

int Square(int a)
{
    return a * a;
}
template<typename Function>
auto Print_FuntionDecorator(Function Func)
{
    return [Func](auto&&...args) {
            cout << "FunctionalDecorator is called\n";
            return Func(args...);
        };
}

template<typename Function>
auto SafeDivision_FuntionalDecorator(Function Func) {
        
    return [Func](auto a, auto b) {

            if (!b)
            {
                throw runtime_error("Exeption Thrown : Division by zero");
                return -1;
            }
			return Func(a, b);
        };

}

int main()
{
    auto res = Print_FuntionDecorator(Add);
	cout<< res(2,3)<<"\n";
    try {
        auto safeDivide = SafeDivision_FuntionalDecorator(Divide);
        cout << safeDivide(4, 2) << "\n";
        cout << safeDivide(4, 0) << "\n";
    }
    catch (const runtime_error& e)
    {
        cout << e.what() << "\n";
	}
	return 0;
}


