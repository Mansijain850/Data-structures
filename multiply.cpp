/*multiplication of two arrays*/

#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10];
int fin=0;
    int m,n,o,p;
    cout<<"1st mat"<<endl;
    cout<<"row  ";
    cin>>m;
    cout<<"col  ";
    cin>>n;
    cout<<"2nd mat"<<endl;
    cout<<"row ";
    cin>>o;
    cout<<"col ";
    cin>>p;
    if(n!=o)
    {
        cout<<"error";
    }
    else{
        cout<<"el 1st array";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"2nd array";
        for(int i=0;i<o;i++)
        {
            for(int j=0;j<p;j++)
            {
                cin>>b[i][j];
            }
        }
        for(int i=0;i<o;i++)
        {
           for(int j=0;j<p;j++)
            {
                cin>>b[i][j];
            }
        }
        cout<<"output mat";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p;j++)
            {

            for(int k=0;k<n;k++)
            {
               // int fin=0;
                fin=fin+a[i][k]*b[k][j];
            }
            c[i][j]=fin;
            fin=0;

        }
    }
for(int i=0;i<m;i++)
  {
  for(int j=0;j<p;j++)
   {
       cout<<c[i][j];

   }

  }
    }
  return 0;
}
