#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> T(N);
    vector<int> K(N);

    vector<vector<int>> A(N);
    vector<bool> used(N, false);

    for (int i = 0; i < N; ++i)
    {
        cin >> T[i] >> K[i];
        for (int j = 0; j < K[i]; ++j)
        {
            int x;
            cin >> x;
            A[i].push_back(x - 1);
        }
    }

    used[N - 1] = true;
    long long ans = 0;
    for (int i = N - 1; i >= 0; --i)
    {
        if (used[i])
        {
            ans += T[i];
            for (int j = 0; j < K[i]; ++j)
            {
                used[A[i][j]] = true;
            }
        }
    }

    cout << ans << endl;
}