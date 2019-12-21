#include <iostream>

int main(void)
{
using namespace std;

long long int sekundy;
const short sixty = 60;
double o_dni, o_godziny, o_minuty, o_sekundy;
 

cout << "Enter the number in seconds:" << endl;
cin >> sekundy;
 
//Obliczmy ile to jest dni
o_dni = double(sekundy)/double(sixty)/double(sixty)/24; //double

//Obliczmy godziny 
o_godziny =  (o_dni - int(o_dni))*24;

//Obliczamy minuty
o_minuty = (o_godziny - int(o_godziny))*sixty;
 
//Obliczamy sekundy
o_sekundy = (o_minuty - int(o_minuty))*sixty;
 

cout << sekundy << " seconds = "<< int(o_dni) << " dni, " << int(o_godziny) << " hours, " << int(o_minuty) << " minutes, " << o_sekundy << " seconds" << endl;






return 0; 
}