#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000007

int main() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= 6 && i - j >= 0) {
            dp[i] += dp[i - j];
            dp[i] %= MOD;
            j++;
        }
        i++;
    }

    cout << dp[n] << endl;
    return 0;
}

