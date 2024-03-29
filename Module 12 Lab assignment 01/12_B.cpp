#include<bits/stdc++.h>

using namespace std;

struct queries
{
    long value, size;
    int price;
    queries *left, *right;
};

static const long MAX_N = 100000l;
static queries nodes[MAX_N];
static long values[MAX_N];

static long csize(queries *t)
{
    return t? t->size : 0;
}

static queries *cmerge(queries *l, queries *r)
{
    if (!l) return r;
    if (!r) return l;

    if (l->prio > r->prio)
    {
        l->right = cmerge(l->right, r);
        l->size = csize(l->left) + csize(l->right) + 1;
        return l;
    }
    r->left = cmerge(l, r->left);
    r->size = csize(r->left) + csize(r->right) + 1;
    return r;
}

static void csplit(queries *t, long idx,queries *&l,queries *&r)
{
    if (!t)
    {
        l = r = 0;
        return;
    }

    const long cur = csize(t->left) + 1;
    if (cur <= idx)
    {
        csplit(t->right, idx - cur, t->right, r);
        l = t;
    }
    else
    {
        csplit(t->left, idx, l, t->left);
        r = t;
    }
    t->size = csize(t->left) + csize(t->right) + 1;
}

static queries *cextract(queries *&t, long from, long to)
{
    queries *l, *m, *r;

    csplit(t, from, l, m);
    csplit(m, to - from, m, r);
    t = cmerge(l, r);
    return m;
}

static long traverse(queries *tree, long i)
{
    if (!tree)
        return i;

    i = traverse(tree->left, i);
    values[i++] = tree->value;
    return traverse(tree->right, i);
}

int main()
{
    srand(time(NULL));
    for (long i = 0; i != MAX_N; ++i)
    {
        nodes[i].prio = rand();
        nodes[i].size = 1;
    }

    long n, m;
    std::cin >> n >> m;

    queries *tree = 0;
    for (long i = 0; i != n; ++i)
    {
        std::cin >> nodes[i].value;
        tree = cmerge(tree, nodes + i);
    }

    for (long i = 0; i != m; ++i)
    {
        long l, r;
        int type;

        std::cin >> type >> l >> r;

        queries *sub = cextract(tree, l - 1, r);
        if (type == 1)
            tree = cmerge(sub, tree);
        else
            tree = cmerge(tree, sub);
    }

    traverse(tree, 0);
    std::cout << std::abs(values[0] - values[n - 1]) <<endl;
    for (long i = 0; i != n; ++i)
        std::cout << values[i] << " ";
    std::cout <<endl;


}