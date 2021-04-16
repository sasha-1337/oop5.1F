#include "Long_private.h"
Long_private::Long_private() : Pair(1, 1)
{

}
Long_private::Long_private(int f = 0, int s = 0) : Pair(f, s)
{

}
Long_private::Long_private(const Long_private& r) : Pair(r.GetFirst(), r.GetSecond())
{

}
Long_private::~Long_private() { }

istream& operator >> (istream& in, Long_private& r)
{
    int first = 0, second = 0;
    do {
        cout << " "; in >> first;
        cout << " "; in >> second;
    } while (!r.Init(first, second));
    return in;
}
ostream& operator << (ostream& out, const Long_private& r)
{
    out << string(r);
    return out;
}
Long_private::operator string() const
{
    stringstream sstr;
    sstr << endl << " ( " << GetFirst() << " , " << GetSecond() << " )" << endl << endl;
    return sstr.str();
}

Long_private operator * (const Long_private& a, const Long_private& b)
{
    return Long_private(a.GetFirst() * b.GetFirst(), a.GetSecond() * b.GetSecond());
}

Long_private operator - (const Long_private& a, const Long_private& b)
{
    return Long_private(a.GetFirst() - b.GetFirst(), a.GetSecond() - b.GetSecond());
}

Long_private operator + (const Long_private& a, const Long_private& b)
{
    return Long_private(a.GetFirst() + b.GetFirst(), a.GetSecond() + b.GetSecond());
}

Long_private& Long_private::operator = (const Long_private r)
{
    int first = 0, second = 0;
    first = r.GetFirst();
    second = r.GetSecond();
    return *this;
}
