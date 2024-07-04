#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class ObjetoBase {//clase abstracta ya que es como una interfaz 
public:

	virtual~ObjetoBase();

	virtual string tostring() const = 0;//M.V.P

};