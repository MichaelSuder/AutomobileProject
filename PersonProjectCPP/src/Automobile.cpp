#include <iostream>
#include "Automobile.h"

Automobile::Automobile() {
	make = "null";
	model = "null";
	color = "null";
	price = 0;
	weight = 0;
	mpg = 0;
}

Automobile::Automobile(const char* makeIn, const char* modelIn, const char* colorIn, float priceIn, 
					   float weightIn, float mpgIn) {
	make = makeIn;
	model = modelIn;
	color = colorIn;
	price = priceIn;
	weight = weightIn;
	mpg = mpgIn;
}

void Automobile::Print() {
	std::cout << "Make/Model: " << make << ", " << model << ", MPG: " << mpg << ", Price: " << price << std::endl;
}