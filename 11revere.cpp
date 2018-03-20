// Example program
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
string s;
int j=0;
int c[];
	int get()
	{
getline(cin,s);
	return 0;	
	}
	int calc()
	{int n=s.size();
	    for(int i=0;i<n;i++){
	       if(s.at(i)==' '){
	           
	           c[j]=i;
	          j++; 
	       }
	    }
	    for(int i=j-1;i>0;i++){
if(i==j-1){
for(int z=n-1;z>j;z--)	{
	cout<<s.at(z);
}
}
	        }
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
