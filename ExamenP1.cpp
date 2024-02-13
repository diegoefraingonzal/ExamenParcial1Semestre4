#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Circulo {

float radio;

public:
int x;
int y;

Circulo ();
Circulo (int x2, int y2);
Circulo (int x2, int y2, float r);

float getRadio ();
void setRadio (float r);
float getArea();
void interesects (Circulo circulo);

};

Circulo :: Circulo () {
radio = 0.0;
x=0;
y=0;
}

Circulo::Circulo (int x2, int y2) {
radio=0.0;
x = x2;
y = y2;
}

Circulo :: Circulo (int x2, int y2, float r){
if (r>0){
    radio=r;
} else {
radio = 0;
}
x=x2;
y=y2;
}

float Circulo :: getRadio () {
return radio;
}

void Circulo :: setRadio (float r) {
if (r>0){
    radio=r;
} else {
radio = 0;
}
return; 
}

float Circulo :: getArea () {
float h;   
h=3.14*(radio * radio);
    return h;
}



void Circulo :: interesects (Circulo circulo) {
float dist;
dist = sqrt(((circulo.x - x)*(circulo.x - x)) + ((circulo.y - y)*(circulo.y - y)));
if (dist<(getRadio() + circulo.getRadio())) {
cout << "Los Circulos intersectan" << endl;
} else {
    cout << "Los Circulos NO intersectan" << endl;
}

}

int main () {

Circulo circulo1 ;
Circulo circulo2 (7, 8);
Circulo circulo3 (20,9,2);

circulo1.setRadio (5);
circulo1.x=5;
circulo1.y=5;
circulo2.setRadio (5);

cout << "Area Ciruculo 1: " << circulo1.getArea () << endl;
cout << "Area Ciruculo 2: " << circulo2.getArea () << endl;
cout << "Area Ciruculo 3: " << circulo3.getArea () << endl;
cout << endl;

circulo1.interesects (circulo2);
cout << "-----------" << endl;
circulo1.interesects (circulo3);
cout << "-----------" << endl;
circulo2.interesects(circulo3);
cout << "-----------" << endl;
    return 0;
}