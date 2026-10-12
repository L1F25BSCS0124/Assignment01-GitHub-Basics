//Shoaib Mirza
//L1F25BSCS0124
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n = 50;

    for (int i = 1; i <= n; i++)
        sum += i;

    int formula = n * (n + 1) / 2;

    cout << "Sum using loop: " << sum << endl;
    cout << "Sum using formula: " << formula << endl;

    if (sum == formula)
        cout << "Both sums are equal.";
    else
        cout << "Sums are not equal.";

    return 0;
}
