#include <iostream>
#include <string>
#include <locale>
using namespace std;
class SAMPLE{
public:
    locale loc;
    string str;
    int count=0;
    int get()
    {

        getline(cin,str);
        return 0;
    }
    int calc()
    {
       for (string::size_type i=0; i<str.length(); ++i){
       if(i==0){
        cout<<toupper(str[i],loc);
        i=i+1;
        count=1;
       }
       if(str[i]!=' '){
       if(count%2==0){
        cout<<toupper(str[i],loc);
    count=count+1;
       }
       else{
        cout<<str[i];
        count=count+1;
       }
       }
       else{

        cout<<" ";
       }
    }
      return 0;

    }
};
int main()
{
    SAMPLE s;
    s.get();
    s.calc();
    return 0;
}

