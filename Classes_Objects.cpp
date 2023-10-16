#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
    int m[5];
    public: int s = 0;
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
        }
    }

    int calculateTotalScore()
    {
        for (int i = 0; i < 5; i++)
        {
            s = s + m[i];
        }

        return s;
    }
};