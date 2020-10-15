#include<iostream>

using namespace std;

int volume(int l=100, int b=200, int h=300)
{
    return l*b*h;
}

int main()
{
    cout<<"Volume of cuboid having length=100 breadth=200 and height=300 is: "<<volume(100)<<endl;
    cout<<"Volume of cuboid having length=300 breadth=100 and height=200 is: "<<volume(300,100,200)<<endl;
    cout<<"Volume of cuboid having length=500 breadth=700 and height=300 is: "<<volume(500,700)<<endl;
    return 0;
}
