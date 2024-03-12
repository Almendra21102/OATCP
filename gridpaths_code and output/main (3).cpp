#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    cin >> n;
    vector<string> grid(n);
    
    for (long long int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    vector<long long int> dp(n + 1, 0);
    dp[0] = 1;

    long long int i = 0, j = 0;
    do {
        do {
            if (grid[i][j] != '*') {
                if (j > 0 && grid[i][j - 1] != '*') {
                    dp[j] = (dp[j] + dp[j - 1]) % MOD;
                }
            } else {
                dp[j] = 0;
            }
            j++;
        } while (j < n);
        i++;
        j = 0;
    } while (i < n);

    cout << ((grid[n - 1][n - 1] == '.' && n > 0) ? dp[n - 1] : -1) << endl;

    return 0;
}
