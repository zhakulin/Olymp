#include <iostream>

using namespace std;

int myMin(int r, int g, int b);
int myMax(int winR, int winG, int winB);
int win(int A, int C, int r, int g, int b);

int main() {
    int t, A, C, r, g, b;
    cin >> t; {
    for (int i = 0; i < t; i++) {
        cin >> A >> C;
        cin >> r >> g >> b;
        int winR = win(A, C, r + 1, g, b);
        int winG = win(A, C, r, g + 1, b);
        int winB = win(A, C, r, g, b + 1);
        int max = myMax(winR, winG, winB);
        if (winR == max) {
            cout << "RED" << endl;
        }
        else if (winG == max) {
            cout << "GREEN" << endl;
        }
        else 
            cout << "BLUE" << endl;
        }
    }
    return 0;

}

int myMin(int r, int g, int b) {
    int min;
    if (r <= b && r <= g)
        min = r;
    else if (g <= b && g <= r)
        min = g;
    else
        min = b;
    return min;
}

int myMax(int winR, int winG, int winB)
{
    int max;
    if (winR > winB && winR > winG)
        max = winR;
    else if (winG > winB && winG > winR)
        max = winG;
    else
        max = winB;
    return max;
}

int win(int A, int C, int r, int g, int b)
{

    return A * (r * r + b * b + g * g) + C * myMin(r,g,b);
}
