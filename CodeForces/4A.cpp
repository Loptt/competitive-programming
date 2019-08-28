#include <cstdio> 
using namespace std;

int main() {
    int w;
    scanf("%d", &w);
    printf("%s\n", (w % 2 == 0 && w > 2) ? "YES" : "NO");
    return 0;
}