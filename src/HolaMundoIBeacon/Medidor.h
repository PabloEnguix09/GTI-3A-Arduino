/**
 * 
 * NOMBRE: Medidor.h
 * AUTOR: Pablo Enguix Llopis
 * FECHA: 15/10/2021
 * DESCRIPCIÓN: Este archivoo se encarga de lo relativo a las mediciones
 * 
 */

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// ------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:

public:

  // .....................................................
  // constructor
  // .....................................................
  Medidor(  ) {
  } // ()

  // .....................................................
  // .....................................................
  void iniciarMedidor() {
	// las cosas que no se puedan hacer en el constructor, if any
  } // ()

  // .....................................................
  /**
   * 
   * Mide el CO2
   * 
   * @return El valor de CO2
   */
  // .....................................................
  int medirCO2() {
	return 235;
  } // ()

  // .....................................................
  /**
   * 
   * Mide la temperatura
   * 
   * @return El valor de temperatura
   * 
   */
  // .....................................................
  int medirTemperatura() {
	return -12; // qué frío !
  } // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
