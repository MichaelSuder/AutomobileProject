#include <iostream>
#include "Automobile.h"
#include "Electric.h"
#define Log(x) { std::cout << x << std::endl; }


int main() {
	Automobile a("Nissan", "Titan", "Black", 19000, 4000, 20);
	a.Print();

	Electric e("Tesla", "Model T", "Blue", 38000, 4000, 20, 1);
	e.Print();
	Log(e.getWeight());


	std::cin.get();
}