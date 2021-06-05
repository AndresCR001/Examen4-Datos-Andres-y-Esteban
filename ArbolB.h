#pragma once
#include "Nodo.h"
//template <class TipoDato>
class ArbolBinario
{
protected:
	 Nodo* raiz;
public:
	ArbolBinario() 
	{
		raiz = 0;
	}
	ArbolBinario(Nodo* r)
	{
		raiz = r;
	}

	void Praiz(Nodo* r)
	{
		raiz = r;
	}

	Nodo* Oraiz()
	{
		return raiz;
	}
	
	Nodo raizArbol()
	{
		if (raiz)
			return *raiz;
		else
			throw " arbol vacio";
	}

	bool esVacio()
	{
		return raiz == 0;
	}

	Nodo* hijoIzdo()
	{
		if (raiz)
			return raiz->subArbolIzdo();
		else
			throw " arbol vacio";
	}
	
	Nodo* hijoDcho() 
	{
		if (raiz)
			return raiz->subArbolDcho();
		else
			throw " arbol vacio";
	}
	
	Nodo* nuevoArbol(Nodo* ramaIzqda, const char *dato, Nodo* ramaDrcha)
	{
		return new Nodo(ramaIzqda, dato, ramaDrcha);
	}
};
