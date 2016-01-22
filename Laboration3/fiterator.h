#ifndef STRING_fiterator_H
#define STRING_fiterator_H
#pragma once
#include "String.h"

class fiterator{
public:
	typedef char value_type;
private:
	value_type* currentposition = nullptr;
public:
	typedef fiterator iterator;
	fiterator() {};
	fiterator(char* string);
	fiterator(const fiterator& ptrin);
	~fiterator();
	fiterator operator++();
	fiterator operator++(const int i);
	value_type& operator*();
	bool operator!=(fiterator& pin);
	bool operator==(fiterator& pin);
	fiterator operator+(int i);
	char& operator[](int i);
	bool hasNext();
	fiterator& operator=(char* it);
};

#endif //STRING_fiterator_H
