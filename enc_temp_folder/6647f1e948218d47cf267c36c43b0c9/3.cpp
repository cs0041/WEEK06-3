#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int number = 2, countnumber = 0;
    while (number < n)
    {
        int i = 2;
        while (number > i)
        {
            if (number % i == 0)
            {
                countnumber--;
                break;
            }
            i++;
        }
        countnumber++;
        number++;

    }
    cout << "ANS : " << countnumber << endl;
    return 0;
}
