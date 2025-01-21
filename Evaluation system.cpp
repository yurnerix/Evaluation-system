#include <iostream>

using namespace std;

void isScore(int score)
{
    if (score >= 90 and score <= 100)
        cout << "Your grade is excellent <3" << endl;
    else if (score >= 70 and score <= 90)
        cout << "Your grade is good :)" << endl;
    else if (score >= 50 and score <= 70)
        cout << "Your grade is satisfactory :-|" << endl;
    else if (score >= 0 and score <= 50)
        cout << "Your grade is unsatisfactory :(" << endl;
    else
        cout << "Incorrect value" << endl;
}

int main()
{
    int score;
    cout << "Enter the number of points: " << endl;
    cin >> score;
    isScore(score);
}


