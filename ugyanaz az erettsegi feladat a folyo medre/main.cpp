#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[10][10],n,m,i,j,max=-999,maxoszlop=-1;
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
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {
            if(matrix[i][j]>max)
            {
                max=matrix[i][j];
                maxoszlop=j;
            }
        }
        cout<<i+1<<":"<<maxoszlop+1<<endl;
    }

    return 0;
}
