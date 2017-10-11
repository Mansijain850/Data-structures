/*To find odd occurences in an array*/

#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,3,2,1};
    int size=sizeof(a)/sizeof(a[0]);
    int count =0;
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count%2!=0)
        {
            cout<<a[i]<<": has odd occurences";
            return 0;
        }
    }

    return 0;
}
