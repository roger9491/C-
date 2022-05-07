#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    sort(arr, arr + N);


    int even = 0;
    for (int j = 0; j < N; ++j)
    {
        if (arr[j] % 2 == 0)
        {
            even++;
        }
    }
    int new_arr[N] = {0}, e = 0, o = even;
    for (int k = 0; k < N; ++k)
    {
        if (arr[k] % 2 == 0)
        {
            new_arr[e] = arr[k];
            e++;
        }
        else
        {
            new_arr[o] = arr[k];
            o++;
        }

    }

    for (int k = 0; k < N; ++k)
    {
        cout << new_arr[k] << " ";
    }

    return 0;
}
