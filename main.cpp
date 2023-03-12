#include <iostream>
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
    int unlock_rank;
    int rank;
    int credits;

    cout << "Enter the unlock rank of the gun: " << endl;
    cin >> unlock_rank;

    cout << "Enter your current rank: " << endl;
    cin >> rank;

    cout << "Enter your current credits: " << endl;
    cin >> credits;

    calculate((unlock_rank - rank) * 140 + 700, rank, credits);
    system("pause");
    return 0;
}
