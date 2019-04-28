#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    double max = 0;
    double n = 0;
    ifstream your_file("file.txt");

    if (!your_file.is_open()) {
        cout << "Error opening file!";
    } else {
        vector<double> v;
        while (your_file >> n)
            v.push_back(n);
        for (double i : v)
            if (i > max)
                max = i;

        your_file.close();
        cout << "Max: " << max;
    }
    return 0;
}
