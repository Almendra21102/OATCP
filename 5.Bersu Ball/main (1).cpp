#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m;
    cout << "Enter the size of array a[]: ";
    cin >> n;

    long int a[n];
    cout << "Enter " << n << " integers for array a[]: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the size of array b[]: ";
    cin >> m;

    long int b[m];
    map<int, int> mp;
    cout << "Enter " << m << " integers for array b[]: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        mp[b[i]]++;
    }

    int cnt = 0;
    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mp[b[j]] < 1)
                continue;
            if (abs(a[i] - b[j]) <= 1) {
                cnt++;
                mp[b[j]]--;
                break;
            }
        }
    }

    cout << "Result: " << cnt % MOD << endl;

    return 0;
}

