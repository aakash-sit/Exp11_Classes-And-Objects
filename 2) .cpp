// Aakash Choudhari
// E&TC-A2
// 24070123031

#include <iostream>
using namespace std;

class Cube {
    public:
        double height;
        double width;
        double length;

        double volume() {
            return height * width * length;
        }
};

int main() {
    Cube cube1;

    cout << "Enter Height of Cube: ";
    cin >> cube1.height;

    cout << "Enter Width of Cube: ";
    cin >> cube1.width;

    cout << "Enter Length of Cube: ";
    cin >> cube1.length;

    cout << "\nVolume of Cube = " << cube1.volume() << endl;

    return 0;
}
