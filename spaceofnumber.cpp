// Example program
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	string s;
	int n,count=0;
	int get()
	{
		cin>>s>>n;
	return 0;	
	}
	int calc()
	{
	    int c=s.size();
	    for(int i=0;i<c;i++)
	    {
	        cout<<s.at(i);
	        count++;
	        if(count==n){
	        cout<<" ";
	        count=0;
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
