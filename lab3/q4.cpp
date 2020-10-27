#include<iostream>

using namespace std;

class COMP
{
    float real,img;
public:
    void fetch_data()
    {
        cout<<"Enter Complex Number:\n";
        cin>>real>>img;
    }
    void display_data()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    friend COMP operator +(COMP &,COMP &);
};

COMP operator +(COMP &c1,COMP &c2)
{
    COMP temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

int main()
{
    COMP c1,c2,c3;
    c1.fetch_data();
    c2.fetch_data();
    c3=c1+c2;
    cout<<"The sum is:\n";
    c3.display_data();
    return 0;
}

