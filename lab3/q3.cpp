#include<iostream>

using namespace std;

class comp
{
    float real,img;
public:
    void fetch_data()
    {
        cout<<"Enter Complex Number:\n";
        cin>>real>>img;
    }
    comp operator +(comp &c)
    {
        comp temp;
        temp.real=c.real+real;
        temp.img=c.img+img;
        return temp;
    }
    void display_data()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};

int main()
{
    comp c1,c2,c3;
    c1.fetch_data();
    c2.fetch_data();
    c3=c1+c2;
    cout<<"The sum is:\n";
    c3.display_data();
    return 0;
}
