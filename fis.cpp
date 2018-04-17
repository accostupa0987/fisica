#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;

void teibol(double vel, double masa, double ang){
	cout << "| T\t| X\t| Y\t| Vx\t \t| Vy" << endl;
	double xActual=0, yActual=0, time=0, velX, velY, g=9.8;
	velX=cos(ang)*vel; velY=sin(ang)*vel;
	xActual=xActual+velX*time;
	yActual=yActual+velY*time-(double)1/2*g*time*time;
	for (int i=0; i<15; i++){
		cout << "| " << time << "\t|";
		cout << xActual << "\t|";
		cout << yActual << "\t|";
		cout << velX << " \t|";
		cout << velY << endl;
	}
}

int main(){
	double f; f=double(PI/4.88204);		// f=37	
	teibol(50, 10, f);	
	return 0;
}
