#include <iostream>
#include <string>
using namespace std;



int readNumber(string msg)
{
    int num;
    cout << msg << endl;
    cin >> num;
    return num;
}

void printInvertedNumberPattern(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int x = 1; x <= i; x++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

int main()
{
    printInvertedNumberPattern(readNumber("Please enter number?"));

    return main();
}