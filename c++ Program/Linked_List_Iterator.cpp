// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Array_Iterator
//
// setting current and a_ to zero using base member initialization.
template <typename T>
Linked_List_Iterator<T>::Linked_List_Iterator (void)
	:a_(0),
	curr_(0)
{}

//
// Array_Iterator (Array<T> &)
//
// setting current to zero and copying contents into a_.
template <typename T>
Linked_List_Iterator<T>::Linked_List_Iterator (Linked_List<T> & a)
	:a_(a), 
  curr_(a.head_)
{}


//
// ~Array_Iterator
//
// Destructor is empty as array takes care of destruction.
template <typename T>
Linked_List_Iterator<T>::~Linked_List_Iterator (void)
{}

//
// advance
//
// increments the current by one to go to the next
// element in the iteration of the passed array.
template <typename T>
inline
	T Linked_List_Iterator<T>::advance (void)
{
  T data=curr_->data_;
  curr_=curr_->next_;
  return data;
}