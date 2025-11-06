//Smallest prime factor

long long smallest_prime_factor(long long n){
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            return i;
        }
    }
    return n; // jodi SQRT a kichu diye vag na jay tar mane n nijei prime 
}
// 1 er prothom jei number diye vag jabe oitai amr smallest prime factor

//Greatest prime factor

long long greatest_prime_factor(long long n){
    long long res = 1;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            res = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)res = n; // jodi n baki thake tahole oita largest prime factor
    return res;
}
//ekdom shob cheye sheshe jare diye vag jabe she hobe largest prime factor

//Number of distinct prime factor

long long number_of_distinct_prime(long long n){
    long long cnt = 0;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)cnt++;
    return cnt;
}

//Total number of prime factors

int total_number_of_prime_factors(long long n){
    int cnt = 0;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                cnt++;
                n /= i;
            }
        }
    }
    if(n > 1)cnt++;
    return cnt;
}

//Number of divisors

long long number_of_divisors(long long n){
    long long cnt = 0;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(n / i != i)cnt++;
        }
    }
    return cnt ;
}

//Sum of divisors

long long sum_of_divisors(long long  n){
    long long  sum = 0;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            sum += i;
            if(n / i != i)sum += n / i;
        }
    }
    return sum ;
}

//here all are SQRT solution just to learn the basics and if the consraint is low ..



