#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    printf("%lld\n", (long long) ceil((double) n / a) * (long long) ceil((double) m / a));
}