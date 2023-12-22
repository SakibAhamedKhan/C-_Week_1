// 1

// #include <bits/stdc++.h>

// using namespace std;

// int *fun()
// {
//     int *b = new int;
//     *b = 100;
//     cout << *b << endl;
//     return b;
// }

// int main()
// {

//     // int a;
//     // int *a = new int;
//     // cin >> *a;
//     // cout << *a << endl;
//     int *return_variable = fun();
//     cout << *return_variable << endl;
// }

// 2
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     // int arr[5];
//     int *arr = new int[5];

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     delete[] arr;
// }

// 3
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     // int arr[5];
//     int *arr = new int[5];
//     int *b = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//         b[i] = arr[i];
//     }
//     delete[] arr;

//     arr = new int[10];

//     for (int i = 0; i < 5; i++)
//     {
//         arr[i] = b[i];
//     }

//     for (int i = 5; i < 10; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// 4
#include <bits/stdc++.h>

using namespace std;

int *fun()
{
    int *a = new int[100];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *b = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
}
