#ifndef STRING_rIterator_H
#define STRING_rIterator_H

#pragma once
#include "String.h"

class rIterator {
public:
	typedef char value_type;
private:
	value_type* currentposition = nullptr;
	value_type* begin = nullptr;
public:
	typedef rIterator iterator;
	rIterator() {};
	rIterator(char* string);
	rIterator(const rIterator& ptrin);
	~rIterator();
	rIterator operator++();
	rIterator operator++(const int i);
	value_type& operator*();
	bool operator!=(rIterator& pin);
	bool operator==(rIterator& pin);
	rIterator operator+(int i);
	char& operator[](int i);
	bool hasNext();
	rIterator& operator=(char* it);
};

#endif //STRING_rIterator_H