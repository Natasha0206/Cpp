#include <iostream>
#include <algorithm>
 
using namespace std;
 
template <typename T> inline void inp (T &n) {
    n = 0;
    int ch = getchar_unlocked (), sign = 1;
    while (ch < '0' || ch > '9') {
        if (ch == '-') sign = -1;    // only if also negative integer
        ch = getchar_unlocked ();
    }
    while (ch >= '0' && ch <= '9')
        n = (n << 3) + (n << 1) + ch - '0', ch = getchar_unlocked ();
    n *= sign;   // only if also negative integer
}
 
inline int inp () {
    int n = 0;
    int ch = getchar_unlocked (), sign = 1;
    while (ch < '0' || ch > '9') {
        if (ch == '-') sign = -1;    // only if also negative integer
        ch = getchar_unlocked ();
    }
    while (ch >= '0' && ch <= '9')
        n = (n << 3) + (n << 1) + ch - '0', ch = getchar_unlocked ();
    n *= sign;   // only if also negative integer
    return n;
}
 
template <typename T> inline void puti (T n, char lc) {
    if (0 == n) {
        putchar_unlocked ('0');
        if (lc) putchar_unlocked (lc);
        return;
    }
    bool sign = false;
    if (n < 0) sign = true, n = -n;
    char s[20]; int rdi =-1;
    while (n) {
        s [++rdi] = '0' + n % 10;
        n /= 10;
    }
    if (sign) putchar_unlocked ('-');
    while (rdi >= 0) putchar_unlocked (s [rdi--]);
    if (lc) putchar_unlocked (lc);
}
 
inline void puts (string s) {
    for (char c : s) putchar_unlocked (c);
}
 
inline void inps (string &i) {
    i = "";
    char c = getchar_unlocked ();
    while (c < 32 or c > 127) c = getchar_unlocked ();
    while (c >= 32 and c <= 127) i += c, c = getchar_unlocked ();
}
 
inline string inps () {
    string i = "";
    char c = getchar_unlocked ();
    while (c < 32 or c > 127) c = getchar_unlocked ();
    while (c >= 32 and c <= 127) i += c, c = getchar_unlocked ();
    return i;
}
 
inline void inpc (char &c) {
    c = getchar_unlocked ();
    if (c == EOF) return;
    while (c < 32 or c > 127) c = getchar_unlocked ();
}
 
inline char inpc () {
    char c = getchar_unlocked ();
    if (c == EOF) return c;
    while (c < 32 or c > 127) c = getchar_unlocked ();
    return c;
}
 
int main() {
	/*ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);*/
    int t, n, i, ct, min_nr_rooms;
    inp (t);
    while (t--) {
        inp (n);
        int a [n], d [n];
        for (i = 0; i < n; i++) inp (a [i]);
        for (i = 0; i < n; i++) inp (d [i]);
        for (i = 0; i < n; i++) d [i] += a [i];
        sort (a, a + n); sort (d, d + n);
        i = 0; ct = 0; min_nr_rooms = 0;
        for (auto atime : a) {
            ct ++;
            while (i < n and atime >= d [i])
                ct--, i++;
            if (ct > min_nr_rooms) min_nr_rooms = ct;
        }
        puti (min_nr_rooms, '\n');
    }
    return 0;
}