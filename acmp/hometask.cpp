#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)

int main(){
    int sum{};
    int size; cin>>size;
    vector<int> vec;
    for(int i{};i<size;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    for(int i{};i<size;i++){
        if(vec[i]>0){
            sum+=vec[i];
        }
    }
    auto min = min_element(all(vec));
    auto max = max_element(all(vec));
    auto left=min;
    auto right=max;
    if(min>max) swap(left,right);
    
    int multy{1};
     for(auto i = left+1;i<right;++i){
        int temp = *i;
        multy*=temp;
    }   
    cout<<sum<<" "<<multy;
    return 0;
}
