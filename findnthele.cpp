#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	    int a[100000],k,n,i;
	int get()

	{
cin>>n;
cin>>k;
for(i=0;i<n;i++){
    cin>>a[i];
}
return 0;

	}

	int calc()

	{
	    sort(a,a+n);
	    cout<<a[k-1];
	return 0;

	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
