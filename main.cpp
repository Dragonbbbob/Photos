#include <iostream>

using namespace std;

int main() {
    
    cout << "This program will find how many balls you will need in ball bearings. Please note that this program will be done in milimeters. " << endl;
    cout << "To run this program, you will need to input a few variables." << endl;
    
    cout << "Lets first get the outer radius for the bigger ring" << endl;
    float R {0};
    cin >> R;
    
    cout << "Now lets get the inner radius for the bigger ring." << endl;
    float r {0};
    cin >> r;
    
    cout << "What is the height for the bigger ring (please note that the height of the bigger ring and the smaller ring should be the same.)" << endl;
    float H {0};
    cin >> H;
    
    cout << "We will now do the calculation to find the volume of the bigger ring." << endl;
    float VolumeofBigRing = (3.14159*(R*R)*H) - (3.14159*(r*r)*H);
    cout << "The volume of the big ring is, " << VolumeofBigRing << endl;
    
    cout << "Let us now do the same thing but with the smaller ring" << endl;
    
    cout << "Lets first get the outer radius for the smaller ring" << endl;
    float R1 {0};
    cin >> R1;
    
    cout << "Now lets get the inner radius for the smaller ring." << endl;
    float r1 {0};
    cin >> r1;
    
    cout << "We will now do the calculation to find the volume of the smaller ring." << endl;
    float VolumeofSmallRing = (3.14159*(R1*R1)*H) - (3.14159*(r1*r1)*H);
    cout << "The volume of the small ring is, " << VolumeofSmallRing << endl;
    
    cout << "We will now do the calculation to find the volume of the torus (also known as the gap in between)." << endl;
    
    cout << "What is the distance from the center of the torus to the center of the tube?" << endl;
    float R2 {0};
    cin >> R2;
    
    cout << "What is the radius of the tube itself?" << endl;
    float r2 {0};
    cin >> r2;
    
    cout << "We will now find the volume of the torus" << endl;
    float VolumeofTorus = ((2*(3.14159*3.14159))*(R2*(r2*r2)));
    cout << "The volume of the torus is, " << VolumeofTorus << endl;
    
    cout << "We will now find the volume of space that the torus has." << endl;
    float SpaceofTorus = (VolumeofSmallRing+VolumeofBigRing)-VolumeofTorus;
    
    cout << "Here comes the final steps." << endl;
    cout << "We will now find the volume of the balls" << endl;
    
    cout << "What is the radius of the sphere? (please note that if you want there to be space inbetween the balls, add how much space you would like to the volume of the sphere." << endl;
    float r3 {0};
    cin >> r3;
    
    cout << "We will now do the calculation of the sphere" << endl;
    float VolumeofSphere = (4.0/3.0)*3.14159*(r3*r3*r3);
    cout << "The volume of the sphere is, " << VolumeofSphere << endl;
    
    cout << "This is the final step. We will now find out how many spheres will fit in the torus." << endl;
    float NumofBalls = SpaceofTorus/VolumeofSphere;
    cout << "The number of balls that you can have are, " << NumofBalls << ". (Please note that if there is a decimal place round down to the nearest hole number." << endl;
    return 0;
}
