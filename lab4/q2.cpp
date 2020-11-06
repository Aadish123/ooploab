#include <iostream>

using namespace std;

class distancee
{
    float feet,inch,meter;

public:
    void fetch_data()
    {
        cout<<"Enter the distance in inch and feet:"<<endl;
        cin>>feet>>inch;
    }
    operator float()
    {
        feet=feet+inch/12;
        return(feet/3.2808);
    }
};

int main()
{
    distancee d1;
    d1.fetch_data();
    float meter;
    meter=d1;
    cout<<"The distance in meter is: "<<meter;
    return 0;
}
