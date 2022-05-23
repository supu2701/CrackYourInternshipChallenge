#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> coins;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        coins.push_back(x);

    }

    sort(coins.begin(),coins.end());

    //defining prefix sum
    
    for(int i=1;i<n;i++){
        coins[i]+=coins[i-1];

    }

    int ks;
    cin >> ks;

   
    
    for(int i=0;i<ks;i++){
        int k;
        cin >> k;
        int count= ceil((1.0*n)/(k+1));
        cout << coins[count-1] << " "; 

        
        

    }
    cout << endl;


    return 0;

}