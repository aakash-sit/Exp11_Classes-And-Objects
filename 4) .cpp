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
    void getInput() {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter length: ";
        cin >> length;
    }

    int volume() {
        return height * width * length;
    }
};

int main() {
    Cube cube1;

    cube1.getInput(); 
    cout << "Volume of cube: " << cube1.volume() << endl;

    return 0;
}
