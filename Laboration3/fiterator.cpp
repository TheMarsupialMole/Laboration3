#include <iostream>
#include "String.h"

//constructor that takes a char pointer
fiterator::fiterator(char* string) {
	currentposition = string;
}

//constructor that takes an iterator
fiterator::fiterator(const fiterator& ptrin) {
	*this = ptrin;
}

fiterator::~fiterator(){

}

//increase pointer by onePOST
fiterator fiterator::operator++(){
	return ++currentposition;
}

//increase pointer by one PRE
fiterator fiterator::operator++(const int i) {
	fiterator tmp = currentposition;
	++currentposition;
	return tmp;
}

//return the value that the pointer is at
char& fiterator::operator*() {
	return *currentposition;
}

//check equality
bool fiterator::operator==(fiterator& pin) {
	return currentposition == pin.currentposition;
}

//check for inequality
bool fiterator::operator!=(fiterator& pin) {
	return currentposition != pin.currentposition;
}

//ger ny iterators position by int(parameter) steps
fiterator fiterator::operator+(int i) {
	return fiterator(currentposition+i);
}

//places the iterator at int(parameter) steps in
char& fiterator::operator[](int i) {
	return currentposition[i];
}

//sets the "this" pointer equal to the parameter
fiterator& fiterator::operator=(char* ptr) {
	currentposition = ptr;
	return *this;
}
