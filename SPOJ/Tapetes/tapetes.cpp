#include <iostream>
using namespace std;

int main() {
    long long int l, n, maiorSoma, maiorTapete;

    scanf("%lld %lld", &l, &n);

    maiorTapete = l - (n - 1);
    maiorSoma = (maiorTapete * maiorTapete) + (n - 1);

    printf("%lld\n", maiorSoma);

    return 0;
}