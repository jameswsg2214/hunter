#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	    int a[100000],i,n,c;
	int get()

	{
cin>>n>>c;
for(i=0;i<n;i++){
    cin>>a[i];
}
return 0;

	}

	int calc()

	{
	    int temp=a[0];
	    for(i=0;i<n;i++){
                if(i!=n-1){
            a[i]=a[i+1];
                }
                else{
                    a[i]=temp;
                }
            }
	return 0;

	}
	int display(){
	    for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
	}

};

int main()

{

   sample s;
s.get();

   for(int i=0;i<s.c;i++){

   s.calc();
   }
   s.display();
   return 0;

}
