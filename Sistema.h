#include "ArbolB.h"
#include "Nodo.h"

#include <fstream>
#include <string>
#include <iostream>

class Sistema {

	std::string pregunta;

	ArbolBinario* arbolMemoria;
	

//public:bool FF = false; //creamos una bandara para saber si es la primer pregunta

public:
	void setMemoria(ArbolBinario *arbolB) { arbolMemoria = arbolB; }
	ArbolBinario* getMemoria() { return arbolMemoria; }

	bool leerMemoria()
	{
		
		std::ifstream file("MemoriaIA.txt");
		std::string str; // recibe la linea del archivo de texto
		
		while (std::getline(file, str)) { // con el getline obtenemos la fila de texto completa
			
			// de lo contrario vamos a ir agregando las preguntas, las respuestas y los nodos nulos para formar el arbol
			std::cout << str << "\n";

				
			return 0;
			//implementamos la lectura basados en un tipo de ordenamiento (de esta forma se vuelve a actualizar la memoria)
			// ordenamos tambien el arbol de forma que lo podamos utilizar en el programa. 

		}
		//setMemoria(arbolMemoria); //actualizamos la memoria segun la lectura del archivo 
		//FF = true;
		return 1;

	}



	void crearPregunta(const char* pregunta, const char* respuesta, ArbolBinario* arbolM) {

		//TipoDato pregunta;

		Nodo* nodoPregunta;
		Nodo* nodoRespuesta;
		Nodo* nodoGane;


		nodoGane = arbolM->nuevoArbol(0, "G", 0);

		nodoRespuesta = arbolM->nuevoArbol(nodoGane, respuesta, 0);

		nodoPregunta = arbolM->nuevoArbol(nodoRespuesta, pregunta, 0);


		
		
		
		

		//getMemoria()->Praiz(nodoPregunta);
		

		//buscar en el archivo una pregunta si no existe, crea una (raiz del arbol)
		//se debe recorrer en arbol de alguna manera par leer y escribir  en el archivo y asi poder volver a armar el arbol. 

		//de lo contrario agega la pregunta al arbol dependiendo de la respuesta  

	}
	

};