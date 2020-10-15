#include<iostream>

using namespace std;

class complex_number
{
    float r,i;
public:
    ~complex_number()
    {
        cout<<"Destroying the Objects"<<endl;
    }
    complex_number()
    {
        r=0;
        i=0;
    }
    complex_number(float real, float imag)
    {
        r=real;
        i=imag;
    }
    complex_number(complex_number &c0)
    {
        r=c0.r;
        i=c0.i;
    }
    void display_data()
    {
        cout<<r<<"+i"<<i<<endl;
    }
};

int main()
{
    complex_number c1,c2(2.3,3.2),c3(c2);
    cout<<"Use of Default constructor.\n";
    c1.display_data();
    cout<<"Use of Parameterized constructor.\n";
    c2.display_data();
    cout<<"Use of Copy constructor.\n";
    c3.display_data();
    return 0;
}

