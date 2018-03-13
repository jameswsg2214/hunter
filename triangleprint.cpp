// Example program
#include <iostream>
#include <string>

#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
int x;
	int get()

	{
cin>>x;
	return 0;	

	}

	int calc()

	{
for(int i=x;i>0;i--){
    for(int j= 1;j<=i;j++){
        
    cout<<"1 ";
    }
    cout<<endl;
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
