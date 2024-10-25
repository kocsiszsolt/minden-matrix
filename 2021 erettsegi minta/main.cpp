#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10],n,m,i,j,x=0;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    for( i=m-1; i>-1; i--)
    {
        for(j=n-1; j>-1; j--)
        {
            matrix[i][j]=x*x;
            x+=2;
        }
    }
    for(i=0; i<m; i++)
    {
        cout<<endl;
        for(j=0; j<n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
    return 0;
}
