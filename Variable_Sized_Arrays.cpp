#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;

int main() {
    int *arr[100004], siz[100004];
    int n,q;
    int tot = 0;
    scanf("%d %d", &n, &q);
    assert(n >= 1 && n <= 100000 && q >= 1 && q <= 100000);
    for(int i = 0 ; i< n ; i++)
    {
        int num;
        scanf("%d", &num);
        assert(num >= 1 && num <= 300000);
        tot += num;
        siz[i] = num;
        arr[i] = (int*)malloc(num*sizeof(int));
        for(int j = 0 ; j < num; j++)
        {
            scanf("%d", &arr[i][j]);
            assert(arr[i][j] >= 0 && arr[i][j] <= 1000000);
        }
    }
    assert(tot >= 1 && tot <= 300000 && tot >= n);
    while(q--)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        assert(a >= 0 && a < n && b >= 0 && b < siz[a]);
        printf("%d\n", arr[a][b]);
    }
    return 0;
}