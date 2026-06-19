#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int ar[100005];

    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }

    int min_val = ar[0];
    int max_val = ar[0];
    long long sum = 0;

//////////////////////////////////////////////////////////////////

    for(int i = 0; i < n; i++){
        if(ar[i] < min_val) min_val = ar[i];
        if(ar[i] > max_val) max_val = ar[i];
        sum += ar[i];
    }

    long long x = 0;

    while(x == min_val || x == max_val || x == sum){
        x++;
    }

    cout << x << endl;
}