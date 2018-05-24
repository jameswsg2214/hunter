#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	string s;
    int i,j,k[100],n,c=0,count=0;
int get()
{
getline(cin,s);

}
int calc(){
	n=s.size();
	for(i=0;i<n;i++){
	if(s[i]==' '){
		for(j=i-1;j>=c;j--){
			cout<<s[j];
			
			}
		c=i+1;
		cout<<" ";
	}
	if(i==n-1){
	for(j=n-1;j>=c;j--){
		cout<<s[j];
	}	
	}
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
