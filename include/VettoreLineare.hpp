/* Copyright (C) 2021 Matteo Foglieni

This file is part of Bonnor-Ebert.

Bonnor-Ebert is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Bonnor-Ebert is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Bonnor-Ebert.  If not, see <https://www.gnu.org/licenses/>. */

#ifndef VettoreLineare_hpp
#define VettoreLineare_hpp

#include "Vettore.hpp"
#include <cmath>

class VettoreLineare:public Vettore{
public:
	VettoreLineare(unsigned int );
	VettoreLineare();
	
	~VettoreLineare();
	
	double CosTheta(VettoreLineare& );
	double Modulo();
	void Print() const;
	
	VettoreLineare operator + (const VettoreLineare& );
	double operator * (const VettoreLineare& );
	VettoreLineare operator * (const double );
	VettoreLineare operator = (const VettoreLineare& );
};

#endif /* VettoreLineare_hpp */
