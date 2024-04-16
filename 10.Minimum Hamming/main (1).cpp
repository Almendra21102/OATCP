#include <iostream>
#include <vector>

using namespace std;

// function to calculate hamming distance
int inBetweenHamDist(vector<int>& v) {
    int ans = 0;
    for(int pos = 0; pos < 32; pos++) {
        int ones = 0, zeros = 0;
        for(int i = 0; i < v.size(); i++) {
            if((v[i] >> pos) & 1) {
                ones++;
            } else {
                zeros++;
            }
        }
        ans += ones * zeros;
    }
    return ans;
}

// driver code
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> v;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    int ans = inBetweenHamDist(v);
    cout << "Hamming Distance: " << ans << endl;

    return 0;
}
