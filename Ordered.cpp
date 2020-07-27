#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,  null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
//Works as an Ordered set
int main(int argc, char const *argv[]) {

    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
    #endif

    PBDS St;
    St.insert(1);
    St.insert(3);
    St.insert(4);
    St.insert(10);
    St.insert(15);

    for(int i=0;i<St.size();i++)
    {
        cout<<i<<" "<<*St.find_by_order(i)<<endl;
        //To find the Kth Largest Element in the set in :Logn time starts from 0
    }
    cout<<St.order_of_key(5)<<endl;
    //Find the Lower bound in Logn Time
    return 0;
}
