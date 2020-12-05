#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

const int sz= 1000;

int ar[sz], tree[4*sz];

template<typename T>
void build(T idx, T left, T right)
{
    if(left>right) return;

    if(left==right)
    {
        tree[idx]= ar[left];
        return;
    }

    int mid= (left+right)/2;
    build(2*idx, left, mid);
    build(2*idx+1, mid+1, right);

    tree[idx]= tree[2*idx]^tree[2*idx+1];
}

template<typename T>
T query(T idx, T ql, T qr, T sl, T sr)
{
    if(ql>sr || qr<sl || ql>qr || sl>sr)
        return 0;

    if(sl==ql && sr==qr)
        return tree[idx];

    int smid= (sl+sr)/2;

    T ls= query(2*idx, ql, min(mid, qr), sl, mid);
    T rs= query(2*idx+1, max(mid+1, ql), qr, mid+1, sr);

    return ls^rs;
}

template <typename T>
void update(T idx, const T val, const T pos, T l, T r)
{
    if(pos<l || pos>r)
        return;

    if(l==r)
    {
        tree[idx]= val;
        return;
    }
    T mid= (l+r)/2;
    update(2*idx, val, pos, l, mid);
    update(2*idx+1, val, pos, mid+1, r);
    tree[idx]= tree[2*idx]^tree[2*idx+1];
}

int main()
{
    int n= 8;
    cin>> n;
    for(int i=1; i<=n; i++)
        cin>> ar[i];

    build<int>(1, 1, n);
    int q=1;
    cin>> q;
    while(q--)
    {
        int l, r;
        cin>> l>> r;
        cout<< query<int>(1, l, r, 1, n)<<"\n";
        cout<< "Update? :";
        bool up;
        cin>> up;
        if(up)
        {
            int pos, val;
            cin>> val>> pos;
            update<int>(1, val, pos, 1, n);
        }
    }
}
