// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i,b,d=0;
 cin>>i;
int len = 1;

if (i > 0) {
   
    for (len = 0; i > 0; len++) {
        i = i / 10;
    }
}
if(len==2){
    b=i%10;
  i=i/10;
  d=(b*b)+(i*i);
  cout<<d;
}
else{
  for(int j=1;j<=len;j++)
  {
  b=i%10;
  i=i/10;
  d=d+(b*b);
  if(j==len)
  {
     d=d+(i*i) ;
  }
  }
  cout<<d;
}
}
