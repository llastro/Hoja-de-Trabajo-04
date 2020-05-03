

#include <iostream>

#include <string>

#include <fstream>

#include <vector>


using namespace std;


struct tipo_fumigacion{

  int tipo;

  string descripcion;

  float costo;

};


struct reg{

  int tipo;

  float tamanio;

  float total;

};


struct contar{

  int tipo;

  int cs;

}cuenta[4];


vector <tipo_fumigacion> tfumigacion;

void inicio(){

  tfumigacion.push_back({1,"Mala Hierba",10.00});

  tfumigacion.push_back({2,"Langostas",20.00});

  tfumigacion.push_back({3,"Gusanos",30.00});

  tfumigacion.push_back({4,"Todo lo demas",50.00});

  

  // Iniciamos los contadores a 0

  cuenta[0]={1,0};

  cuenta[1]={2,0};

  cuenta[2]={3,0};

  cuenta[3]={4,0};

}


void opciones(){

  cout << "    -------- Xterminaciones, S. A. -------- " << endl;

  cout << "==============================================="<< endl;

  cout << "--Tipo--" << "\t" << "--Servicio--" << "\t" << "--Costo x Hectaria--" << endl;

cout << "==============================================="<< endl;

cout << " \t 1" << "\t \t \t" << "Mala Hierba" << "\t \t \t" << "10.00" << endl;

cout << " \t 2" << "\t \t \t" << "Langostas" << "\t \t \t" << "20.00" << endl;

cout << " \t 3" << "\t \t \t" << "Gusanos" << "\t \t \t \t" << "30.00" << endl;

cout << " \t 4" << "\t \t" << "Todo lo anterior" << "\t \t" << "40.00" << endl;

cout << "==============================================="<< endl;

}


// Declaramos la funcion que devuelve un valor tipo float

float calcular(int tipo, float tamanio){

  float cal1, total, precio;

  

  if (tipo==1) {

    precio=tfumigacion[0].costo;

  } else if (tipo==2){

    precio=tfumigacion[1].costo;

  } else if (tipo==3) {

    precio=tfumigacion[2].costo;

  } else if (tipo==4) {

    precio=tfumigacion[3].costo;

  } 

  

  precio=tamanio*precio;


  if (tamanio>500){

    precio=precio-(precio*0.05);

  }


  if (precio>1500) {

    cal1=precio-1500;

    cal1=cal1-(cal1*0.10);

    total=1500+cal1;

  } else {

    total=precio;

  }

  

  return total;

}


void grabar(){

  opciones(); 


  reg x;


  cout << "Ingrese el tipo de servicio:" << endl;

  cin >> x.tipo;

  cout << "Ingrese el tamaño a fumigar: " << endl;

  cin >> x.tamanio;


  x.total=calcular(x.tipo, x.tamanio);


  ofstream archivo("registro.txt", ios::app);

  archivo << x.tipo << "\t" << x.tamanio <<"\t"<< x.total<<endl;

  archivo.close();  

  }


  archivo.close();


  for (int i=0; i<4; i++){

    cout << tfumigacion[i].descripcion << ": " << cuenta[i].cs << endl;

  }


  cout << "El total vendido es de: " << sumatotal << endl;


}





int main(){

  inicio();


  leer();

  return 0;

}
