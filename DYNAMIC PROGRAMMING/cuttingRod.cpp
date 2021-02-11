//Corte de Hastes (Cutting Rod) só é possível com problemas que tem estrutura ótima e são sobrepostos
#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

int values[MAX];
int memo[MAX];

int naive (int n){          //ingênua
    if (n==0){
        return 0;
    }else{
        int best = INT_MIN;
        for (int i=0; i<n; ++i){
            best = max(best, values[i] + naive(n-i-1));
        }
        return best;
    }
}

int topdown_dp (int n){           // 2^n -> O(n²) de cima para baixo
    if (memo[n] != -1){
        return memo[n];
    }
    if (n==0){
        memo[n] = 0;
    }else{
        int best = INT_MIN;
        for (int i=0; i<n; ++i){
            best = max(best, values[i] + topdown_dp(n-i-1));
        }
        memo[n] = best;
    }
    return memo[n];
}

int bottomup_dp (int n){ //2^n -> O(n²) de baixo para cima  - Um pouco mais rápida que a topdown por usar menos empilhamentos recursivos, mas não polinomialmente mais rápida
    int best = INT_MIN;
    memo[0] = 0;
    for (int j = 1; j<=n; ++j){
        for (int i=0; i < j; ++i){
            best = max(best, values[i] + memo[j-i-1]);
        }
        memo[j] = best;
    }
    return memo[n];
}

int main(){
    int n;
    scanf("%d", &n);
    while (n){
        for (int i=0; i < n; ++i){
            scanf("%d", &values[i]);
        }
        memset( memo, -1, sizeof memo);
        printf("%d\n", topdown_dp(n));
        printf("%d\n", bottomup_dp(n));
        printf("%d\n", naive(n));
        scanf("%d", &n);
    }
    return 0;
}
