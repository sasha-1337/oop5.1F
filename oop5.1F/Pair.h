#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <Windows.h>
#include "MyExeption.h"

using namespace std;

class Pair
{
private:
	int first, second;
public:
	Pair();
	Pair(int, int);
	Pair(const Pair&);
	~Pair();

	int GetFirst()const { return first; }
	int GetSecond()const { return second; }

	void SetFirst(int first) { this->first = first; };
	void SetSecond(int second) { this->second = second; };

	bool Init(int f, int s);
	operator string() const;
	friend ostream& operator << (ostream&, const Pair&);
	Pair& operator = (const Pair&);
	friend Pair operator + (const Pair& a, const Pair& b);
};

