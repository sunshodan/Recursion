#include <bits/stdc++.h>
using namespace std;
vector<string> arr={"","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
void keypad(string num,string res)
{
    if(num.length()==0)
    {
        cout<<res<<endl;
        return;
    }
    char ch=num.at(0);
    string temp=arr[ch-'0'];
    for(int i=0;i<temp.length();i++)
    {
        keypad(num.substr(1),res+temp[i]);
    }
}
int main()
{
    keypad("234","");
}
