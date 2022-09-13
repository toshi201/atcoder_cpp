#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<long long>> B(N, vector<long long>(M));
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> B[i][j];
            B[i][j] -= 1;
        }
    }

    vector<vector<int>> x(N, vector<int>(M)), y(N, vector<int>(M));

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            x[i][j] = (B[i][j] + 6) / 7;
            y[i][j] = (B[i][j] - 1) % 7 + 1;
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (i > 0 && x[i][j] != x[i - 1][j] + 1)
            {
                cout << "No";
                return 0;
            }

            if (j > 0 && y[i][j] != y[i][j - 1] + 1)
            {
            }
        }
    }
}