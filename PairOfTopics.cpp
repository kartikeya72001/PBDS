//Codeforces Question 1324/D
// pairs such that i<j while a[i]+a[j]>b[i]+b[j]
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,  null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
//Works as an Ordered set
int main(int argc, char const *argv[]) {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    PBDS st;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    int inversion_count = 0;
    for(int i=0;i<n;i++)
    {
        inversion_count += st.size() - st.order_of_key(arr[i]);
        st.insert(arr[i]);
    }
    cout<<inversion_count<<endl;
    return 0;
}
