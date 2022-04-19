#include <stdio.h>
#include "tree.h"
#include "stack.h"
#include "queue.h"


void tree::print_by_level(FILE *f)
{
   queue<tree> q;
   q.push(this);

   while (!q.empty())
   {
      tree *t = q.front();
      q.pop();

      fprintf_s(f, "%d ", t->elem);

      if (t->left)
         q.push(t->left);
      if (t->right)
         q.push(t->right);
   }
}

void tree::input(FILE *f)
{
   int v = 0; // Значение узла
   char c = 0; // Символ, считанный из файла
   stack<tree> s;
   tree *t = this;

   fscanf_s(f, "%d", &t->elem);

   while (fscanf_s(f, "%c", &c, 1) != EOF)
   {
      switch (c)
      {
         case '[':
            s.push(t);
            if (fscanf_s(f, "%d", &v)) // Узел имеет левого потомка
               t = t->left = new tree(v); break;
         case ',':
            fscanf_s(f, "%d", &v); // Считываем правого потомка
            t = s.top()->right = new tree(v); break;
         default: // Поднимаемся вверх по поддереву
            t = s.top();
            s.pop();
      }
   }
}