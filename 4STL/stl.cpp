#include<bits/stdc++.h>
using namespace std;
int main(){

    // pairs
    // pair<int,int>p={1,3};
    // cout<<p.first<<" "<<p.second;

    // pair<int,pair<int,int>>pr={1,{2,3}};
    // cout<<pr.second.second;

    // pair<int,int>arr[]={{1,3},{3,9},{9,7}};
    // cout<<arr[3].second;

    // vector
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    vec.emplace_back(1,4);
    vec.push_back({0,8});

    vector<int>vtr(5,100);
    vector<int>vctr(5);
    
    // iterator

    vector<int>::iterator it=v.begin();
    cout<<*(it);

    for(vector<int>::iterator it=v.begin(); it !=v.end(); it++){
        cout<<*(it);
    }

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*(it);
    }

    for(auto it:v){
        cout<<it<<" ";
    }

    // list from here

    list<int>ls;
    ls.push_front(4);
    ls.emplace_front(12);

    list<int>::iterator itt=ls.begin();
    cout<<"this is of list"<<endl;
    cout<<*(itt)<<endl;
    itt++;
    cout<<*(itt);

    //deque

    deque<int>dq;

    dq.push_back(11);
    dq.push_front(10);
    cout<<dq.front();

    // stack 
    // queue

    // priority_queue-- max value remains at top

    priority_queue<int>pq;
    pq.push(11);
    pq.push(10);
    cout<<"top of pq is:- "<<endl;

    // min at top- min heap
    // max at top- max heap 

    priority_queue<int,vector<int>,greater<int>>pqr;

    cout<<pq.top();

    //set and multiset

    set<int>st;
    cout<<"from here there is set:- ";
    st.insert(110);
    st.insert(112);
    st.insert(111);

    auto ittt=st.find(112);
    cout<<*(ittt);

    multiset<int>mt; // order but not unique;
    mt.insert(11);
    mt.insert(11);
    mt.insert(11);

return 0;
}