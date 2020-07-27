//Codeforces Question 1324/D
// pairs such that i<j while a[i]+a[j]>b[i]+b[j]
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,  null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
//Works as an Ordered set
int main(int argc, char const *argv[]) {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int a[n],b[n],c[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        c[i] = a[i] - b[i];

    PBDS st;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans += st.size() - st.order_of_key({-c[i],1e8});
        st.insert({c[i],i});
    }
    cout<<ans<<endl;
    return 0;
}
/*
5
4 8 2 6 2
4 5 4 1 3

*/
