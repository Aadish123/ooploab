#include<iostream>

using namespace std;

class comp
{
    float real;
    float img;
public:
    comp()
    {
        real=0;
        img=0;
    }
    comp(float r, float i)
    {
        real=r;
        img=i;
    }
    comp operator ++()
    {
        comp tem;
        tem.real=++real;
        tem.img=++img;
        return tem;
    }
    comp operator ++(int)
    {
        comp tem;
        tem.real=real++;
        tem.img=img++;
        return tem;
    }
    void display_data()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};

int main()
{
    comp c1(1.2,4.5),c2,c3(1.1,2.2);
    c2=++c1;
    c1=c3++;
    c3=++c1;
    cout<<"After Using Unary Operators:\n";
    c1.display_data();
    c2.display_data();
    c3.display_data();
    return 0;
}
