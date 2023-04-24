#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
    int n;
    cin>>n;

    vector<int>vec;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        vec.pb(x);

    }

  int Max = *max_element(vec.begin(), vec.end());
         cout<<Max<<endl;
}
