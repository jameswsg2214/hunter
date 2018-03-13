#include <iostream>

using namespace std;
class Feb{
public:

    int n,i,sum=0;
    int a[100000];
    int get()
    {
cin>>n;
   for(i=0;i<n;i++)
   {

           cin>>a[i];
}
return 0;
    }
    int calc()
    {

   for(i=0;i<n;i++)
   {
            if(a[i]<0)
            sum=sum+a[i];

   }
cout<<sum;
return 0;
    }
};
int main()
{
    Feb s;
    s.get();
    s.calc();
    return 0;
}
