#include <cstdio>
#include <vector>
#include <algorithm>

#define all(v) (v).begin(), (v).end()
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector <int> A(n);

    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    sort(all(A));

    vector <int> is_square(1e6 + 1, false);
    for(int i = 0; i*i <= 1e6; i++)
        is_square[i*i] = true;

    int answer;

    for(int i = n - 1; i >= 0; i--)
    {
        if(A[i] < 0 || !is_square[A[i]])
        {
            answer = A[i];
            break;
        }
    }


    printf("%d ", answer);

    return 0;
}
