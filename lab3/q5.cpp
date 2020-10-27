#include<iostream>
 using namespace std;

 class matrix
 {
     int mat[3][3];
 public:
    void fetch_data()
    {
        cout<<"Enter a matrix:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>mat[i][j];
    }
    matrix operator *(matrix &m)
    {
        matrix temp;
        int sum=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    sum += mat[i][k]*m.mat[k][j];
                }
                temp.mat[i][j]=sum;
                sum=0;
            }
        }
        return temp;
    }
    void display_data()
    {
        cout<<"The result is:\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout<<mat[i][j]<<"\t";
            cout<<endl;
        }
    }
 };

 int main()
 {
     matrix m1,m2,m3;
     m1.fetch_data();
     m2.fetch_data();
     m3=m1*m2;
     m3.display_data();
 }
