#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[100][100],n,i,j;
    ifstream in("file.txt");
     in>>n;
    for( i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    in>>matrix[i][j];
                    matrix[j][i]=matrix[i][j];
                     }
        }
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(i==j)
                        {
                            matrix[i][j]=1;
                        }
                     }
        }
    ofstream out("cigany.out");
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    out<<matrix[i][j]<<" ";
                }
           out<<endl;

        }
        in.close();


    return 0;
}
