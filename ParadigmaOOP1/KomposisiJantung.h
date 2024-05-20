#pragma once
#ifndef JANTUNG_H
#define JANTUNG_h

#include <iostream>
using namespace std;

class jantung {
public:
	jantung() {
		cout << "jantung dihidupkan\n";
	}
		~jantung() {
			cout << "jantung dimatikan\n";
	}
};
#endif
