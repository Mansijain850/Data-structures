/*Intersection of two sorted arrays*/

#include<iostream>
using namespace std;
int intersect(int a[], int b[], int l, int m)
{
    int i=0,j=0;
    while(i<l&&j<m)
    {
        if(a[i]<b[j]){
            i++;
        }

    else if(a[i]>b[j])
        j++;
    else
        {cout<<b[j]<<" ";
        j++;
    i++;

    }

    }
    return 0;

}
int main()
{
int a[]={1,2,3,4,5,8};
//int a[]={1,3,6,7,9};
int b[]={4,5,6,7,8};
int l=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
intersect(a,b,l,m);

    return 0;
}
