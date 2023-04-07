#include <iostream>
#include <string>
using namespace std;

void calculate(int unlock_credits, int rank, int credits) {
    if (unlock_credits <= credits) {
        cout << "You will be able to afford the gun at " << rank << "." << endl;
        cout << "You will be able to buy it for " << unlock_credits << "." << endl;
        cout << "You will have " << credits << " credits before buying it." << endl;
    } else {
        calculate(unlock_credits - 140, rank + 1, credits + 5 * (rank + 1) + 200);
    }
};

int main() {
    string input;
    int unlock_rank;
    int rank;
    int credits;
    bool stop;

    do {
        cout << "Enter the unlock rank of the gun: " << endl;
        getline(cin, input);
        unlock_rank = stoi(input);

        cout << "Enter your current rank: " << endl;
        getline(cin, input);
        rank = stoi(input);

        cout << "Enter your current credits: " << endl;
        getline(cin, input);
        credits = stoi(input);

        calculate((unlock_rank - rank) * 140 + 700, rank, credits);

        cout << "Enter 1 to stop or 0 to do a new calculation." << endl;
        cin >> stop;

    } while (not stop);
    system("pause");
    return 0;
}
