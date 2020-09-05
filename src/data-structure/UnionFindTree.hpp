#pragma once
#include <algorithm>
#include <cstdint>
#include <numeric>
#include <vector>

struct UnionFindTree {
    std::vector<int32_t> par, sz;

    UnionFindTree(const int32_t n = 0) : par(n), sz(n, 1) {
        iota(par.begin(), par.end(), 0);
    }

    bool isRoot(const int32_t x) const {
        return par[x] == x;
    }

    int32_t find(const int32_t x) {
        return isRoot(x) ? x : (par[x] = find(par[x]));
    }

    void unite(int32_t x, int32_t y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        if (sz[x] < sz[y]) std::swap(x, y);
        sz[x] += sz[y];
        par[y] = x;
    }

    bool isSame(const int32_t x, const int32_t y) {
        return find(x) == find(y);
    }

    int32_t size(const int32_t x) {
        return sz[find(x)];
    }
};