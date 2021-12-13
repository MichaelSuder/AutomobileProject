#pragma once
#ifndef ELECTRIC_H
#define ELECTRIC_H
#include "Automobile.h"


class Electric : public Automobile {
public:
	float chargeTime = 0;

	Electric(const char* makeIn, const char* ModelIn, const char* colorIn, float priceIn, float weightIn,
		float mpgIn, float chargeTime);
	Electric();

	void Print() override;
};

#endif
