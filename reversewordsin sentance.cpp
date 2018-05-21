#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class sample
{

	public:
	    string s;
	    int n,i,c=0,j;
	int get()

	{
getline(cin,s);

return 0;

	}


	int display(){
	    n=s.size();
	  for(i=0;i<n;i++){
	    if(s[i]==' '){
	        for(j=i-1;j>=c;j--){
	            cout<<s[j];
	        }
	        cout<<" ";
	        c=i+1; 
               }
               if(i==n-1){
               for(j=n-1;j>=c;j--){
	            cout<<s[j];
	        }	
               }
	    }
	}

};

int main()

{

   sample s;
   s.get();
   s.display();
   return 0;

}
