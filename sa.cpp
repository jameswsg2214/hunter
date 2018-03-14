// Example program
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	int x,c,s,sum=1;
	int get()
	{
	cin>>x;	
	return 0;	
	}
	int calc()
	{
	    while(x>0){
	        sum=x%10;
	        x=x/10;
	        c=sum*sum;
	        s=s+c;
	    }
	    cout<<s;
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
