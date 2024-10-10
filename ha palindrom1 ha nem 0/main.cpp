#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[10][10],szamjegy,ujszam=0,a,n,m,i,j,aux;
    ifstream in("input.txt");
    ofstream out("output.txt");
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
            if(matrix[i][j]<10){
                out<<"1";
            }
            else{
            aux=matrix[i][j];
            while(aux>0)
            {
                szamjegy=a % 10;
                a=a / 10;
                ujszam=ujszam*10+szamjegy;
            }

            if (ujszam==matrix[i][j])
            {
               out<<"1";
            }
            else
            {
                out<<"0";
            }
            }
    }
    }


    return 0;
}

