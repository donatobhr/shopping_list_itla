
/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include "Element.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	if (_first == NULL)
	{
		_first = element;
		_last = element;

	}else
	{
		_last -> setNext(element);
		_last = element;

	}

}

void List::remove(int index)
{

}
