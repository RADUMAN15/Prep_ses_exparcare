#pragma once
#include "Masina.h"
class FerrariRosu : public Masina {

public:
	FerrariRosu() {};
	string GetColor() {
		return "rosu";
	}
	string GetName() {
		return "Ferrari";
	}
};
