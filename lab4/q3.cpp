#include <iostream>
#include <cmath>

using namespace std;

class Polar
{
    float radius,angle;
public:
    Polar()
    {
        radius=0;
        angle=0;
    }
    Polar(float r,float theta)
    {
        radius=r;
        angle=theta;
    }
    void display_data()
    {
        cout<<"The co-ordinate in polar is:"<<endl;
        cout<<"("<<radius<<" , "<<angle<<")";
    }
};

class rectangular
{
    int x,y;
public:
    void fetch_data()
    {
        cout<<"Enter Cartesian co-ordinate:"<<endl;
        cin>>x>>y;
    }
    operator Polar()
    {
        float radius,angle;
        radius=sqrt(pow(x,2)+pow(y,2));
        angle=atan(y/x);
        return Polar(radius,angle);
    }
};

int main()
{
    Polar p;
    rectangular r;
    r.fetch_data();
    p=r;
    p.display_data();
    return 0;
}
