#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class sample
{

	public:
	    string s;
	    int n,i,c,j=0;
	int get()

	{
getline(cin,s);

return 0;

	}

	int calc()

	{int count=0;
	    n=s.size();
	    for(i=0;i<n;i++){
	    if(s[i]==' '){
            c=i;
            count=1;
            i=i+1;
            }
	    if(count==1){

                    cout<<s[i];
                }
	    }

	return 0;

	}
	int display(){
	    cout<<" ";
	    for(i=0;i<c;i++){
            cout<<s[i];
	    }
	}

};

int main()

{

   sample s;
   s.get();
   s.calc();
   s.display();
   return 0;

}
