#include "item.h"

template <typename T>
struct queue
{
   private:
   item<T> *_front = NULL, *_back = NULL;

   public:
   /// <summary>
   /// Возвращает первый элемент очереди
   /// </summary>
   T *front();

   /// <summary>
   /// Возвращает последний элемент очереди
   /// </summary>
   T *back();

   /// <summary>
   /// Добавляет элемент e в конец очереди
   /// </summary>
   void push(T *e);

   /// <summary>
   /// Выталкивает первый элемент очереди
   /// </summary>
   void pop();

   /// <summary>
   /// Проверяет, пуста ли очередь
   /// </summary>
   bool empty();

   /// <summary>
   /// Очищает очередь от элементов
   /// </summary>
   void clear();
};