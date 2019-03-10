#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],v[n],c=0,vi=0,i,j;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(a[i]==a[j]){
		a[j]=0;
		c++;
		}
	}
	if(c>0){
		a[i]=0;
	}
	c=0;
	}
	for(i=0;i<n;i++){
		if(a[i]!=0){
		cout<<a[i];
		if(i!=n-1)
		cout<<" ";
		}
	}
	return 0;
}
