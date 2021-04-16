#pragma once
#include "Pair.h"
class Long_public : public Pair
{
public:
	Long_public();
	Long_public(string);
	Long_public(int, int);
	Long_public(const Long_public&);
	~Long_public();

	operator string() const;
	friend ostream& operator << (ostream&, const Long_public&);
	friend istream& operator >> (istream&, Long_public&);

	Long_public& operator = (const Long_public&);
	friend Long_public operator * (const Long_public&, const Long_public&);
	friend Long_public operator - (const Long_public&, const Long_public&);
};

