#include <iostream> 
 using namespace std; 
 int main() {  
 int n,arr[1000],i,j,c=0,a;
   bool fn=true;
   cin>>n;
   for(i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
    fn=true;
   for(j=0;j<n;j++)
   {
   if(i!=j)
   {
   if(arr[i]==arr[j])
   {
   fn=false;
   }
   }
   }
     if(fn)
     {
     c++;
     if(c==3)
     {
       cout<<arr[i];
     }
     }
   }
   if(c<3)
   {
   cout<<"\nnone";
   }
   return 0;
 }
