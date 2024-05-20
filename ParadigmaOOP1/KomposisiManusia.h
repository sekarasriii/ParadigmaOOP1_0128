#pragma once
#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
using namespace std;

class Manusia {
public:
	string name;
	jantung varJantung;

	Manusia(string pName)
		:name(pName) {
		cout << name << "hidup\n";
	}
	~Manusia() {
		cout << name << "mati\n";
	}
};
#endif
