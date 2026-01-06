#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin >> c;
    vector<int> num;
    int number;
    for(int i{};i<c;i++){
        cin >> number;
        num.push_back(number);
    }
    int odd{}, even{};
    for(int i{};i<c;i++){
        if(num[i]%2==1){
            cout << num[i] << " ";
            odd++;
        }
    }
    cout << endl;

    for(int i{};i<c;i++){
        if(num[i]%2==0){
            cout << num[i] << " ";
            even++;
        }
    }

    cout << endl;

    if(even>=odd){
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}