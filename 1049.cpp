#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[100001];
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i] * i * (n - i + 1);
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}