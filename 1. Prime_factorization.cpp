#include <bits/stdc++.h>
#define ll long long
#define BINGO ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl '\n'
#define gap ' '
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v;

    for(int i=2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                v.push_back(i);
                n /= i; 
            }
        }
    }

    if(n > 1)v.push_back(n); // 1 er theke boro theke gele sure shot ekta prime ei karonei theke gese

    for(auto x : v)cout<< x << gap;

    cout<< nl;
}

int main()
{
    BINGO

    int test=1;
    //cin>> test;

    for(int i=1; i<=test; i++)
        solve();

}

