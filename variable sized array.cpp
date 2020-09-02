#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct arr
{int* a;};


int main() 
{arr* s=NULL;
int n,q,k;
int *l,*m;
cin>>n>>q;
l=new int[q];
m=new int[q];
s=new arr[n];
for(int i=0;i<n;i++)
{cin>>k;
s[i].a=new int[k];
for(int j=0;j<k;j++)
{cin>>s[i].a[j];}
}
for(int i=0;i<q;i++)
{cin>>l[i]>>m[i];}
for(int i=0;i<q;i++)
{cout<<s[l[i]].a[m[i]]<<endl;}

   
    return 0;
}
