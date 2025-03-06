#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[10][10],n,m,i,j,x=999;
    ifstream in("input.txt");
    in>>n;
    in>>m;
    for( i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            in>>matrix[i][j];
        }
    }
    for(int i=1; i<n; i+=2)
    {

        for(int j=1; j<m; j++)
        {
            if(matrix[i][j]<x)
                {
                    x=matrix[i][j];
                }
        }
        for(int j=0; j<m; j++)
        {
         if(matrix[i-1][j]>x-1)
            {
                matrix[i-1][j]=x-1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<endl;

        for(int j=0; j<m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
}

