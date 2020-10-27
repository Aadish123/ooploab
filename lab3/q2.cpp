#include<iostream>

using namespace std;

class comp
{
    float real,img;
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
    void display_data()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    friend comp operator ++(comp &);
    friend comp operator ++(comp &,int);
};

comp operator ++(comp &c)
{
    comp tempo;
    tempo.real=++c.real;
    tempo.img=++c.img;
    return tempo;
}
comp operator ++(comp &c,int)
{
    comp tempo;
    tempo.real=c.real++;
    tempo.img=c.img++;
    return tempo;
}

int main()
{
    comp c1(2.1,1.2),c2(2.3,3.2),c3;
    c2=++c1;
    c1=c3++;
    c3=++c1;
    cout<<"After Using Unary Operators:\n";
    c1.display_data();
    c2.display_data();
    c3.display_data();
    return 0;
}
