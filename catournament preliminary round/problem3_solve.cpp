#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;
const int maxn = 1000005;
long long fak[maxn], infak[maxn];
long long modpow(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (int i = 0; i < M; i++)
        cin >> A[i];
    bool adaPasangan = false;
    for (int i = 0; i < M; i++)
    {
        if (A[i] >= 2)
        {
            adaPasangan = true;
            break;
        }
    }
    if (!adaPasangan)
    {
        cout << 1 << '\n';
        return 0;
    }
    fak[0] = 1;
    for (int i = 1; i <= N; i++)
        fak[i] = fak[i - 1] * i % mod;
    infak[N] = modpow(fak[N], mod - 2);
    for (int i = N - 1; i >= 0; i--)
        infak[i] = infak[i + 1] * (i + 1) % mod;
    long long ans = fak[N];
    for (int i = 0; i < M; i++)
    {
        ans = ans * infak[A[i]] % mod;
    }
    cout << ans << '\n';
}