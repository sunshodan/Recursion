#include <bits/stdc++.h>
using namespace std;
vector<string> subs(string s)
{
    if(s.length()==0)
    {
    vector<string> arr;
    arr.push_back("");
    return arr;
    }
    char aa=s.at(0);
    string ini(1, aa); 
    vector<string> ss=subs(s.substr(1));
    vector<string> res;
    for(int i=0;i<ss.size();i++)
    {
        string a="";
        res.push_back(a+ss[i]);

    }
    for(int i=0;i<ss.size();i++)
    {
        res.push_back(ini+ss[i]);
    }
    return res;
}
int main() {
    vector<string> arr=subs("abcd");
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
}
