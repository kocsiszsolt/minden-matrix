#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[100][100],n,m,i,j;
    cout<<"sorok szama=";
    cin>>n;
    cout<<endl<<"oszlopok szama=";
    cin>>m;
    for( i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                {
                    cout<<"matrix["<<i<<"]["<<j<<"]=";
                    cin>>matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                     }
        }
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    if(i==j)
                        {
                            matrix[i][j]=1;
                        }
                     }
        }
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    cout<<matrix[i][j]<<" ";
                }
            cout<<endl;
        }
    return 0;
}
