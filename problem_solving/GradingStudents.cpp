#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    int limit = 0;
    while(limit<100)
    {
        limit += 5;
        for (int i=0; i<grades.length; i++)
        {
            if (grades[i] < limit)
            {
                //
            }
        }
    }

    return grades;
}

void display(vector<int> grades)
{
    for (int i=0; i<grades.size(); i++)
    {
        cout << grades[i] << " ";
    }
}

int main()
{
    //
    int n, gpoint;
    cin >> n;

    vector<int> grades;

    while(n>0)
    {
        n--;
        cin >> gpoint;

        grades.push_back(gpoint);
    }

    display(grades);

    return 0;
}
