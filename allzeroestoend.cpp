#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v = { 0, 6, 0, 7, 6, 0, 9, 1 };
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}