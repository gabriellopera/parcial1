#include <iostream>
#include<math.h>

using namespace std;

float posicionX(float x0, float vx, float t);
float velocidadX(float v0, double angulo);
float posicionY(float y0, float vy, float t);
float velocidadY(float v0, float t, double angulo);

int main()
{   double x0=3.4, vx=2.5, t=2;
    double angulo;
    posicionX(x0,vx,t);
    cout << "" << endl;
    return 0;
}


