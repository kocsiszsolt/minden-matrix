#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[10][10],n,m,i,j,s,x;
    ifstream in("input.txt");
    in>>n;
    in>>m;
    for( i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            in>>matrix[i][j];
        }
    }
    for(j=0; j<=m; j++)
    {
        matrix[0][j]=10;
        matrix[m+1][j]=10;
    }
    for(i=0; i<=m+1; i++)
    {
        matrix[i][0]=10;
        matrix[i][n+1]=10;
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(matrix[i][j]<matrix[i+1][j]
               &&
               matrix[i][j]<matrix[i-1][j]
               &&
               matrix[i][j]<matrix[i][j-1]
               &&
               matrix[i][j]<matrix[i][j+1])

            {
                s=matrix[i+1][j];
                if(s>matrix[i-1][j])
                {
                    s=matrix[i-1][j];
                }
                if(s>matrix[i][j+1])
                {
                    s>matrix[i][j+1];
                }
                if(s>matrix[i][j-1])
                {
                    s=matrix[i][j-1];
                }
            }
            x+=s-matrix[i][j];
        }
    }
    cout<<x;
    return 0;
}
