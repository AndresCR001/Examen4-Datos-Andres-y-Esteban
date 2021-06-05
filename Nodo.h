#pragma once
//template <class TipoDato>
class Nodo
{
protected:
	const char* pregunta;
	Nodo* izdo;
	Nodo* dcho;
	
public:
	Nodo(const char* valor)
	{
		pregunta = valor;
		izdo = dcho = 0;
	}
	Nodo(Nodo* ramaIzdo, const char* valor , Nodo* ramaDcho)
	{
		pregunta = valor;
		izdo = ramaIzdo;
		dcho = ramaDcho;
	}
	// operaciones de acceso
	const char* valorNodo() { return pregunta; }
	Nodo* subArbolIzdo() { return izdo; }
	Nodo* subArbolDcho() { return dcho; }
	// operaciones de modificación
	void nuevoValor(const char* d) { pregunta = d; }
	void ramaIzdo(Nodo* n) { izdo = n; }
	void ramaDcho(Nodo* n) { dcho = n; }
};

