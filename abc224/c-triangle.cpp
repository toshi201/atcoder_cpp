#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> X(N);

    for (auto &x : X)
    {
        cin >> x.first >> x.second;
    }

    int count = 0;
    for (int i = 0; i < N - 2; ++i)
    {
        for (int j = i + 1; j < N - 1; ++j)
        {
            for (int k = j + 1; k < N; ++k)
            {

                if (X[i][0] == X[j][0])
                {
                    if (X[i][0] == X[k][0])
                    {
                        if (X[j][0] == X[k][0])
                        {
                            break;
                        }
                    }
                }

                int a = (int)(X[i][1] - X[j][1]) / (int)(X[i][0] - X[j][0]);
                int b = (int)(X[k][1] - X[j][1]) / (int)(X[k][0] - X[j][0]);
                if (a == b)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}