#pragma once
#include "Pair.h"
class Long_private : private Pair
{
public:
	using Pair::GetFirst;
	using Pair::GetSecond;
	using Pair::Pair;
	using Pair::SetFirst;
	using Pair::SetSecond;

	Long_private();
	Long_private(int, int);
	Long_private(const Long_private&);
	~Long_private();

	operator string() const;
	friend ostream& operator << (ostream&, const Long_private&);
	friend istream& operator >> (istream&, Long_private&);

	Long_private& operator = (const Long_private);
	friend Long_private operator + (const Long_private& a, const Long_private& b);
	friend Long_private operator * (const Long_private&, const Long_private&);
	friend Long_private operator - (const Long_private&, const Long_private&);
};

