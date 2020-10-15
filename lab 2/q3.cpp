#include<iostream>

using namespace std;

class complex_number
{
    float real_num,imagi_num;
public:
    void fetch_data()
    {
        cout<<"Enter any complex number:\n";
        cin>>real_num>>imagi_num;
    }
    void display_data()
    {
        cout<<"The sum of the complex numbers is: "<<real_num<<"+i"<<imagi_num;
    }
    void add(complex_number &c1, complex_number &c2)
    {
        real_num=c1.real_num+c2.real_num;
        imagi_num=c1.imagi_num+c2.imagi_num;
    }
};

int main()
{
    complex_number c1,c2,c3;
    c1.fetch_data();
    c2.fetch_data();
    c3.add(c1,c2);
    c3.display_data();
    return 0;
}
