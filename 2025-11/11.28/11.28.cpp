#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {

    int N;
    while (cin >> N) {
        set<string> hasFriend;
        for (int i = 0; i < N; i++) {
            int K;
            cin >> K;
            if (K > 1) {
                for (int j = 0; j < K; j++) {
                    string id;
                    cin >> id;
                    hasFriend.insert(id);
                }
            } else {
                string dummy;
                cin >> dummy;
            }
        }

        int M;
        cin >> M;
        vector<string> queries(M);
        for (int i = 0; i < M; i++) {
            cin >> queries[i];
        }

        vector<string> result;
        set<string> printed;

        for (string id : queries) {
            if (hasFriend.find(id) == hasFriend.end() && printed.find(id) == printed.end()) {
                result.push_back(id);
                printed.insert(id);
            }
        }

        if (result.empty()) {
            cout << "No one is handsome\n";
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i > 0) cout << " ";
                cout << result[i];
            }
            cout << "\n";
        }
    }
    return 0;
}