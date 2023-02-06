#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    return grades;
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

    for (int i=0; i<grades.size(); i++)
    {
        cout << grades[i] << " ";
    }

    return 0;
}
