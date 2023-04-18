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

/*
Change below 3 functions depending on the implementation
This is the implementation of findinf the sum of the elements in a range
*/
int sum = 0;
vector<int> a;
void add(int i) {
    sum += a[i];
}

void remove(int i) {
    sum -= a[i];
}

int getAnswer() {
    return sum;
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

int main() {
    int n;cin >> n;//n is the number of elements in the array
    a.resize(n);
    for (int i = 0;i < n; ++i) cin >> a[i];
    int q;cin >> q;//q is the number of queries
    vector<Query> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i].l;
        cin >> queries[i].r;
        queries[i].id = i;
    }
    vector<int> ans = mosAlgorithm(queries);
    for (int i = 0; i < q; ++i) cout << ans[i] << "\n";//ans[i] is the answer of ith query
    return 0;
}
