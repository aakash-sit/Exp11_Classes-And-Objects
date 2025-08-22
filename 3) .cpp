// Aakash Choudhari
// E&TC-A2
// 24070123031

#include <iostream>
using namespace std;

class Cube {
private:
    int height;
    int width;
    int length;

public:
    Cube(int h, int w, int l) {
        height = h;
        width = w;
        length = l;
    }

    int volume() {
        return height * width * length;
    }
};

int main() {
    int h, w, l;

    cout << "Enter height: ";
    cin >> h;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter length: ";
    cin >> l;

    Cube cube1(h, w, l);  
    cout << "Volume of cube: " << cube1.volume() << endl;

    return 0;
}
