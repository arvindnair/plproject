template <typename T>
Linked_List<T>::Linked_List()
  :head_(0)
{
}

template <typename T>
Linked_List<T>::~Linked_List()
{
}

template <typename T>
void Linked_List<T>::add_element (T data)
{
  if (head_==0)
  {
    head_=new Node<T>();
    head_->data_=data;
    head_->next_=0;
  }
  else
  {
    Node<T> * n = new Node<T>();
    n->data_=data;
    n->next_=0;

    Node<T> * temp = head_;
    while (temp->next_ != 0)
    {
      temp=temp->next_;
    }
    temp->next_=n;
  }
}


template <typename T>
T Linked_List<T>::get_element (size_t index) const
{
  Node<T> * temp=head_;
  size_t count=0;
  while (temp->next_!=0)
  {
    if (count==index)
    {
      return temp->data_;
    }
    temp=temp->next_;
    count++;
  }
  if (count==index)
  {
    return temp->data_;
  }
  else
  {
    return 0;
  }
}