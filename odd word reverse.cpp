#include <iostream>
using namespace std;
int main()
{
string s;
int n,c=0,v=0,i,j;
    getline(cin,s);
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]==' '||i==n-1){
            c++;
        if(i==n-1)
            i++;
        if(c%2==0){
                for(j=v;j<i;j++){
                    cout<<s[j];
        }
        v=i+1;
        }
            else{
                    for(j=i-1;j>=v;j--){
                        cout<<s[j];
            }
            v=i+1;
            }
            if(i!=n-1)
            cout<<" ";
            }
    }
    return 0;

}
