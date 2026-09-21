#include <iostream>
using namespace std;

int main()
{
    int roll[5];

    cout << "Enter roll numbers of 5 students:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> roll[i];
    }

    // Sorting in descending order
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (roll[j] < roll[j + 1])
            {
                int temp = roll[j];
                roll[j] = roll[j + 1];
                roll[j + 1] = temp;
            }
        }
    }

    cout << "\nStudents from highest to lowest:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << roll[i] << " ";
    }

    return 0;
}
