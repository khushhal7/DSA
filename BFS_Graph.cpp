#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> list[10]={{1,3,4},
    {1,7},
    {1,6},
    {1,5},
    {4,6,7},
    {3,10,5},
    {5,8},
    {7,9},
    {8},
    {6}};

    int vis[11] = {0};
    vector<int> ans;
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it: list[node]){
            if(vis[it]==0){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}