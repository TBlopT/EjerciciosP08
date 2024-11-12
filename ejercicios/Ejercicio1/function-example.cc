/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 10 2024
 * @brief Realiza el cálculo de una ecuación. 
 *
 *
 *
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

/** Propósito del programa */
void purpose () {
  cout << "Este programa realiza una ecuación solicitada en el enunciado del ejercicio 1" << endl;
}
/** Chequeo de parámetros*/
bool check (int const argc, char *argv[], int const KCorrectNumber){
  if (argc!=KCorrectNumber){
    cout << "Número de parámetros incorrectos" << endl;
    return false;
  }
  return true;
}
/** Declaración de la clase con private y public*/
class Operation{
	private:
	  double x,y,t,resultado;
	public:
void values(double x_val, double y_val, double t_val){
  x=x_val;
  y=y_val;
  t=t_val;	
}
void operation(){

  double numerador;
  double denominador;

  numerador= sqrt((2*t)-4); 
  denominador= pow(x,2) - pow(y,2);
  resultado = numerador/denominador;
}

void output(){
  cout << resultado << endl;		
}
};

int main (int argc, char* argv[]) {
  purpose();
  if (!check(argc,argv,4)){
    return 345;
  }
  else {
    cout << "El número de parámetros " "(" << argc << ") " << "es correcto." << endl;
  }
  Operation op;
  double x=atof(argv[1]);
  double y=atof(argv[2]);
  double t=atof(argv[3]);
  op.values(x,y,t);
  op.operation();
  op.output();
}













