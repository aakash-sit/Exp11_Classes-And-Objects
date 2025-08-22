// Aakash Choudhari
// E&TC-A2
// 24070123031

#include <iostream>
using namespace std;

class Cube {
public:
    int height, width, length;
};

int main() {
    Cube c1;

    cout << "Enter height: ";
    cin >> c1.height;
    cout << "Enter width: ";
    cin >> c1.width;
    cout << "Enter length: ";
    cin >> c1.length;

    int vol = c1.height * c1.width * c1.length;
    cout << "Volume: " << vol << endl;

    return 0;
}
