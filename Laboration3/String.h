#ifndef STRING_STRING_H
#define STRING_STRING_H

#pragma once
#include "fiterator.h"
#include "rIterator.h"
#include <iostream> 

class String {
private:
	int capac = 0, siz = 0;
	char* strPtr = nullptr;
public:
	typedef fiterator iterator;
	typedef rIterator reverse_iterator;
	String();
	~String();
	String(const String& rhs);
	//String(String&& rhs);
	String(const char* cstr);
	String& operator=(const String& rhs);
	//String& operator=(String&& rhs);
	String& operator=(const char* cstr);
	String& operator=(const char ch);
	char& at(const int i);
	//const char& at(const int i)  const;
	char& operator[](const int i);
	//const char& operator[](const int i) const;
	const char* data() const;
	int size() const;
	void reserve(const int ressize);
	int capacity() const;
	void shrink_to_fit();
	void push_back(const char c);
	void resize(const int n);
	String& operator+=(const String& rhs);
	String& operator+=(const char* cstr);
	const int sLengthInclNull(const char* str) const;
	const String String::operator+(const String &rhs);

	friend std::ostream & operator<<(std::ostream & out, const String & str) {
		return std::cout << str.data();
	}

	//kollar likvärdighet
	friend bool operator==(const String& lhs, const String& rhs) {
		if (lhs.size() == rhs.size()) {
			for (int i = 0; i < lhs.size(); i++) {
				if (lhs.strPtr[i] != rhs.strPtr[i])
					return false;
			}
			return true;
		}
		return false;
	}

	iterator begin();
	iterator end();
	reverse_iterator rbegin();
	reverse_iterator rend();
};

#endif //STRING_STRING_H