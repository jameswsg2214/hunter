#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	    int a[100000],i,n;
	int get()

	{
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
return 0;

	}

	int calc()

	{
	    int temp=a[0];
	    for(i=0;i<n;i++){
            if(temp<=a[i]){
                cout<<temp;
            }
            else{
                cout<<a[i];
                temp=a[i];
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
