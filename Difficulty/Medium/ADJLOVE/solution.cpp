#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace std::chrono;
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;
typedef int64_t ll;
typedef uint64_t ull; 
typedef unsigned uint;
typedef long double lld;

#define inf     (int) 2e9
#define INF     (ll) 2e18
#define cnl     putchar('\n')
#define nl      '\n'
#define yes     cout << "YES\n"
#define no      cout << "NO\n"
#define eb      emplace_back    
#define PB      push_back
#define umap    unordered_map
#define uset    unordered_set
#define F       first
#define S       second
#define fast            ios_base::sync_with_stdio(0),cin.tie(0);
#define ITR1(it,c)      for(typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define REVITR(it,c)    for(typeof(c.rbegin()) it = c.rbegin(); it != c.rend(); it++)
#define ITR(it,ct)      for(auto it:ct)
#define PR(ct)          ITR(it,ct)_print(it);
#define allr(c)         (c).rbegin(),(c).rend()
#define all(c)          (c).begin(),(c).end()
#define dsort(v)        sort(all(v), greater<int>())
#define asort(v)        sort(all(v))
#define ptc(c)          putchar(c)
void _print(int t){cerr<<t<<" ";}void _print(string t){cerr<<t<<" ";}
void _print(char t){cerr<<t<<" ";}void _print(lld t) {cerr<<t<<" ";}
void _print(double t){cerr<<t<<" ";}void _print(ull t) {cerr<<t<<" ";}
void _print(ll t){cerr<<t<<" ";}void _print(bool t) {cerr<<t<<" ";}
template <class T, class V> void _print(pair<T, V> p){cerr << "{ "; _print(p.F);cerr <<',';_print(p.S);cerr << '}';}
template <class T> void _print(vector<T> v){cerr << "[ ";PR(v);cerr << "]";}
template <class T> void _print(set<T> v) {cerr << "[ ";PR(v);cerr << "]";}
template <class T> void _print(multiset<T> v){cerr << "[ ";PR(v);cerr << "]";}
template <class T, class V> void _print(map<T, V> v){cerr << "[ ";PR(v);cerr << "]";}
template <class T> T ceil(T nm, T dn) {return (nm+dn-1)/dn;}
template <class T> T gcd(T a, T b){if (b==0)return a; return gcd(b,a%b);}
int inline in(){int x=0,c;for(;(uint)((c=getchar())-'0')>=10;)
{if(c=='-')return -in();if(!~c)throw ~0;}do{x=(x<<3)+(x<<1)+(c-'0');}while((uint)((c=getchar())-'0')<10);return x;}
ll inline inll(){ ll x=0,c;for(;(uint)((c=getchar())-'0')>=10;)
{if(c=='-')return -inll();if(!~c)throw ~0;}do{x=(x<<3)+(x<<1)+(c-'0');}while((uint)((c=getchar())-'0')<10);return x;}
#define flogll(n)        (int)(63^__builtin_clzll(n))
#define flog(n)          (int)(31^__builtin_clz(n))
#define mset(m, v)       memset(m, v, sizeof(m))
#define debug(a)         cerr << #a << ": " << a << ' ';
#define ask(x,y)         cout<<"? "<<x<<" "<<y<<endl; 
#define ii      int,int
typedef vector<int> vi;
typedef vector<ll>  vl;
typedef pair<ii>    pii;
typedef vector<pii> vpii;
typedef vector<vi>  vvi;
typedef map<ii>     mpii;
// typedef tree< pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#define maxa(cont,val)  if(cont<val)cont=val
#define mina(cont,val)  if(cont>val)cont=val
#define rep(i,n)        for(__typeof(n) i=0;  i<n; ++i )
#define rep1(i,n)       for(__typeof(n) i=1;  i<=n;++i)
#define rrep(i,n)       for(__typeof(n) i=n-1;i>=0;--i)
#define rrep1(i,n)      for(__typeof(n) i=n;  i>=1;--i)
#define myrrep(i,b,a)   for(__typeof(a) i=b;  i>=a;--i)
#define myrep(i,a,b)    for(__typeof(a) i=a;  i<b;i++)
#define readar(a, n)    rep(i,n)a[i]=in();
#define printar(a, n)   rep(i,n){cout<<a[i]<<" ";}cout<<nl;
#define has(stor,val)   (stor.find(val)!=stor.end())
#define MOD 998244353
#define MAX 100003
#define u32 uint32_t
#define deb cout<<"test"<<nl;
static constexpr uint32_t ups[] = {
        (1U << 0),  (1U << 1) ,  (1U << 2), (1U << 3) ,  (1U << 4), (1U << 5) ,
        (1U << 6),  (1U << 7) ,  (1U << 8), (1U << 9) , (1U << 10), (1U << 11),
        (1U << 12), (1U << 13), (1U << 14), (1U << 15), (1U << 16), (1U << 17),
        (1U << 18), (1U << 19), (1U << 20), (1U << 21), (1U << 22), (1U << 23),
        (1U << 24), (1U << 25), (1U << 26), (1U << 27), (1U << 28), (1U << 29),
        (1U << 30), (1U << 31)};

// static constexpr uint32_t all_mask = -1U;
// static constexpr uint32_t masks[] = {
//         (1U << 0) - 1,  (1U << 1) - 1,  (1U << 2) - 1, (1U << 3) - 1,  (1U << 4) - 1,  (1U << 5) - 1,
//         (1U << 6) - 1,  (1U << 7) - 1,  (1U << 8) - 1, (1U << 9) - 1,  (1U << 10) - 1, (1U << 11) - 1,
//         (1U << 12) - 1, (1U << 13) - 1, (1U << 14) - 1, (1U << 15) - 1, (1U << 16) - 1, (1U << 17) - 1,
//         (1U << 18) - 1, (1U << 19) - 1, (1U << 20) - 1, (1U << 21) - 1, (1U << 22) - 1, (1U << 23) - 1,
//         (1U << 24) - 1, (1U << 25) - 1, (1U << 26) - 1, (1U << 27) - 1, (1U << 28) - 1, (1U << 29) - 1,
//         (1U << 30) - 1, (1U << 31) - 1, -1U};
 // vector<int> primes{3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1009, 1013, 1019, 1021, 1031, 1033, 1039, 1049, 1051, 1061, 1063, 1069, 1087, 1091, 1093, 1097, 1103, 1109, 1117, 1123, 1129, 1151, 1153, 1163, 1171, 1181, 1187, 1193, 1201, 1213, 1217, 1223, 1229, 1231, 1237, 1249, 1259, 1277, 1279, 1283, 1289, 1291, 1297, 1301, 1303, 1307, 1319, 1321, 1327, 1361, 1367, 1373, 1381, 1399, 1409, 1423, 1427, 1429, 1433, 1439, 1447, 1451, 1453, 1459, 1471, 1481, 1483, 1487, 1489, 1493, 1499, 1511, 1523, 1531, 1543, 1549, 1553, 1559, 1567, 1571, 1579, 1583, 1597, 1601, 1607, 1609, 1613, 1619, 1621, 1627, 1637, 1657, 1663, 1667, 1669, 1693, 1697, 1699, 1709, 1721, 1723, 1733, 1741, 1747, 1753, 1759, 1777, 1783, 1787, 1789, 1801, 1811, 1823, 1831, 1847, 1861, 1867, 1871, 1873, 1877, 1879, 1889, 1901, 1907, 1913, 1931, 1933, 1949, 1951, 1973, 1979, 1987, 1993, 1997, 1999, 2003, 2011, 2017, 2027, 2029, 2039, 2053, 2063, 2069, 2081, 2083, 2087, 2089, 2099, 2111, 2113, 2129, 2131, 2137, 2141, 2143, 2153, 2161, 2179, 2203, 2207, 2213, 2221, 2237, 2239, 2243, 2251, 2267, 2269, 2273, 2281, 2287, 2293, 2297, 2309, 2311, 2333, 2339, 2341, 2347, 2351, 2357, 2371, 2377, 2381, 2383, 2389, 2393, 2399, 2411, 2417, 2423, 2437, 2441, 2447, 2459, 2467, 2473, 2477, 2503, 2521, 2531, 2539, 2543, 2549, 2551, 2557, 2579, 2591, 2593, 2609, 2617, 2621, 2633, 2647, 2657, 2659, 2663, 2671, 2677, 2683, 2687, 2689, 2693, 2699, 2707, 2711, 2713, 2719, 2729, 2731, 2741, 2749, 2753, 2767, 2777, 2789, 2791, 2797, 2801, 2803, 2819, 2833, 2837, 2843, 2851, 2857, 2861, 2879, 2887, 2897, 2903, 2909, 2917, 2927, 2939, 2953, 2957, 2963, 2969, 2971, 2999};



bool solve()
{
    int  n=in(),x=0,y=0;
    while(n>0)
    {
        if(n&1)x++;
        else y++;
        n/=10;
    }
    if(y>1 && y%2==0) return true;

    if(x>1 && x%2==0) return true;
    return false;
}
void sol()
{
    int n=in(),ev[n],se=0,od[n],so=0;
    rep(i,n)
    {
        int x=in();
        if(x&1)od[so++]=x;
        else ev[se++]=x;
    }
    if(so<=1)
    {
         cout<<"-1\n";return;
    }
    if(se==0 && so&1) {
        cout<<"-1\n";return;
    }
    if(so&1)
    {
       
        rep(i,so-1) cout<<od[i]<<" ";
          rep(i,se) cout<<ev[i]<<" ";

          cout<<od[so-1]<<nl;
          return;
    }
    
   rep(i,se) cout<<ev[i]<<" ";
    rep(i,so) cout<<od[i]<<" ";
    cout<<nl;
}

int main()
{

	int o=in();
    // int o;cin>>o;
	while(o--)
	{
		// cout<<(solve()?"YES\n":"NO\n");
        // if(solve())cout<<"NO\n";

    sol();
		// cout<<solve()<<nl;
	}

//   auto start = chrono::steady_clock::now();
// auto end = chrono::steady_clock::now();
// auto diff = end - start;
// cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;
	return 0;
}