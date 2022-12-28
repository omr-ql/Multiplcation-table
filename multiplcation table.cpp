#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter your number " << endl;
    cin >> num;

    cout << "The multiplaction table is " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " * " << num << " = " << i * num << endl;
    }
}