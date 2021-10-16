/**
 * 
 * NOMBRE: PuertoSerie.h
 * AUTOR: Pablo Enguix Llopis
 * FECHA: 15/10/2021
 * DESCRIPCIÓN: Este archivo se encarga de mandar mensajes por el puerto serie
 * 
 */

#ifndef PUERTO_SERIE_H_INCLUIDO
#define PUERTO_SERIE_H_INCLUIDO

// ----------------------------------------------------------
// ----------------------------------------------------------
class PuertoSerie  {

public:
  // .........................................................
  // .........................................................
  PuertoSerie (long baudios) {
	Serial.begin( baudios );
	// mejor no poner esto aquí: while ( !Serial ) delay(10);   
  } // ()

  // .........................................................
  /**
   * 
   * Esta función espera a que el puerto serie esté libre
   * 
   */
  // .........................................................
  void esperarDisponible() {

	while ( !Serial ) {
	  delay(10);   
	}

  } // ()

  // .........................................................
  /**
   * 
   * Esta función escribe un mensaje en el puerto serie
   * 
   * @param mensaje El mensaje a escribir
   * 
   */
  // .........................................................
  template<typename T>
  void escribir (T mensaje) {
	Serial.print( mensaje );
  } // ()
  
}; // class PuertoSerie

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
