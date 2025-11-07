#include <bits/stdc++.h>
#define BINGO ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl '\n'
#define gap ' '
using namespace std;

const int N = 1e6 + 9;
bool flag[N];

//if array size beshi boro hoye jay 

bitset<N> flag;
//evabe nileo hobe .. eki kaj kore 

vector<int> primes;

void sieve(int n){

        flag[1] = 1;
        
        for(int i = 2 ; i * i <= n; i++){
            if(flag[i]) continue;

            for(int j =i * i; j <= n; j += i){
                flag[j]=1;
            }
        }

        for(int i = 2; i <= n; i++){
            if(!flag[i])primes.push_back(i);
        }

        return primes;
}

void solve()
{
    int n;
    cin>> n;

    vector<int> v = sieve(n);

    for(auto x : v)cout<< x<< gap;

    cout<< nl;
}

int main()
{
    BINGO
    solve();
}

//complexity n + sqrt(n)logn
//generating prime numbers from 1 to n

