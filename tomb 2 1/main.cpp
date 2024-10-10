#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[100][100],n,m,i,j,a;
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
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j]<4)
            {
                cout<<"1";
            }
            else
            {
                bool  prim= true;
                for(a=2; a<=matrix[i][j]/2+1; a++)
                {
                    if(matrix[i][j]%a==0)
                    {
                        prim = false;
                    }
                    if (prim == true)
                    {
                        matrix[i][j]=1;
                    }

                    else
                    {
                        matrix[i][j]=0;
                    }
                }
            }

        }

        in.close();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
        }

        return 0;
    }
}
