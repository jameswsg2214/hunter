#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
    int i,j=0,k[100],n,c,count=0;
int get()
{
cin>>n;
for(i=0;i<n;i++){
	cin>>k[i];
}
}
int calc(){
//	sort(k,k+n);
	for(i=0;i<n;i++){
		
		if(k[i]!=i){
		k[i]=0;
		j++;
		}
		
	}
	sort(k,k+n);
	for(i=j;i<n;i++){
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
