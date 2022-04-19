#ifndef H_ITEM
#define H_ITEM

#include <stdio.h>

template <typename T>
struct item
{
   item(T *_elem, item *_next = NULL) : elem(_elem), next(_next) { }

   T *elem;
   item *next;
};
#endif