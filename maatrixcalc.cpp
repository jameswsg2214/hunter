#include <iostream>

using namespace std;
class Feb{
public:
    int a[3][3],i,j,n,m,p,sum=0,sum1=0;
    int get()
    {
cin>>n;
if(n<=1000){
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>a[i][j];
           }
                      }
}
return 0;
    }
    int calc()
    {
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
            if(i==j)
            sum=sum+a[i][j];
       }
   }

   for(i=0,j=n-1;i<n,j>=0;i++,j--)
   {
           sum1=sum1+a[i][j];

   }
p=sum+sum1;
cout<<p;
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
