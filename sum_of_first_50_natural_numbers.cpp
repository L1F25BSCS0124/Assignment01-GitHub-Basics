#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num = 1;

    while (num <= 50)
    {
        sum += num;
        num++;
    }

    cout << "Sum of first 50 natural numbers (loop): " << sum << endl;

    return 0;
}
