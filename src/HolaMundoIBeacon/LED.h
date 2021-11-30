/**
 * 
 * NOMBRE: LED.h
 * AUTOR: Pablo Enguix Llopis
 * FECHA: 15/10/2021
 * DESCRIPCIÓN: Este archivo es el que se encarga de lo relativo a los LEDs, principalmente encender, apagar, alternar los modos y brillar
 * 
 */

#ifndef LED_H_INCLUIDO
#define LED_H_INCLUIDO

// ----------------------------------------------------------
// Jordi Bataller i Mascarell
// 2019-07-07
// ----------------------------------------------------------

// ----------------------------------------------------------
/**
 * 
 * diseño logico: tiempo -> esperar()
 * 
 * Esta función espera un tiempo dado
 * 
 * @param tiempo: El tiempo a esperar
 * 
 */
// ----------------------------------------------------------
void esperar (long tiempo) {
  delay (tiempo);
}

// ----------------------------------------------------------
// ----------------------------------------------------------
class LED {
private:
  int numeroLED;
  bool encendido;
public:

  // .........................................................
  // .........................................................
  LED (int numero)
	: numeroLED (numero), encendido(false)
  {
	pinMode(numeroLED, OUTPUT);
	apagar ();
  }

  // .........................................................
  /**
   * 
   * diseño logico: led -> encender()
   * 
   * Enciende el LED
   * 
   */
  // .........................................................
  void encender () {
	digitalWrite(numeroLED, HIGH); 
	encendido = true;
  }

  // .........................................................
  /*
   * 
   * diseño logico: led -> apagar()
   * 
   * Apaga el LED
   * 
   */
  // .........................................................
  void apagar () {
	  digitalWrite(numeroLED, LOW);
	  encendido = false;
  }

  // .........................................................
  /**
   * 
   * diseño logico: alternar()
   * 
   * Alterna el LED entre encendido y apagado
   * 
   */
  // .........................................................
  void alternar () {
	if (encendido) {
	  apagar();
	} else {
	  encender ();
	}
  } // ()

  // .........................................................
  /**
   * 
   * diseño logico: tiempo -> brillar()
   * 
   * Hace que el LED brille durante un tiempo
   * 
   * @param tiempo: El tiempo que permanece encendido
   * 
   */
  // .........................................................
  void brillar (long tiempo) {
	encender ();
	esperar(tiempo); 
	apagar ();
  }
}; // class

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
