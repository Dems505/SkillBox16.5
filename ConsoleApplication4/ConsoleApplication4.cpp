
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    const int stat = 5;
    int array[stat][stat];
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    for (int i = 0; i < stat; i++)
    {
        int variable = 0;
        for (int j = 0; j < stat; j++)
        {
            cout << "Enter a variable[" << i << "," << j << "]: ";
            cin >> array[i][j];
            variable += array[i][j];
         }
        if (buf.tm_mday % stat == (i+1))
        {   
            system("cls");

            cout << "The sum of the line under the number " << i << " = " << variable;
            break; 
        }

    }
}
