#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define BINGO ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define srt(v) sort(v.begin(), v.end());
#define rvs(v) reverse(v.begin(), v.end());
#define F first
#define S second
#define nl '\n'
#define gap ' '
using namespace std;

const int N = 1e6+9;

int spf[N];

void smallest_prime_factor(){
    for(int i = 2; i < N; i++)spf[i] = i;

    for(int i = 2; i < N; i++){
        if(spf[i] == i){
          for(int j = i; j < N; j += i){
            spf[j] = min(spf[i] , spf[j]);
        }
        } 
    }
}

// calculates the smallest prime factor for all the nuumbers

int greatest_prime_factor(int n){
    int res = -1;

    while(n > 1){
        int k = spf[n];
        res = max(k , res);
        n /= k; 
    }
    return res;
}

int distinct_prime_factor(int n){
    int cnt = 0;
    while(n > 1){
        int k = spf[n];
        cnt++;
        while(n % k == 0){
            n /= k;
        }
    }
    return cnt ;
}

int total_prime_factors(int n){
    int cnt = 0;
    while(n > 1){
        int k = spf[n];
        while(n % k == 0){
            cnt++;
            n /= k;
        }
    }
    return cnt ;
}

int number_of_divisors(int n){
    int nod = 1;
    while(n > 1){
        int k = spf[n];
        int cnt = 0;
        while(n % k == 0){
            cnt++;
            n /= k;
        }
        nod *= (cnt + 1);
    }
    return nod;
}

long long sum_of_divisors(int n){
    int sod = 1;
    while(n > 1){
        int k = spf[n];
        int power = 1;
        while(n % k == 0){
            power *= k;
            n /= k;
        }
        sod *= (1LL * power * k - 1) / (k - 1);
    }
    return sod;
}

void solve(int test)
{
    int n;
    cin >> n;

    cout<< spf[n]<< gap;
    cout<< greatest_prime_factor(n)<< gap;
    cout<< distinct_prime_factor(n) << gap;
    cout<< total_prime_factors(n) << gap;
    cout<< number_of_divisors(n) << gap;
    cout<< sum_of_divisors(n) << gap<< nl;
}

int main()
{
    BINGO
    smallest_prime_factor();
    int test=1;
    cin >> test;
    for(int i=1; i<=test; i++)
        solve(i);

}
// here everything is based on prime factorization and smallest prime factor.. and much optimized..

