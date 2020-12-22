#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int i, int j, int k, int l)
{
if(i>j&&i>k&&i>l)
{
        cout<<i;
        return(i);
}
else if(j>i&&j>k&&j>l)
{
        cout<<j;
        return(j);
}
else if(k>j&&k>i&&k>l)
{
        cout<<k;
         return(k);
}  
else
{
        cout<<l;
        return(l);
}
}

int main()
{
    int a, b, c, d,max;
    cin>>a>>b>>c>>d;
    max=max_of_four(a,b,c,d);
}
