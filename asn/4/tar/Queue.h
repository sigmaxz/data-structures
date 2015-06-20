// THIS IS A POLYMORPHIC CLASS; THE METHODS ARE VIRTUAL,
// MEANING THAT WHEN A POINTER OF THIS CLASS TYPE POINTS TO
// A DERIVED CLASS, THE METHODS IT CALLS WILL BE THE METHODS DEFINED
// BY THE DERIVED CLASS TO WHICH THE POINTER IS CURRENTLY POINTING.
// VISTI http://www.cplusplus.com/doc/tutorial/polymorphism/ FOR MORE
// INFORMATION.

// virtual void enq(const std::string & word)
//   Precondition: none
//   Postcondition: word is at the back of the queue
// virtual void deq()
//   Precondition: none
//   Postcondition: the element at the front of queue is removed
// virtual std::string front() const
//   Precondition: none
//   Postcondition: Return value is copy of element at the front of the queue
// virtual bool is_empty() const
//   Precondition: none
//   Postcondition: Return value is true if no elements in queue
// virtual bool is_full() const
//   Precondition: none
//   Postcondition: Return value is true if no more elements can be added

#ifndef QUEUE_H
#define QUEUE_H

#include <string>

class Queue
{
public:
  virtual ~Queue() {}
  virtual void enq(const std::string &) = 0;
  virtual void deq() = 0;
  virtual std::string front() const = 0;
  virtual bool is_empty() const = 0;
  virtual bool is_full() const = 0;
  static void fill_all(Queue & queue, const std::string & file);
  static void empty_all(Queue & queue, const std::string & file);
};

#endif
