#include <iostream>
#include <vector>
using namespace std;

int reverse(int x)
{
    bool flag = true;
    if (x < 0)
    {
        flag = false;
        x *= -1;
    }
    long long ans = 0;
    while (x > 0)
    {
        ans *= 10;
        ans += x % 10;
        x /= 10;
    }
    if (INT_MIN < ans < INT_MAX)
    {
        if (flag == false)
        {
            return (ans * -1);
        }
        else
        {
            return ans;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << reverse(1534236469) << endl;
}