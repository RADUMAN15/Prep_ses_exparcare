#pragma once
#include "Masina.h"
#include <vector>
class Parcare
{
private:

	vector<Masina*> masini;
	int maxCapacity;
public:
	void Create(int maxCapacity) {

		masini.reserve(maxCapacity);
		this->maxCapacity = maxCapacity;
	}
	bool Add(Masina* toAdd) {
		
		if (maxCapacity > 1) {
			if (masini.size() > maxCapacity - 1)
			{
				return false;
			}
		}

		masini.push_back(toAdd);
		return true;
	}
	void RemoveByName(string name) {

		for(auto it = masini.begin(); it != masini.end(); it++)
			if ((*it)->GetName() == name)
			{
				delete(*it);
				masini.erase(it);
				masini.resize(masini.size() - 1);
				break;
			}
	}
	int GetCount() {
		return masini.size();
	}
	bool IsFull() {
		return(maxCapacity == masini.size());
	}
	void ShowAll() {
		cout << "SHOW-ALL: ";
		for (auto it = masini.begin(); it != masini.end(); it++)
			cout << (*it)->GetName() << "(" << (*it)->GetColor() << "), ";
		cout << "\n";
	}
	void ShowByColor(string color) {
		cout << "SHOW-COLOR "<<"("<<color<<"): ";
		for (auto it = masini.begin(); it != masini.end(); it++)
			if ((*it)->GetColor() == color)
			{

				cout << (*it)->GetName() << ", ";
			}
		cout << "\n";
	}

};

