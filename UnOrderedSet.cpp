#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,  null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
//Works as an Key Value Pair in place of an ordered to set to store unique values
int main(int argc, char const *argv[]) {

    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
    #endif

    PBDS St;
    St.insert({1,3});
    St.insert({3,5});
    St.insert({4,4});
    St.insert({10,6});
    St.insert({15,1});
    St.insert({15,2});

    for(int i=0;i<St.size();i++)
    {
        cout<<i<<" "<<St.find_by_order(i)->first<<" "<<St.find_by_order(i)->second<<endl;
        //To find the Kth Largest Element in the set in :Logn time starts from 0
    }
    cout<<St.order_of_key({10,6 })<<endl;
    //Find the Lower bound in Logn Time
    return 0;
}
