#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string S, T;
    cin >> S >> T;

    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    string gh = "", hi = "";

    
    for (int i = 0; i < n; i++) {
        gh += S[i];
        gh += T[i];
    }

    for (int i = 0; i < n; i++) {
        hi += T[i];
        hi += S[i];
    }

  
    if (gh < hi) cout << gh;
    else cout << hi;

    return 0;
}