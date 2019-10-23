#include <iostream>

int main(void)
{
using namespace std;

//1 cm to 30.48 stop lub 2.54 cali 
const float ft = 1/30.48;
const float in = 1/2.54;
int feet; // stopy wyrazamy jako calkowite liczby
float feetd, inch,height; // reszta zmennoprzecikowa

//Normalnie cout pomija końcowe zera, zmienmy to
cout.setf(ios_base::fixed, ios_base::floatfield);

cout << "What is your height in cm?" << endl;
cin >> height;

feet = height*ft; // liczba calkowita wyraża stopy
feetd =  (height*ft - feet)/ft; // pozostala czesc ulamkowa na centymetry 
inch = feetd * in; // i cm na cale

cout << "Your height is " << height << " cm, which is " << feet << "ft " << inch << "in" << " or " << height*ft << "ft" << endl;


return 0;
}
