//THIS USES AN AI GENERATED BOILERPLATE CODE AVAILABLE PUBLICALLY IN THE PUBLIC GITHUB REPO
//REPO LINK : https://github.com/arushtakle/cpp_boilerplate_codeforces


#include <bits/stdc++.h>
using namespace std;

// --- Type Aliases ---
using ll   = long long;
using ld   = long double;
using pii  = pair<int, int>;
using pll  = pair<ll, ll>;
using vi   = vector<int>;
using vll  = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

// --- Macros ---
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x)    (x).begin(), (x).end()
#define rall(x)   (x).rbegin(), (x).rend()
#define sz(x)     ((int)(x).size())
#define pb        push_back
#define fi        first
#define se        second

// --- C++20 Custom Structured Binding Debugger ---
// This leverages C++20 variadic macros to cleanly inspect variables locally
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << H << (sizeof...(T) ? ", " : "");
    debug_out(T...);
}

// --- Constants ---
// C++20 allows std::numbers for math constants, but manual definition is safe
/*constexpr int INF = 1e9 + 7;
constexpr ll LINF = 1e18 + 9;
const ld PI = acos(-1.0);*/

// --- Core Logic ---
void solve() {
    
}

int main() {
    fast_io();

    // C++20 Likely/Unlikely attributes can be added if micro-optimizing logic,
    // but a standard conditional read loop works best here.
    int t = 1;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}