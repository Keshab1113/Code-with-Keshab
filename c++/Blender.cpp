#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        if (n == 0) cout << 0 << endl;
        int ans = min(x, y);
        double result = ceil(static_cast<double>(n) / ans);
        cout << result << endl;
    }
    return 0;
}
