#include "Long_public.h"
Long_public::Long_public() : Pair(1, 1)
{
    int first = 0;
    int second = 0;
    SetFirst(first);
    SetSecond(second);
}
Long_public::Long_public(string t) : Pair(1, 1)
{
    string s = "!!! wrong password !!!";
    if (t != "123")
        throw s;
    int first = 0;
    int second = 0;
    SetFirst(first);
    SetSecond(second);
}
Long_public::Long_public(int f = 0, int s = 0) : Pair(f, s)
{
    int first = f;
    int second = s;
    SetFirst(first);
    SetSecond(second);
}
Long_public::Long_public(const Long_public& r) : Pair(r.GetFirst(), r.GetSecond())
{
    int first = r.GetFirst();
    int second = r.GetSecond();
    SetFirst(first);
    SetSecond(second);
}
Long_public::~Long_public() { }

istream& operator >> (istream& in, Long_public& r)
{
    int first = 0, second = 0;
    do {
        cout << " "; in >> first;
        cout << " "; in >> second;
    } while (!r.Init(first, second));
    return in;
}
ostream& operator << (ostream& out, const Long_public& r)
{
    out << string(r);
    return out;
}
Long_public::operator string() const
{
    stringstream sstr;
    sstr << endl << " ( " << GetFirst() << " , " << GetSecond() << " )" << endl << endl;
    return sstr.str();
}

Long_public& Long_public::operator = (const Long_public& r)
{
    int first = 0, second = 0;
    first = r.GetFirst();
    second = r.GetSecond();
    return *this;
}

Long_public operator * (const Long_public& a, const Long_public& b)
{
    return Long_public(a.GetFirst() * b.GetFirst(), a.GetSecond() * b.GetSecond());
}

Long_public operator - (const Long_public& a, const Long_public& b)
{
    return Long_public(a.GetFirst() - b.GetFirst(), a.GetSecond() - b.GetSecond());
}