#include<bits/stdc++.h>
using namespace std;

/*** IO ***/
#define read()		freopen("in.txt", "r", stdin)
#define write()		freopen("out.txt", "w", stdout)
#define FastIO()	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pf(n)		printf("%d", n)
#define sc(n)		scanf("%d", &n)
#define SC(n)		scanf("%I64d", &n)
#define scc(n, m)	sscanf("%d %d", &n, &m)
#define SCC(n, m)	scanf("%I64d %I64d", &n, &m)
#define vanish		scanf("\n")

/*** STL ***/
#define pii	pair<int, int>
#define pll	pair<lng, lng>
#define vi	vector<int>
#define vl	vector<lng>

#define ALL(x)         x.begin(), x.end()
#define SZ(x)          x.size()
#define mp             make_pair
#define pb             push_back
#define ff             first
#define ss             second
#define found(v, k)    find(ALL(v), k)!=v.end()
#define nfound(v, k)   find(ALL(v), k)==v.end()
#define UB(v, k)       upper_bound(ALL(v), k)-v.begin()
#define LB(v, k)       lower_bound(ALL(v), k)-v.begin()
#define UNIQUE(V)      (V).erase(unique((V).begin(),(V).end()),(V).end())
#define itr_all(v,itr) for(__typeof((v).begin()) itr=(v).begin();itr!=(v).end();itr++)

/*** Bits ***/
#define on(n, pos)      (n | (1<<(pos)))
#define off(n, pos)     (n & ~(1<<(pos)))
#define check(n, pos)   (bool)(n & (1<<(pos)))
#define POPCOUNT        __builtin_popcountll
#define RIGHTMOST       __builtin_ctzll
#define LEFTMOST(x)     (63-__builtin_clzll((x)))

#define MS(x, v)	memset(&x, v, sizeof(x))
#define CL(x)		memset(&x, 0, sizeof(x))
#define ABS(x)		((x)<0?-(x):(x))
#define FABS(x)		((x)+eps<0?-(x):(x))
#define CASE(i)		printf("Case %d: ", i);

/*** Iteration ***/
#define Iterator(s)     for(typeof(s.begin()) it=s.begin(); it!=s.end(); it++)
#define repstl(it, xx)  for(auto it = xx.begin(); it != xx.end(); it++)
#define rrepstl(it, x)  for(auto it = x.rbegin(); it != x.rend(); it++)
#define For(i, k, n)    for (i=k; i<=n; i++)
#define rep(i, n)       for(i=0; i<n; i++)
#define rrep(i, n)      for (i=n-1; i>=0;i--)

/*** Direction Arrays ***/
int floodx[] = {1, -1, 0, 0};
int floody[] = {0, 0, 1, -1};
int kingx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int kingy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int knightx[] = {-2, -2, +2, +2, +1, -1, +1, -1};
int knighty[] = {+1, -1, +1, -1, -2, -2, +2, +2};

/*** Constants ***/
#define EPS     1e-9
#define PI      acos(-1.0)
#define inf     1 << 30 //0x3f3f3f3f 
#define INF	    1LL << 60;
#define DINF	(double)INF;
#define MAX	    2e18
#define MOD	    1000000007

#define lng	    long long
#define ulng	unsigned long long

#define segtree   int lft = node << 1; int rgt = lft | 1; int mid = (b + e) >> 1;
#define NUMDIGIT(x,y)			(((vlong)(log10((x))/log10((y))))+1)
#define DIST(x1,x2, y1, y2)		(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define DIST3D(x1,x2, y1, y2, z1, z2)	(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)) + ((z1-z2)*(z1-z2)))

/*** Methods ***/
bool iseq(double a, double b){return fabs(a-b)<EPS;}
template<class T> inline void IO(T &x){char c=getchar();T sgn=1;while(c<'0' || c>'9'){if (c=='-') sgn=-1;c=getchar();}x=0;while(c>='0' && c<='9'){x=(T)(x<<1)+(x<<3)+c-'0';c=getchar();}x*=sgn;}
template<class T> T POW(T b, T p){T res=1;while(p>0){if (p&1) res*=b;p >>= (1ll), b*=b;}return res;}
template<class T> T bMOD(T a, T p, T m){if (p==0) return (T) 1;if (!(p&1)){T temp=bMOD(a, p/2, m);return ((temp%m)*(temp%m))%m;}return ((a%m)*(bMOD(a, p-1, m)%m))%m;}
template<class T> T inMOD(T a, T m){return bMOD(a, m-2, m);}
template<class T> bool isPrime(T n){for(T i=2; i*i<=n; i++){if (n%i==0) return false;}return true;}
template<class T> string toString(T n){stringstream ss;string num;ss<<n;ss>>num;return num;}
template<class T> T sq(T n){return (n*n);}
template<class T> T gcd(T a, T b){return (b==0) ? a : gcd (b, a%b);}
template<class T> T lcm(T a, T b){return (a/gcd (a, b))*b;}
template<class T> T toDeg(T x){return (180.0*x)/((T)PI);}
template<class T> T toReg(T x){return (x*(T)PI)/(180.0);}


/*  
    Author	: Biprodas Roy  [ CSE, JUST. ]
    Problem	:  
    Algorithm 	:  
*/ 

int main(){
    //Solve problem here
    return 0;
}





