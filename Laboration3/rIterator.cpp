#include <iostream>
#include "String.h"

rIterator::rIterator(char* string) {
	begin = currentposition = string;
}

rIterator::rIterator(const rIterator& ptrin) {
	*this = ptrin;
}

rIterator::~rIterator() {

}

rIterator rIterator::operator++() {
	return --currentposition;
}

rIterator rIterator::operator++(const int i) {
	rIterator tmp = currentposition;
	--currentposition;
	return tmp;
}

char& rIterator::operator*() {
	return *currentposition;
}

rIterator rIterator::operator+(int i) {
	return rIterator(currentposition - i);
}

char & rIterator::operator[](int i)
{
	return currentposition[i];
}


bool rIterator::operator==(rIterator& pin) {
	return currentposition == pin.currentposition;
}

bool rIterator::operator!=(rIterator& pin) {
	return currentposition != pin.currentposition;
}

rIterator& rIterator::operator=(char* ptr) {
	currentposition = ptr;
	return *this;
}
