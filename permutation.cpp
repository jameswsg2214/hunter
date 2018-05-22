#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	    string a;
	    int n;
	int get()

	{
cin>>a;
}


	int calc()

	{
		n=a.size();
	    sort(a.begin(), a.end());
	    do{
	    	cout<<a<<endl;
	    }while(next_permutation(a.begin(), a.end()));
	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
