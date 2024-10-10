#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[100][100],a,n,m,E,Ny,K,D;
     ifstream in("file.txt");
     in>>n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    cin>>matrix[i][j];

                     }
        }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    if(i<j)
                        {
                            if(i+j<n-1)
                                {
                                    E=E+matrix[i][j];
                                }
                            if(i=j>n-1)
                                {
                                    K=K+matrix[i][j];
                                }
                        }
                    if(i>j)
                        {
                           if(i+j<n-1)
                                {
                                   Ny=Ny+matrix[i][j];
                                }
                            if(i=j>n-1)
                                {
                                    D=D+matrix[i][j];
                                }
                        }
                }
        }
            cout<<"E="<<E<<endl;
            cout<<"K="<<K<<endl;
            cout<<"D="<<D<<endl;
            cout<<"Ny="<<Ny<<endl;
              in.close();
    return 0;
}
