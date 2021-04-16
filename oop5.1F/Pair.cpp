#include "Pair.h"
Pair::Pair()
{
    first = 0;
    second = 0;
}
Pair::Pair(int f = 0, int s = 0)
{
    if (f <= -10)
        throw MyException(" First pair <= -10 ");
    if (f >= 10)
        throw exception(" First pair >= 10 ");
    if (s <= -10)
        throw bad_exception();
    bad_exception* t = new bad_exception;
    if (s >= 10)
        throw t;
    first = f;
    second = s;
}
Pair::Pair(const Pair& r)
{
    first = r.first;
    second = r.second;
}
Pair::~Pair(void) { }

bool Pair::Init(int f, int s)
{
    if ((f >= -10 || f <= 10) &&
        (s >= -10 || s <= 10))
    {
        SetFirst(f);
        SetSecond(s);
        return true;
    }
    else
        return false;
}

ostream& operator << (ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}
Pair::operator string ()const
{
    stringstream sstr;
    sstr << endl << " ( " << first << " , " << second << " )" << endl << endl;
    return sstr.str();
}

Pair& Pair::operator = (const Pair& r)
{
    first = r.first;
    second = r.second;
    return *this;
}

Pair operator + (const Pair& a, const Pair& b)
{
    return Pair(a.GetFirst() + b.GetFirst(), a.GetSecond() + b.GetSecond());
}