#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter row column";
    cin>>n >> m;
    int a[n][m];
    int b[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        cin>>a[i][j];
        }
    }
    for(int k=0;k<m;k++)
    {
        for(int l=0;l<n;l++)
        {
            b[k][l]=a[l][(m-1)-k];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }

}
