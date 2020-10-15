#include<iostream>
#define PI 3.14

using namespace std;

void area(int radius)
{
    cout<<"The area of circle is: "<<PI*radius*radius<<endl;

}

void area(int length,int breadth)
{
    cout<<"The area of rectangle is: "<<length*breadth<<endl;

}


int main()
{

    area(22);
    area(12,21);
    return 0;
}
