const int BLOCK_SIZE = 400;
struct Query{
    int l, r, id;
    bool operator < (Query &other) const {
        pair<int, int> p = {l / BLOCK_SIZE, r};
        pair<int, int> q = {other.l / BLOCK_SIZE, other.r};
        if (p.first != q.first) return p < q;
        return (p.first & 1) ? p.second < q.second: p.second > q.second;
    }
};

void add(int i) {
    
}

void remove(int i) {
    
}

void getAnswer() {
    
}

vector<int> mosAlgorithm(vector<Query> &queries) {
    vector<int> ans(queries.size());
    sort(queries.begin(), queries.end());
    
    int l = 0, r = -1;
    for (Query &q: queries) {
        while (l > q.l) {
            add(--l);
        }
        while (r < q.r) {
            add(++r);
        }
        while (l < q.l) {
            remove(l++);
        }
        while (r > q.r) {
            remove(r--);
        }
        ans[q.id] = getAnswer();
    }
    return ans;
}
