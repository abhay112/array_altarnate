#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int y; cin >>y;
            v.push_back(y);
        }
        
        for(int i = 0; i < v.size(); i++){
            vector<int>::iterator x;
            int z = v[i];
            x = std::lower_bound(v.begin(), v.end(),20);
            cout << x - v.begin() << " ";
        }
        cout << endl;
        
        
    }
}