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
		if(a[i]==a[j])
		c++;
	}
	if(c==1){
		v[vi]=a[i];
		vi++;
	}
	c=0;
	}
	if(vi!=0){
	for(i=0;i<vi;i++){
		cout<<v[i]<<" ";
	}	
	}
	else{
		cout<<"Unique";
	}
	return 0;
}
