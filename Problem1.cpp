// 1
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a = 100;
//     cout << "Hello world " << a;
// }

// 2
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a;
//     cin >> a;

//     cout << a;
// }

// 3
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a;

//     while (cin >> a)
//     {
//         cout << a << endl;
//     }
// }

// 4
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a;

//     cin >> a;

//     if (a > 100)
//     {
//         cout << "a is greater then 100\n";
//     }
//     else if (a == 100)
//     {
//         cout << "a is equal to 100\n";
//     }
//     else
//     {
//         cout << "a is less than 100\n";
//     }
// }

// 5
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a;

//     cin >> a;

//     switch (a)
//     {
//     case 1:
//         cout << "One";
//         break;
//     case 2:
//         cout << "Two";
//         break;
//     case 3:
//         cout << "Three";
//         break;
//     case 4:
//         cout << "Four";
//         break;
//     case 5:
//         cout << "Five";
//         break;
//     default:
//         cout << "a is greater than Five";
//         break;
//     }
// }

// 6
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a[5];

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// 7

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     char a[100];

//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cin >> a[i];
//     // }

//     cin >> a;

//     for (int i = 0; i < strlen(a); i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// 8
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int a = 10, b = 20;
//     int mx = max({50, 60, 30, 70, 90});
//     int mn = min({50, 60, 30, 70, 90});

//     // cout << "Max: " << mx << " Min: " << mn << endl;
//     swap(a, b);
//     // int tmp = a;
//     // a = b;
//     // b = tmp;
//     cout << a << " " << b;
// }

// 9
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a = 5;

    // if (a == 5)
    // {
    //     cout << "a is equal to 5";
    // }
    // else
    // {
    //     cout << "a is not equal to 5";
    // }
    (a == 5) ? (cout << "a is equal to 5") : (cout << "a is not equal to 5");
}