#include <bits/stdc++.h>
using namespace std;
vector<string> maze(int i1,int i2,int d1,int d2)
{
    if(i1==d1 && i2==d2)
    {
        vector<string> arr;
        arr.push_back("");
        return arr;
    }
    vector<string> down;
    vector<string> right;
    if(i2<d2)
    down=maze(i1,i2+1,d1,d2);
    if(i1<d1)
    right=maze(i1+1,i2,d1,d2);
    vector<string> res;
    for(int i=0;i<down.size();i++)
    {
        res.push_back("H"+down[i]);
    }
    for(int i=0;i<right.size();i++)
    {
        res.push_back("V"+right[i]);
    }
    return res;
}
int main() {
    vector<string> arr=maze(0,0,4,4);
    for(auto i=arr.begin();i!=arr.end();i++)
    {
        cout<<(*i)<<endl;
    }
}
