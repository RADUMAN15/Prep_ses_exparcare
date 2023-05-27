#pragma once
#include "Masina.h"
class Toyota : public Masina {

private:
	string color;
public:
	Toyota(string color) : color(color) {};
	string GetColor() {
		return color;
	}
	string GetName() {
		return "Toyota";
	}
};
