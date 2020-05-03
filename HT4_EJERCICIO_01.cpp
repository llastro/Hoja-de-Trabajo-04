#include <iostream>

#include <string>

#include <fstream>

#include <vector>


using namespace std;


struct comercial{

  string zona;

  string tipo;

  float precio;

  float precio1;

  float precio2;

};


struct residencial{

  string zona;

  string tipo;

  float precio;

  float precio1;

  float precio2;

};


int main (){

  comercial var;

  comercial var1;

  residencial var2;

  residencial var3;

  residencial var4;


  var.zona="A";

  var.tipo="Terreno" "Casa" "Departamento";

  var.precio=2200; 

  var.precio1=2500;

  var.precio2=2100;

  var1.zona="B";

  var1.tipo="Terreno" "Casa" "Departamento";

  var1.precio=1300; 

  var1.precio1=1500;

  var1.precio2=1200;

  var2.zona="A";

  var2.tipo="Terreno" "Casa" "Departamento";

  var2.precio=2100; 

  var2.precio1=2500;

  var2.precio2=2100;

  var3.zona="B";

  var3.tipo="Terreno" "Casa" "Departamento";

  var3.precio=1500; 

  var3.precio1=1600;

  var3.precio2=1300;

  var4.zona="C";

  var4.tipo="Terreno" "Casa" "Departamento";

  var4.precio=1100; 

  var4.precio1=1300;

  var.precio2=1000;


  cout << var.zona << endl;

  cout << var.tipo << endl;

  cout << var.precio << endl;

  cout << var1.zona << endl;

  cout << var1.tipo << endl;

  cout << var1.precio << endl;

  cout << var2.zona << endl;

  cout << var2.tipo << endl;

  cout << var2.precio << endl;

  cout << var3.zona << endl;

  cout << var3.tipo << endl;

  cout << var3.precio << endl;

  cout << var4.zona << endl;

  cout << var4.tipo << endl;

  cout << var4.precio << endl;

} 
