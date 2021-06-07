#include "ArbolB.h"
#include "Nodo.h"

#include <fstream>
#include <string>
#include <iostream>

#include <cstdlib>
#include <cstdio>

class Sistema {

	std::string pregunta;

	ArbolBinario* arbolMemoria;
	

//public:bool FF = false; //creamos una bandara para saber si es la primer pregunta

public:
	void setMemoria(ArbolBinario *arbolB) { arbolMemoria = arbolB; }
	ArbolBinario* getMemoria() { return arbolMemoria; }

	bool leerMemoria()
	{
		//si se obtiene algiun valor del arcivho retornamos falso, de lo contrario retornamos true y se procede con la primera pregunta 
		std::ifstream file("MemoriaIA.txt");
		std::string str; // recibe la linea del archivo de texto

		ArbolBinario* arbolM = new ArbolBinario();

		if (std::getline(file, str)) { // con el getline obtenemos la fila de texto completa
			
			// de lo contrario vamos a ir agregando las preguntas, las respuestas y los nodos nulos para formar el arbol
			//std::cout << str << "\n";
			ayudantePreordenLectura(arbolM);

				
			return 1;
			//implementamos la lectura basados en un tipo de ordenamiento (de esta forma se vuelve a actualizar la memoria)
			// ordenamos tambien el arbol de forma que lo podamos utilizar en el programa. 

		}
		return 0;

	}

	void actualizarMemoria(ArbolBinario* arbolM)
	{
		//en esta funcion actualizamos la memoria leyendo el arbol con el metodo de ordenamiento establecido
		ayudantePreordenEscritura(arbolM->Oraiz()); //funcion recursiva para leer el arbol en preorden 

	}



	void crearPregunta(const char* pregunta, const char* respuesta, ArbolBinario* arbolM) 
	{

		//TipoDato pregunta;

		Nodo* nodoPregunta;
		Nodo* nodoRespuesta;
		Nodo* nodoGane;


		nodoGane = arbolM->nuevoArbol(0, "G", 0);

		nodoRespuesta = arbolM->nuevoArbol(nodoGane, respuesta, 0);

		nodoPregunta = arbolM->nuevoArbol(nodoRespuesta, pregunta, 0);

		arbolM->Praiz(nodoPregunta);
		setMemoria(arbolM);
		actualizarMemoria(getMemoria());
		
		
		
		

		//buscar en el archivo una pregunta si no existe, crea una (raiz del arbol)
		//se debe recorrer en arbol de alguna manera par leer y escribir  en el archivo y asi poder volver a armar el arbol. 

		//de lo contrario agega la pregunta al arbol dependiendo de la respuesta  

	}

	
	//método recursivo para realizar recorrido preorden
	void ayudantePreordenEscritura(Nodo *nodoM)
	{
		std::fstream file("MemoriaIA.txt", std::fstream::out | std::ios::app); //usamos out y app para escribir y guardar el texto anterios sin sobre escribir en el archivo, respectivamente
		
		if (nodoM == 0) { //cuando el noso sea cero agregamos un cero al archivo para indicar que es un nodo vaci cuando este se requiera reestructurar
			file << "0" << "\n";
			file << std::flush;
			return;
		}
		pregunta = nodoM->valorNodo();
		if (file.is_open()){
			file << pregunta << "\n";
			file << std::flush;
		}

		//mostrar datos del nodo
		ayudantePreordenEscritura(nodoM->subArbolIzdo());
		//recorrer subárbol izquierdo
		ayudantePreordenEscritura(nodoM->subArbolDcho());
		//recorrer subárbol derecho
		file.close();
		
	}


	void ayudantePreordenLectura(ArbolBinario* arbolM)
	{

		std::ifstream file("MemoriaIA.txt");
		std::string str;

		//setMemoria(arbolM);


		while (!file.eof()) { // con el getline obtenemos la fila de texto completa
			std::getline(file, str);
			const char* pregunta = str.c_str();
			std::cout << str << "\n";
			
			//insertar(getMemoria()->Oraiz(), pregunta);
			
			//setMemoria(arbolM)
				

		}

	

	}

	void insertar(Nodo* nodoM, const char* dato)
	{
		if (nodoM == 0 && dato!= "0" ) {
			nodoM = new Nodo(dato); //creamos un nodo y de lo mandamos al arbol
			return;
		}

	}


};