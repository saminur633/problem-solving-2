// statement 2
// 1.#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int result = a + b * b - b + (a / b);
    cout << result << '\n';
    return 0;
}
// 2.
#include <iostream>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int c = a & b; // use bitwise AND operator
    int d = a | b; // use bitwise OR operator
    int result = c ^ d; // use bitwise XOR operator
    cout << result << '\n';
    // cout << (a & b) ^ (a | b) << '\n'; // should also work, don't forget the brackets
    return 0;
}
// 3
#include <iostream>
using namespace std;

int main()
{
   int a;
   cin >> a;
   long long cube = (long long)a*a*a;
   int the_last_two_digit = cube % 100;
   cout << the_last_two_digit << '\n';
    return 0;
}
// 4
