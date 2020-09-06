#define PROBLEM "https://judge.yosupo.jp/problem/zalgorithm"
#include <bits/stdc++.h>

#include "string/zalgorithm.hpp"

using namespace std;

int main() {
    string S;
    cin >> S;
    auto a = zalgorithm(S);
    for (int i = 0; i < S.size(); i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;
}