#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"
#include <iostream>

#include "data-structure/UnionFindTree.hpp"

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    UnionFindTree uf(N);

    while (Q--) {
        int t, u, v;
        cin >> t >> u >> v;
        if (t == 0) {
            uf.unite(u, v);
        } else {
            cout << uf.isSame(u, v) << endl;
        }
    }
}