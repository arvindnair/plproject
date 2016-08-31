#ifndef _NODE_H_
#define _NODE_H_

template <typename T>
class Node
{
public:
  Node();
  ~Node();
  
  T data_;
  Node<T> * next_;

};

#include "Node.cpp"

#endif // !_NODE_H_