#include<bits/stdc++.h>
using namespace std;

struct line {
    int time;
    int num;
};

bool cmp(line x, line y) {
    return x.time < y.time;
}

int main() {
    int n;
    cin >> n;
    vector<line> a(n);
    vector<line> b(n);
    
    vector<int> orig_a(n+1), orig_b(n+1);

    for(int i = 0; i < n; i++) {
        cin >> a[i].time;
        orig_a[i+1] = a[i].time;
        a[i].num = i + 1;
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i].time;
        orig_b[i+1] = b[i].time;
        b[i].num = i + 1;
    }

    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp);
    int n_a = 0, n_b = 0;
    vector<int> nums(n+1, 1);
    vector<int> res(n);
    int r=n-1;
    int l=0;
    int cnt=0;
    while (cnt < n) {
        while (n_a < n && !nums[a[n_a].num]) {
            n_a++;
        }
        while (n_b < n && !nums[b[n_b].num]) {
            n_b++;
        }

        if (n_a < n && (n_b >= n || a[n_a].time < b[n_b].time)) {
            res[l++]=a[n_a].num;
            nums[a[n_a].num] = 0;
            n_a++;
            cnt++;
        } else if (n_b < n && (n_a >= n || a[n_a].time >= b[n_b].time)) {
            res[r--]=b[n_b].num;
            nums[b[n_b].num] = 0;
            cnt++;
            n_b++;
        }
    }

    int time_a = 0, time_b = 0;
    for(int i=0;i<n;i++)
    {
        int t=res[i];    
        time_a += orig_a[t]; 
        time_b = max(time_a, time_b) + orig_b[t]; 
    }

    cout << time_b << "\n";
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
