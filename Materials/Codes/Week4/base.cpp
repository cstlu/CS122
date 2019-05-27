#include <iostream>
using namespace std;
class base
{
private:
    int a;
public:
    base(/* args */);
    base &seta(int a)
    {
        this -> a = a;
        return *this;
    }
    void print()const{
        cout<<this -> a<<endl;
    }
    ~base();
};

base::base(/* args */)
{
}

base::~base()
{
}

int main()
{
    base a;
    base *b = &a.seta(5);
    (*b).seta(10);
    a.print();
    b->print();
    return 0;
}