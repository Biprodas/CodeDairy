
#define lng long long
/*** Function Prototypes ***
lng pow(lng b, lng p);
lng modPow(lng b, lng p, lng mod); // (b^p)%mod;
lng modInverse(lng m); //n an m are relatively prime
lng gcd(lng a, lng b);
lng lcm(lng a, lng b)
string toLower(string sss);
string toUpper(string sss);
string toString(long long xx);
lng toInt(string xyz);
lng revint(long long nn);
bool is_pal(string sss);
bool is_pal(long long xx); 
*/

/*** Function Bodies ***/

vector<string>Split(string s ){
    vector<string>ret;
    istringstream ss(s) ;
    string token ;
    while(ss >> token) ret.pb( token ) ;
    return ret;
}

string toString(lng xx){
    string r = "";
    while(xx){
        r = (char)(xx % 10 + 48) + r;
        xx /= 10;
    }
    return r;
}
lng toInt(string s){
    return atoll(s.c_str());
}
string toLower(string s){
    for(int i=s.size()-1; i >= 0; --i)
        s[i]= s[i] >= 'A' && s[i] <= 'Z' ? s[i] + 32 : s[i];
    return s;
}
string toUpper(string s){
    for(int i=s.size()-1; i >= 0; --i)
	s[i]= s[i] >= 'a' && s[i] <= 'z' ? s[i] - 32 : s[i];
    return sss;
}
lng bigMod(lng x, lng n){
    if(n == 0) return 1;
    lng ret = bigMod(x, n >> 1); //n= n/2
    if(n & 1) return (((ret % M) * (ret % M))%M * (x % M)) % M; //n is odd
    return ((ret % M) * (ret % M)) % M; //n is even
}
pii extendedEuclid(int a, int b) { // returns x, y | ax + by = gcd(a,b)
    if(b == 0) return pii(1, 0);
    else{
        pii d = extendedEuclid(b, a % b);
        int x= d.second;
        int y= d.first - d.second * (a / b);
        return pii(x, y);
    }
}
int modInverse(int A, int M){
    pii mi= extendedEuclid(A, M);
    int x= mi.first;
    return (x % M + M) % M;    //x may be negative
}
lng Pow(lng b, lng p){
    if(p == 0) return 1;
    lng t = Pow(b, p >> 1);
    if(p & 1) return t * t * b;
    return t * t;
}
lng toInt(string s){ return atoll(s.c_str());}
lng revInt(lng n){
    lng r = 0;
    while(n){
        r= r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
bool isPalindrome(string ss){
    for(lng i=0, j=ss.size()-1; i<j; ++i, --j)
        if(ss[i] != ss[j])
            return false;
    return true;
}
bool isPalindrome(lng xx){
    lng rr = 0, tt = xx;
    while(xx){
        rr = rr * 10 + xx % 10;
        xx /= 10;
    }
    return rr == tt;
}
lng gcd(lng a, lng b){ return b == 0 ? a : gcd(b, a % b);}

lng lcm(lng a, lng b){return a / gcd(a, b) * b;}

/*** Function Bodies End here ***/
