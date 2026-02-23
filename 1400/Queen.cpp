#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> children(n + 1);
    vector<int> c(n + 1);
    int root = -1;
  
    // Read input and build tree
    for (int i = 1; i <= n; i++) {
        int parent;
        cin >> parent >> c[i];

        if (parent == -1) {
            root = i;
        } else {
            children[parent].push_back(i);
        }
    }

    vector<int> deletable;
    // Check which nodes can be deleted
    for (int i = 1; i <= n; i++) {
        if (i == root || c[i] == 0) continue;
      
        bool valid = true;
        for (int child : children[i]) {
            if (c[child] == 0) {
                valid = false;
                break;
            }
        }

        if (valid) {
            deletable.push_back(i);
        }
    }
  
    if (deletable.empty()) {
        cout << -1 << "\n";
        return;
    }

    for (int node : deletable) {
        cout << node << " ";
    }
}

int main() {
    solve();
    return 0;
}
