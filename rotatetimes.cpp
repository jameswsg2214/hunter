#include <iostream>
using namespace std;

int main() {
	int k=0,n,i,j,c=0,t1,t2;
	cin>>n;
	int a[n],s[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	li:
	for(i=0;i<n;i++){
		if(a[i]==s[i])
		c++;
	}
	if(c==n){
		cout<<k;
	}
	else{
		c=0;
		for(i=0;i<n;i++){
      if(i==0){
				t1=s[i+1];
				s[i+1]=s[i];
			}
			else if(i!=n-1){
				t2=s[i+1];
				s[i+1]=t1;
				t1=t2;
			}
			else{
			    s[0]=t1;
			    }
			    
		}
		k++;
		if(k<n){
		goto li;}
		else{
			cout<<"invaild";
		}
	}
	//cout<<k;
	return 0;
}
