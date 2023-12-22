// 1

// #include <bits/stdc++.h>

// using namespace std;

// class Student
// {
// public:
//     char name[50];
//     int cls;
//     int roll;
// };

// int main()
// {
//     // char rakib_name[50], akib_name[50], rahim_name[50];
//     // int rakib_class, akib_class, rahim_class;
//     // int rakib_roll, akib_roll, rahim_roll;

//     // cin >> rakib_name >> rakib_class >> rakib_roll;
//     // cin >> akib_name >> akib_class >> akib_roll;
//     // cin >> rahim_name >> rahim_class >> rahim_roll;

//     // cout << rakib_name << " " << rakib_class << " " << rakib_roll << endl;

//     Student obj[1000];
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> obj[i].name >> obj[i].cls >> obj[i].roll;
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         cout << obj[i].name << " " << obj[i].cls << " " << obj[i].roll << endl;
//     }
// }

// 2
// #include <bits/stdc++.h>

// using namespace std;

// class Student
// {
// public:
//     char name[50];
//     int cls;
//     int roll;
//     Student(char name[], int cls, int roll)
//     {
//         strcpy(this->name, name);
//         this->cls = cls;
//         this->roll = roll;
//     }
// };

// int main()
// {
//     Student obj1("Rakib", 5, 12);
//     Student obj2("Akib", 5, 18);

//     cout << obj1.name << " " << obj1.cls << endl;
//     cout << obj2.name << " " << obj2.cls;
// }

// 3
// #include <bits/stdc++.h>

// using namespace std;

// class Student
// {
// public:
//     char name[50];
//     int cls;
//     int roll;
//     Student(char name[], int cls, int roll)
//     {
//         strcpy(this->name, name);
//         this->cls = cls;
//         this->roll = roll;
//     }
// };

// int main()
// {
//     Student obj1("Rakib", 5, 12);
//     // Student obj2("Akib", 5, 18);
//     Student *obj2 = new Student("TAkib", 5, 18);

//     cout << obj1.name << " " << obj1.cls << endl;
//     cout << obj2->name << " " << obj2->cls;
// }

// 4
// #include <bits/stdc++.h>

// using namespace std;

// class Student
// {
// public:
//     char name[50];
//     int cls;
//     int roll;
//     Student(char name[], int cls, int roll)
//     {
//         strcpy(this->name, name);
//         this->cls = cls;
//         this->roll = roll;
//     }
// };

// Student *fun()
// {
//     Student *b = new Student("Rahim", 5, 18);
//     return b;
// }

// int main()
// {

//     Student *a = fun();

//     cout << a->name << " " << a->cls;
// }

// 5
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // sort(arr, arr + 5); // asending
    sort(arr, arr + 5, greater<int>()); // desending
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}