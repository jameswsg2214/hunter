#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,i;
  cin>>n;
  cin>>k;
  int a[n];
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
 sort(a,a+n);
 for(i=0;i<n;i++)
 {
     if(i==k-1)
     {
     cout<<a[i];
     }
 }
  return 0;
}
