#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[100][100],n,m,i,j,min=-9999;
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
        for(int j=0; j<m; j++)
        {
            min=matrix[i][0];
            if(matrix[i][j]<min)
            {
                min=matrix[i][j];
            }
        }
        for(int j=0; j<m; j++)
        {
            if(matrix[i-1][j]>min-1)
            {
                matrix[i-1][j]=min-1;
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
    return 0;
}
