#include<iostream>
using namespace std;
int main()
{
    int n,d;
    int *a=NULL;
    cin>>n>>d;
    a=new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int temp;
    for(int i=0;i<d;i++)
    {int j=0;
    int x=a[0];
    while(j<n-1)
    {
        a[j]=a[j+1];
        j++;

    }
    a[n-1]=x;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    delete []a;
    a=NULL;
}