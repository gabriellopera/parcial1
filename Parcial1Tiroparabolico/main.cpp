#include <iostream>
#include<math.h>

using namespace std;

float posicionX(float x0, float vx, float t);
float velocidadX(float v0, double angulo);
float posicionY(float y0, float vy, float t);
float velocidadY(float v0, float t, double angulo);

int main()
{   double x0=0, vxO=8, vyO=10, y0=2, g=9.81;
    double anguloHO=45;
    double t=(-(2*vyO/g)+sqrt((2*vyO/g*2*vyO/g)-(-4*2/g*y0)))/2;
    double d=x0+vxO*t;
    cout << t<<" " << endl;
    return 0;


}


float posicionX(float x0, float vx, float t){
    double x=x0+(vx*t);
    return x;
}
float velocidadX(float v0, double angulo){
    float vx = v0*cos(angulo);
    return vx;
}
float posicionY(float y0, float vy, float t){
    float g=9.81;
    float y=y0+(vy*t)-(g*t*t/2);
    return y;
}
float velocidadY(float v0, float t, double angulo){
    float g=9.81;
    float vy=v0*sin(angulo)-(g*t);
    return vy;
}


