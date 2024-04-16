#include <iostream>
#include <vector>

using namespace std;

int count_subgrid(vector<vector<int>>& color) {
    int n = color.size();
    int subgrids = 0;
    for(int a = 0; a < n; a++) {
        for(int b = a+1; b < n; b++) { 
            int count = 0;
            for(int i = 0; i < n; i++) { 
                if (color[a][i] == 1 && color[b][i] == 1) {
                    count++;
                }
            }
            subgrids += ((count-1) * count)/2;
        }
    }
    return subgrids;
}

int main() {
    int n;
    cout << "Enter the size of the grid: ";
    cin >> n;
    
    vector<vector<int>> v(n, vector<int>(n, 0));
    cout << "Enter the elements of the grid (0 or 1):" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    
    int subgrids = count_subgrid(v);
    cout << "Number of subgrids with same color in both rows: " << subgrids << endl;

    return 0;
}
