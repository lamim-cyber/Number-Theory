#include <bits/stdc++.h>
#define BINGO ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl '\n'
#define gap ' '
using namespace std;

const int N = 1e6 + 9;
int divisors_cnt[N];

void num_of_divisors_for_every_number(int n){

        divisors_cnt[1] = 1;

        for(int i = 2 ; i <= n; i++){
            
            for(int j = i ; j <= n; j += i){
                divisors_cnt[j]++;
            }
        }

}

void solve()
{
    int n;
    cin>> n;
    num_of_divisors_for_every_number(n);

    for(int i = 1; i <= n; i++)cout<< divisors_cnt[i]<< gap;
    cout<< nl;
}

int main()
{
    BINGO
    solve();
}

//complexity nlogn + n
//jodi sum ber korte dey taholeo possible divisors+=i kore dilei enough

