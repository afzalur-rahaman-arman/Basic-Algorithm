#include <iostream>
using namespace std;

void tower_hannoi (int disk, char tower1, char tower2, char tower3)
{
    if (disk == 1)
    {
        cout << "Move disk " << disk << " from " << tower1 << " to " << tower3 << endl;

    }
    else
    {
        tower_hannoi (disk-1, tower1, tower3, tower2);
        cout << "Move disk " << disk << " from " << tower1 << " to " << tower3 << endl;
        tower_hannoi (disk-1, tower2, tower1, tower3);
    }
}

int main()
{
    int disk;
    char tower1 = 'A';
    char tower2 = 'B';
    char tower3 = 'C';
    cin >> disk;
    tower_hannoi (disk, tower1, tower2, tower3);
    return 0;
}
