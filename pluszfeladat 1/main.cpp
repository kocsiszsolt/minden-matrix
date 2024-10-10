#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[100][100],n,m,i,j,z;
    ifstream in("file.txt");
     in>>n;
     in>>m;
    for( i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
                {
                    in>>matrix[i][j];
                     }
        }
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    m%2=z;
                    if(matrix[i][]==matrix[i][])

                }
        }
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    out<<" ";
                }
           out<<endl;

        }
    return 0;
}
