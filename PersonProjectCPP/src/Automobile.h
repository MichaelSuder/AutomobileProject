#pragma once
#ifndef AUTO_H
#define AUTO_H

class Automobile {
public:
	const char* make = "";
	const char* model = "";
	const char* color = "";
	float price = 0;
	float weight = 0;
	float mpg = 0;

	Automobile();
	Automobile(const char* makeIn, const char* modelIn, const char* colorIn, float priceIn, float weightIn, float mpgIn);
	virtual void Print();

	const char* getMake() { return make; }
	const char* getModel() { return model; }
	const char* getColor() { return color; }
	float getPrice() { return price; }
	float getWeight() { return weight; }
	float getMpg() { return mpg; }

};

#endif
