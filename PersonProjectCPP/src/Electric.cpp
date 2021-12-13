#include <iostream>
#include "Electric.h"
#include "Automobile.h"

Electric::Electric() {
	make = "null";
	model = "null";
	color = "null";
	price = 0;
	weight = 0;
	mpg = 0;
	chargeTime = 0;
}


Electric::Electric(const char* makeIn, const char* modelIn, const char* colorIn, float priceIn, float weightIn,
	float mpgIn, float chargeTimeIn) {
	make = makeIn;
	model = modelIn;
	color = colorIn;
	price = priceIn;
	weight = weightIn;
	mpg = mpgIn;
	chargeTime = chargeTimeIn;

}


void Electric::Print() { 
	std::cout << "Make/Model: " << make << ", " << model << ", Charge time: " << chargeTime << "hr" << ", MPG: " << mpg << ", Price: " << price << std::endl;
}