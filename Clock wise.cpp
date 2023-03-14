#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int mlaCount = count(s.begin(), s.end(), '1');
        int maxCount = 0, currCount = 0;

        // Count the number of contiguous MLAs
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                currCount++;
            } else {
                maxCount = max(maxCount, currCount);
                currCount = 0;
            }
        }
        maxCount = max(maxCount, currCount);

        // The minimum number of operations required is
        // the difference between the total number of MLAs
        // and the number of contiguous MLAs
        int minOps = mlaCount - maxCount;
        cout << minOps << endl;
    }

    return 0;
}
