#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
    int i,k[100],n,c,count=0;
int get()
{
cin>>n;
for(i=0;i<n;i++){
	cin>>k[i];
}
}
int calc(){
	sort(k,k+n);
	for(i=n-1;i>=0;i--){
		cout<<k[i];
	}
	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
