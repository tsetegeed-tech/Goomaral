#include <iostream>
#include <cmath>

using namespace std;

// f(x) = x^3 - x - 1 = 0
double f(double x) {
    return x * x * x - x - 1;
}

// f'(x) = 3*x^2 - 1
double df(double x) {
    return 3 * x * x - 1;
}

int main() {
    double x0, delta;
    int n0, n = 1;

    cout << "=== Newtonii arga ===" << endl;
    cout << "Garaanii tseg x0-g oruulna uu: ";
    cin >> x0;
    cout << "Nariiwchlal (Delta) oruulna uu: ";
    cin >> delta;
    cout << "Dawtaltiin hamgiin ih too (n0) oruulna uu: ";
    cin >> n0;

    while (n <= n0) {
        double fx0 = f(x0);
        double dfx0 = df(x0);

        if (dfx0 == 0) {
            cout << "Ulamjlal 0 bolson tul huwaah bolomjgui." << endl;
            return 0;
        }

        // Step 3
        double x = x0 - fx0 / dfx0;

        // Step 4
        if (abs(x - x0) < delta) {
            cout << "\nOiroltsoo shiid x = " << x << endl;
            cout << "Uildel buren togsoloo." << endl;
            return 0;
        }

        // Step 5 & 6
        n = n + 1;
        x0 = x;
    }

    // Step 7
    cout << "\n" << n0 << " dawtaltiin daraa tootsoo butsengui." << endl;
    return 0;
}
