#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
    int i,k[100],j,n,c,a;
    bool bo= true;
int get()
{
cin>>n>>c;
for(i=0;i<n;i++){
	cin>>k[i];
}
}
int calc(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
			a=k[i]+k[j];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
			if(c==a){
				bo=false;
			}
			}
		}
	}
	if(bo)
	cout<<"no";
	else
	cout<<"yes";
}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
