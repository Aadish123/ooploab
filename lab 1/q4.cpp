#include<iostream>

using namespace std;

inline int perimeter(int length,int breadth)
{
    return 2*(length+breadth);
}

int main()
{
    int l,b;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the length and breadth of a rectangle:\n";
        cin>>l>>b;
        cout<<"The perimeter of rectangle is: "<<perimeter(l,b)<<endl;
    }
    return 0;
}
