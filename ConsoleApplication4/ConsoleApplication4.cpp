#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    const int stat = 5;
    int array[stat][stat];
    int b = -1,variable = 0;
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    for (int i = 0; i < stat; i++)
    {
        b += 1;
        for (int j = 0; j < stat; j++)
        {
            array[i][j] = b + j;
            cout << array[i][j];
            if (buf.tm_mday % stat == (i))
            {
                variable += array[i][j];
            }
        }
        cout << "\n";
    }
    cout << "\nThe sum of the lines " << variable;
}
