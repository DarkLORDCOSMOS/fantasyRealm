#include "pch.h"
#include "item.cpp"
#include <string>

using namespace std;

class weapon : item {
public:
	wstring name;
	weapon() {
		this->name = L"Dirty Socks";
	}
	weapon(wstring name) {
		this->name = name;
	}

};

// actions - enter, exit, look, menu, quit, 