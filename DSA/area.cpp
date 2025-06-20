#include<iostream>
using namespace std;

// Create a class named Box with three public attributes: Length, Width, and Height.
// Define member functions - calculateArea, calculateVolume
// Create object box1 and box2 and calculate area and volume of both boxes.
class Box {
public:
    int Length;
    int Width;
    int Height;

    int calculateArea() {
        return 2 * (Length * Width + Width * Height + Height * Length);
    }

    int calculateVolume() {
        return Length * Width * Height;
    }
};

int main() {
    Box box1;
    Box box2;

    box1.Length = 5;
    box1.Width = 3;
    box1.Height = 4;
    box2.Length = 6;
    box2.Width = 2;
    box2.Height = 3;

    int area1 = box1.calculateArea();
    int volume1 = box1.calculateVolume();
    int area2 = box2.calculateArea();
    int volume2 = box2.calculateVolume();

    cout << "Box 1 Area: " << area1 << endl;
    cout << "Box 1 Volume: " << volume1 << endl;
    cout << "Box 2 Area: " << area2 << endl;
    cout << "Box 2 Volume: " << volume2 << endl;

    return 0;
}
//what is constructor?
