/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 11 2024
 * @brief 
 *
 *
 *
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */

	
void decompose(int n, int& h, int& m, int& s){

	if (n>=3600){
	h = n/3600;
	m = (n%3600)/60;
	s = n%60;
	}
else {

	h= 0;	
	m=n/60;
	s=n%60;

}
}


