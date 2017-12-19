#include <iostream>

using namespace std;

auto fact(unsigned long long n) -> unsigned long long {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * fact(n-1);
}

auto main() -> int {
    unsigned long long n = 0;
    cout << "Enter n:" << endl;
    cin >> n;
    cout << fact(n) << endl;
}
