#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s=a[0];
    for(int i=0;i<n;i++)
    {
        if(s < a[i])
            s=a[i];
    }
    cout<<"Max element :  "<<s;
    return 0;
}