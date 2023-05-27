#pragma once
#include "Masina.h"
class Dacia: public Masina {

private:
	string color;
public:
	Dacia(string color) : color(color) {};
	string GetColor() {
		return color;
	}
	string GetName() {
		return "Dacia";
	}
};