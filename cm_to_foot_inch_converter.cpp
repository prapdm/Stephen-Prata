#include <iostream>

int main(void)
{
using namespace std;

//1 cm to odpowiednio
const float ft = 1/30.48;
const float in = 1/2.54;
int feet; // stopy wyrazamy jako calkowite liczby
float feetd, inch,height; // reszta zmennoprzecikowa

cout.setf(ios_base::fixed, ios_base::floatfield);

cout << "What is your height in cm?" << endl;
cin >> height;

feet = height*ft; // liczba calkowita wyraża stopy
feetd =  (height*ft - feet)/ft; // pozostala czesc na centymetry 
inch = feetd * in; // cm na cale
cout << feetd << endl;
cout << "Your height is " << height << " cm, which is " << feet << "ft " << inch << "in" << " or " << height*ft << "ft" << endl;


return 0;
}
