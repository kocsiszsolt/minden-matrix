#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[10][10],n,m,i,j,s,x,y,maximum=0;
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
    cin>>x;
    cin>>y;
    for( i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {


            s=matrix[x+1][y+1]+matrix[x-1][y-1]+matrix[x-1][y+1]+matrix[x+1][y-1];
        }
    }
            cout<<s;
    return 0;
}
