#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[100][100],n,m,i,j,s,maximum=0;
    ifstream in("file.txt");
    in>>n;
    in>>m;
    for( i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            in>>matrix[i][j];
        }
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            s=matrix[i][j]+matrix[i][j+1]+matrix[i+1][j]+matrix[i+1][j+1];
            if(s>maximum)
                {
                    maximum=s;
                }
        }
    }
            cout<<maximum;
    return 0;
}
