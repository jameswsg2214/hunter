#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	//string s;
    int i,j,n,count=0;
	int get()

	{
cin>>n;

}


	int calc()

	{
		
		for(i=0;i<=n*2;i++){
		if(i%2!=0){
		
		for(j=0;j<i;j++){
		cout<<"1";
		}
		cout<<endl;
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
