#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long int result = 0;
        if (x >= 2147483647 || x <= -2147483648)
        {
            return 0;
        }

        if (x > 0)
        {
            while (x)
            {
                int y = x % 10;
                result = result * 10 + y;
                if (result >= 2147483647 || result <= -2147483648)
                {
                    return 0;
                }
                x = x / 10;
            }
        }
        else
        {
            x = -1 * x;
            while (x)
            {
                int y = x % 10;
                result = result * 10 + y;
                if (result >= 2147483647 || result <= -2147483648)
                {
                    return 0;
                }
                x = x / 10;
            }
            result = -1 * result;
        }
        return int(result);
    }
};