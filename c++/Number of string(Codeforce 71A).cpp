#include <iostream>
using namespace std;
int main()
{
    int K;
    cin >> K;
    while (K--)
    {
        string S, ans;
        cin >> S;
        int n = S.size(),o=0;
        if (n <= 10)
        {
            cout << S << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                o++;
            }
            cout<<S[0]<<o-2<<S[n-1]<<endl;
        }
    }
}
