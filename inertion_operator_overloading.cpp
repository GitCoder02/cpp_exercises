#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        setReal(r);
        setImg(i);
    }
    void setReal(int r)
    {
        real=r;
    }
    void setImg(int i)
    {
        img=i;
    }

    //friend void operator<<(ostream &out,Complex &c);
    friend ostream & operator<<(ostream &out,Complex &c);
};

ostream & operator<<(ostream &out,Complex &c)
{
    out<<c.real<<"+i"<<c.img;
    return out;
}

int main()
{
    Complex c(10,5);
    cout<<c<<endl;
    cout<<"OR"<<endl;
    operator<<(cout,c);
}
