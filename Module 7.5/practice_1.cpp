#include <iostream>
#include <algorithm>
using namespace std;

class Students
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Students *st = new Students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].roll >> st[i].marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (st[i].marks < st[j].marks)
            {
                swap(st[i], st[j]);
            }
            else if (st[i].marks == st[j].marks && st[i].roll > st[j].roll)
            {
                swap(st[i], st[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }

    delete[] st;

    return 0;
}
