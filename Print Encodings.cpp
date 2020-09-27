#include <iostream>
using namespace std;
void codes(string key,string value)
{
    if(key.length()==0)
    {
        cout<<value<<endl;
        return;
    }
    if(key[0]!='0')
    {
    char ch=key.at(0); //'1'
    string key1=key.substr(1);
    codes(key1,value+char(int(ch-'0')+96));
    }

    //2
    if(key.length()>1&&key[0]!='0')
    {
        int digit=(key[0]-'0')*10+(key[1]-'0');
        if(digit<27)
        {
        char vh=(digit+96);
        codes(key.substr(2),value+vh);
        }
    }
}
int main() {
    string s;
    cin>>s;
    codes(s,"");
}
