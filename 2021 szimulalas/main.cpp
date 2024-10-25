#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[10][10],n,m,i,j,k,aux;
    ifstream in("input.txt");
    in>>n;
    in>>k;
    for( i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in>>matrix[i][j];
        }
    }
    aux=matrix[k-1][k-2];
    for(j=k-2; j>0; j--)
    {
        matrix[k-1][j]=matrix[k-1][j-1];
    }
    matrix[k-1][0]=aux;
    for(i=0; i<n; i++)
    {
        cout<<endl;
        for(j=0; j<n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }

    return 0;
}
