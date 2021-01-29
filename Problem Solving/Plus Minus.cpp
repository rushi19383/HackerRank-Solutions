#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
    cin>>arr[i];
    }
    int positiveCount=0;
    int negativeCount=0;
    int zeroCount=0;
    for (int i=0; i<n; i++) {
    if (arr[i]>0) {
    positiveCount++;
    }
    else if (arr[i]<0 ) {
    negativeCount++;
    }
    else{
        zeroCount++;
    }
    }
    cout<<float(positiveCount)/n <<endl;
    cout<<float(negativeCount)/n <<endl;
    cout<<float(zeroCount)/n <<endl;
}
