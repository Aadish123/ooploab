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
        cout<<"Enter the details of student in the following order: Name, Address, Roll number and Marks of a student.\n";
        cin>>name>>address>>roll>>marks;
    }
    void display_data()
    {
        cout<<name<<"\t\t"<<address<<"\t\t"<<roll<<"\t\t"<<marks<<endl;
    }
};

int main()
{
    int num=0;
    cout<<"Input the number of students: ";
    cin>>num;
    STUDENT stu[num];
    for(int i=0;i<num;i++){
        stu[i].fetch_data();
        }
    cout<<"The details and information of student are:\n";
    for(int i=0;i<num;i++){
        stu[i].display_data();
        }
    return 0;
}
