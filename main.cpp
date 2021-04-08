#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for (int number = 1; number < 1000; number++)
    {
        // Find Armstrong sum
        int numberUsed = number;
        int sum = 0;
        while (numberUsed > 0)
        {
            int digit = numberUsed % 10;
            sum += pow(digit, 3);
            numberUsed /= 10;
        }

        // Compare Armstrong sum with the original number
        if (sum == number) cout << number << endl;
    }

    return 0;
}
