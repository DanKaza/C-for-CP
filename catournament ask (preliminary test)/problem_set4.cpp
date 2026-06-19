#include <bits/stdc++.h>
using namespace std;
// simulasi ship war 
bool shot[11][11];
bool ship[11][11]; // simulator kapal

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // =========================
    // SIMULATOR (buat testing)
    // =========================
    int hit_count = 0;
    // =========================
    // SOLVER (logika kamu)
    // =========================
    for (int i = 1; i <= 10; i++) {
        for (int j = (i % 2 == 1 ? 1 : 2); j <= 10; j += 2) {

            if (shot[i][j]) continue;

            cout << "Shoot: " << i << " " << j << endl;

            int res = ship[i][j]; // ganti cin >> res;

            cout << "Result: " << res << endl;

            shot[i][j] = true;

            if (res == 1) {
                hit_count++;

                int dx[4] = {0, 0, 1, -1};
                int dy[4] = {1, -1, 0, 0};

                for (int d = 0; d < 4; d++) {
                    int x = i + dx[d];
                    int y = j + dy[d];

                    while (x >= 1 && x <= 10 && y >= 1 && y <= 10 && !shot[x][y]) {

                        cout << "Shoot: " << x << " " << y << endl;

                        res = ship[x][y];

                        cout << "Result: " << res << endl;

                        shot[x][y] = true;

                        if (res == 1) {
                            hit_count++;
                            if (hit_count == 5) {
                                cout << "Kapal tenggelam!\n";
                                return 0;
                            }
                        } else {
                            break;
                        }

                        x += dx[d];
                        y += dy[d];
                    }
                }
            }

            if (hit_count == 5) {
                cout << "Kapal tenggelam!\n";
                return 0;
            }
        }
    }

    return 0;
}