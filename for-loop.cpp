#include <iostream>
#include <string>
#include <vector>

using namespace std;

const vector<string> in_words {
    "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};
// inline functions is used to reduce excecution time
// setting input and output optimizations
inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
// main function starts here
int main()
{
    // applying optimizations
    use_io_optimizations();
    //declaring the variables
    unsigned int lower;
    unsigned int upper;
    // collecting input from stdin
    cin >> lower >> upper;
    //for loop starts here
    for (unsigned int i {lower}; i <= upper; ++i)
    {
        if (i <= 9)
        {
            cout << in_words[i - 1];
        }
        else
        {
            cout << (i % 2 ? "odd" : "even");
        }

        cout << '\n';
    }
    return 0;
}
