#include "Complex.h"

Complex::Complex():a(0),b(0)
{
}

Complex::Complex(double a, double b):a(a),b(b)
{
}
void Complex::setA(double a)
{
    this -> a = a;
}
void Complex::setB(double b)
{
    this -> b = b;
}
//getters
double Complex::getA()const
{
    return this -> a;
}
double Complex::getB()const
{
    return this -> b;
}

Complex::~Complex()
{
}
Complex Complex::operator + (const Complex &b )const
{
    return Complex(this -> a + b.getA(),this -> b + b.getB());
}
Complex Complex::operator - (const Complex &b )const
{
    return Complex(this -> a - b.getA(),this -> b - b.getB());
}
Complex Complex::operator * (const Complex &b )const
{
    return Complex(this -> a * b.getA()-this->b*b.getB(),
                    this -> a * b.getB()+this->b*b.getA());
}
Complex Complex::operator not()const
{
    return Complex(this -> a,-1*this ->b);
}
Complex Complex::operator / (const Complex &b )const
{
    return (*this)* not b/(b.getA()*b.getA()+b.getB()*b.getB());
}
Complex Complex::operator ^ (int n)const
{
    if(n!=0)
    {
        Complex tich(1,0);
        for(int i=0;i<n;i++)
        {
            tich=tich*(*this);
        }
        if(n>0)
            return tich;
        else
            return 1/tich;
    }
    else if(n==0)
    {
        return Complex(1,0);
    }
}
Complex Complex::operator + ( double b )const
{
    return Complex(this -> a + b, this -> b);
}
Complex Complex::operator - ( double b )const
{
    return Complex(this -> a - b, this -> b);
}
Complex Complex::operator * (double b )const
{
    return Complex(this -> a * b, this->b*b);
}
Complex Complex::operator / (double b )const
{
    return Complex(this -> a/b, this->b/b);
}
istream &operator >> (istream &in, Complex &b)
{
    double c,d;
    in>>c>>d;
    b.setA(c);
    b.setB(d);
    return in;
}
ostream &operator << (ostream &out,const Complex &b)
{
    if (b.getB() > 0)
        out << b.getA() << " + " << b.getB() << "* i";
    else if (b.getB() < 0)
    {
        out << b.getA() << b.getB() << "* i";
    }
    else 
    {
        out << b.getA();
    }
    
    return out ;
}
Complex operator + (double c, const Complex &b)
{
    return Complex(c+b.getA(),b.getB());
}
Complex operator - (double c, const Complex &b)
{
    return Complex(c-b.getA(),b.getB());
}
Complex operator * (double c, const Complex &b)
{
    return b*c;
}
Complex operator / (double c, const Complex &b)
{
    return c*not b/(b.modul()*b.modul());
}
double Complex::modul()const
{
    return sqrt(this->a*this->a+this->b*this->b) ;  
}

