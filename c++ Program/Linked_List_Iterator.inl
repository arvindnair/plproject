// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// is_done
//
// checks if current is greater than or equal 
// to the size of array passed for iteration.
template <typename T>
inline
	bool Linked_List_Iterator<T>::is_done (void)
{ 
  return curr_==0;
}