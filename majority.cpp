/*to print majority element in an array i.e which occurs more than n/2 times*/
#include<iostream>
using namespace std;
void majority(int a[], int size)
{
    int count=0;
    int mode=0;
    int caught=0;
    for(int i=0;i<size;i++)
    {

        for(int j=0;j<size;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count>(size)/2)
        {
            //int
            caught=1;
            mode=a[i];
            //cout<<endl;
        break;
        }
    }
    if(caught)
        cout<<"element is "<<mode;
    else
        cout<<"no el";

}

int main()
{
    int a[]={1,1,1,2,2,3,3,4,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    majority(a,n);
    return 0;

}
