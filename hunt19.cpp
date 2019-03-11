#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int a[n][k],vl[k],i,j,l,m,c=0,v=1,p=0;
	for(i=0;i<n;i++){
	for(j=0;j<k;j++){
		cin>>a[i][j];
	}
	}
	for(i=0,j=0;j<k;j++){
		v=1;
		for(l=1;l<n;l++){
			c=0;
			for(m=0;m<k;m++){
			if(a[i][j]==a[l][m]){
				c++;}
			}
			if(c==1){
			v++;
			}
	}
	if(v==n){
		vl[p]=a[i][j];
		p++;
	}
	}
	for(j=0;j<p;j++){
		cout<<vl[j];
	}
	return 0;
}
