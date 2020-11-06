#include <iostream>
#include <cmath>

using namespace std;

class rectangular
{
    int x,y;
public:
    void fetch_data()
    {
        cout<<"Enter Cartesian co-ordinate:"<<endl;
        cin>>x>>y;
    }
    int returnx()
    {
        return x;
    }
    int returny()
    {
        return y;
    }
};

class Polar
{
    float radius,angle;
public:
    Polar()
    {
        radius=0;
        angle=0;
    }
    Polar(rectangular rect)
    {
        radius=sqrt(pow(rect.returnx(),2)+pow(rect.returny(),2));
        angle=atan(rect.returny()/rect.returnx());
    }
    void display_data()
    {
        cout<<"The co-ordinate in polar is:"<<endl;
        cout<<"("<<radius<<" , "<<angle<<")";
    }
};

int main()
{
    Polar p;
    rectangular rect;
    rect.fetch_data();
    p = rect;
    p.display_data();
    return 0;
}
