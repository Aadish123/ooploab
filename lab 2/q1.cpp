#include<iostream>

using namespace std;

class STUDENT
{
    char name[20];
    char address[30];
    int roll;
    float marks;

public:

    void fetch_data()
    {
        cout<<"Enter the details of the students in the following order: (Name, Address, Roll number and Marks of a student.)\n";
        cin>>name>>address>>roll>>marks;
    }
    void display_data()
    {
        cout<<"The details and information  of student are given below:\n";
        cout<<name<<"\t"<<address<<"\t"<<roll<<"\t"<<marks<<endl;
    }
};

int main()
{
    STUDENT s1;
    s1.fetch_data();
    s1.display_data();
    return 0;
}
