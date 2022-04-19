#include "queue.h"
#include "item.h"
#include "tree.h"


template<typename T>
T *queue<T>::front()
{
   return _front->elem;
}

template<typename T>
T *queue<T>::back()
{
   return _back->elem;
}

template<typename T>
void queue<T>::push(T *e)
{
   _back = empty() ? _front = new item<T>(e) : _back->next = new item<T>(e);
}

template<typename T>
void queue<T>::pop()
{
   item<T> *d = _front;
   _front = _front == _back ? _back = NULL : _front->next;

   delete d;
}

template<typename T>
bool queue<T>::empty()
{
   return !_front;
}

template<typename T>
void queue<T>::clear()
{
   for ( ; !empty(); pop());
}


template struct queue<tree>;