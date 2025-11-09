#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second > b.second) return true;
    if(a.second < b.second) return false;
    if(a.first > b.first) return true;

    return false;
}
int main(){
    unordered_set<int>ust; // hold unique but not sorted

    // map

    map<int,int>mp;

    mp[1]=10;
    mp[2]=20;

    mp.insert({3,30});

    for(auto it:mp){
        cout<<it.first<<" "<<it.second;
    }

    // multimap -- duplicate keys

    // unordered_map -- no sorted

    unordered_map<int,int>mpp;

    string str="123";

    do
    {
        cout<<str<<endl;
    } while (next_permutation(str.begin(), str.end()));


    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    sort(a,a+4,cmp);


    return 0;
}