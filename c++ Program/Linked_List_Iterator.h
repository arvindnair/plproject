#ifndef _LINKED_LIST_ITERATOR_H_
#define _LINKED_LIST_ITERATOR_H_

#include <cstring>            // for size_t definition
#include <iostream>           // for printing I/O messages.
#include "Linked_List.h"      // for Array definition.
#include "Node.h"

/**
* @class Array_Iterator
*
* Basic implementation of Array Iterator.
*/
template <typename T>
class Linked_List_Iterator
{
public:

	/// Default Constructor.
	Linked_List_Iterator (void);

	/**
	* Initializing constructor
	*
	* @param[in]       a           The source array.
	*/
  Linked_List_Iterator (Linked_List<T> & a);

	/// Destructor.
	~Linked_List_Iterator (void);

	/**
	* Checks if the iteration is complete for the given array. Returns true
	* if the iteration is complete else returns false if the iteration is 
	* not completed.
	*
	* @retval           true        The iteration is complete.
	* @retval           false       The iteration is not complete.
	*/
	bool is_done (void);

	/**
	* Increments the current by one to the next element in iteration.
	*
	*/
	T advance (void);

private:

	/// Array for iteration.
	Linked_List<T> & a_;

	/// Keep track of current element of the iteration.
	Node<T> * curr_;
};

#include "Linked_List_Iterator.inl"

#include "Linked_List_Iterator.cpp"

#endif // !_ARRAY_ITERATOR_H_



