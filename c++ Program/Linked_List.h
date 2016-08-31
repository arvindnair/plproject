#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "Node.h"

template <typename T>
class Linked_List
{
public:
  Linked_List();
  ~Linked_List();
  void add_element (T data);
  T get_element (size_t index) const;

  Node<T> * head_;

};

#include "Linked_List.cpp"

#endif // !_LINKED_LIST_H_