#pragma once
#ifndef ANAK_H
#define ANAK_H

#include <iostream>
#include <string>
using namespace std;

class anak {
public:
	string nama;
	anak(string pNama) : nama(pNama) {
		cout << "Anak \"" << nama << "\" ada\n";
	}
	~anak() {
		cout << "Anak \"" << nama << "\" tidak ada\n";
	}
};
#endif
