/*
 * Element.h
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	public:
		Element(std::string name);

	Element* getNext() { return _next;	}

	void setNext(Element* next) { _next = next; }

	std::string getName() { return _name;	}

	void setName(std::string& name) { _name = name;	}



	private:
		Element* _next;
		std::string _name;
		friend class List;
};

#endif /* ELEMENT_H_ */
