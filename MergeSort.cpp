vector<ll> merge(vector<ll> &left,vector<ll> &right)
{
    ll l=left.size();
    ll r=right.size();
    ll n=l+r;
    vector<ll> arr(n,0);
    ll i=0;
    ll j=0;
    ll k=0;
    while(i<l&&j<r)
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<l)
    {
            arr[k]=left[i];
            k++;
            i++;
    }
    while(j<r)
    {
            arr[k]=right[j];
            k++;
            j++;
    }
    return arr;
}
void mergesort(vector<ll> &arr)
{
    ll n=arr.size();
    if(n<2)
        return;
    ll mid=(n-1)/2;
    vector<ll> left;
    vector<ll> right;
    for(int i=0;i<=mid;i++)
    {
        left.push_back(arr[i]);
    }
    for(int i=mid+1;i<n;i++)
    {
        right.push_back(arr[i]);
    }
    mergesort(left);
    mergesort(right);
    arr=merge(left,right);
}
