#include <iostream>

using namespace std;

class distancee
{
    int feet;
    float inch;
public:
    distancee()
    {
        feet=0;
        inch=0;
    }
    distancee(float m)
    {
        float feetf= 3.2808*m;
        feet=int(feetf);
        inch=12*(feetf/feet);
    }
    void display_data()
    {
        cout<<"The distance is "<<feet<<" feet "<<inch<<" inch."<<endl;
    }
};

int main()
{
    distancee d;
    float meter;
    cout<<"Enter the distance in meter: ";
    cin>>meter;
    d=meter;
    d.display_data();
    return 0;
}
