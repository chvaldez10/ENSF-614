#include <iostream>
#include <string>
#include <vector>

using namespace std;

double average(const vector<double>& data) {
    double sum = 0;
    for (int i = 0; i < data.size(); i++) {
        sum += data[i];
    }

    return sum / data.size();
}

void printMatrix(const vector<vector<double>> data) {
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data.at(i).size(); j++) {
            cout << data.at(i).at(j) << " ";
        }
        cout << endl;
    }
}

void getFilename(string& filename) {
    cout << "Enter filename: ";
    cin >> filename;
}

int main() {
    string userFilename;

    getFilename(userFilename);
    cout << "user filename: " << userFilename << endl;

    return 0;
}
