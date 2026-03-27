 #include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;

    vector<int> value(n), weight(n);
    vector<double> ratio(n);

    // Input
    for(int i = 0; i < n; i++) {
        cin >> value[i] >> weight[i];
        ratio[i] = (double)value[i] / weight[i];
    }

    // Bubble sort based on ratio (descending)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(ratio[j] < ratio[j + 1]) {

                // swap ratio
                double tempR = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = tempR;

                // swap value
                int tempV = value[j];
                value[j] = value[j + 1];
                value[j + 1] = tempV;

                // swap weight
                int tempW = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = tempW;
            }
        }
    }

    // Fractional Knapsack
    double total = 0.0;

    for(int i = 0; i < n; i++) {
        if(W >= weight[i]) {
            total += value[i];
            W -= weight[i];
        } else {
            total += ratio[i] * W;
            break;
        }
    }

    // Output
    cout << fixed;
    cout.precision(6);
    cout << total;

    return 0;
}
