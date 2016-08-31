#include <iostream>
#include <chrono>
#include <ctime>
#include <ratio>
#include "Linked_List.h"
#include "Linked_List_Iterator.h"

#define PARAMETER 200000

int main ()
{
  Linked_List<int> list;

  for (int i = 0; i < PARAMETER; i++)
  {
    if (i%500==0)
    {
      std::cout<<i<<std::endl;
    }
    list.add_element(i);
  }

  std::chrono::high_resolution_clock::time_point t1=std::chrono::high_resolution_clock::now();
  
  // Get function printing Linked List using For-Loop
  for (int i = 0; i < PARAMETER; i++)
  {
    std::cout<<list.get_element(i)<<std::endl;
  }
  
  
  std::chrono::high_resolution_clock::time_point t2=std::chrono::high_resolution_clock::now();

  std::chrono::high_resolution_clock::time_point t3=std::chrono::high_resolution_clock::now();
 
  // Iterator printing Linked List.
  Linked_List_Iterator<int> li(list);
  while (!li.is_done())
  {
    std::cout<<li.advance()<<std::endl;
  }
  
 
  std::chrono::high_resolution_clock::time_point t4=std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);
   std::chrono::duration<double> time_span1 = std::chrono::duration_cast<std::chrono::duration<double>>(t4 - t3);

   std::cout<<"For Loop: "<<time_span.count()<<std::endl;
   std::cout<<"Iterator: "<<time_span1.count()<<std::endl;
  system("pause");
  return 0;
}