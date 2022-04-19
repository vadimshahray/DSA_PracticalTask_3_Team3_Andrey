#include "item.h"

template <typename T>
struct queue
{
   private:
   item<T> *_front = NULL, *_back = NULL;

   public:
   /// <summary>
   /// ���������� ������ ������� �������
   /// </summary>
   T *front();

   /// <summary>
   /// ���������� ��������� ������� �������
   /// </summary>
   T *back();

   /// <summary>
   /// ��������� ������� e � ����� �������
   /// </summary>
   void push(T *e);

   /// <summary>
   /// ����������� ������ ������� �������
   /// </summary>
   void pop();

   /// <summary>
   /// ���������, ����� �� �������
   /// </summary>
   bool empty();

   /// <summary>
   /// ������� ������� �� ���������
   /// </summary>
   void clear();
};