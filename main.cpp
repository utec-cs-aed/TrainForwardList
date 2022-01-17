#include <iostream>
#include "solucion.h"

using namespace std;

void testMerge(){
  Node* lista1 = nullptr;
  push_back(lista1, 3);
  push_back(lista1, 5);
  push_back(lista1, 7);

  Node* lista2 = nullptr;
  push_back(lista2, 4);
  push_back(lista2, 5);
  push_back(lista2, 6);
  push_back(lista2, 10);
  push_back(lista2, 15);

  Node* lista3 = SortedMerge(lista1, lista2);

  display(lista3); //3 -> 4 -> 5 -> 5 -> 6 -> 7 -> 10 -> 15 ->
}

void testIntersect(){
  Node* lista1 = nullptr;
  push_back(lista1, 3);
  push_back(lista1, 5);
  push_back(lista1, 7);

  Node* lista2 = nullptr;
  push_back(lista2, 4);
  push_back(lista2, 5);
  push_back(lista2, 6);
  push_back(lista2, 7);
  push_back(lista2, 10);
  push_back(lista2, 15);

  Node* lista3 = Intersect(lista1, lista2);

  display(lista3); // 5 -> 7 -> 
}

void testInsertSort(){
  Node* list = nullptr;
  SortedInsert(list, 2);
  display(list); // 2
  SortedInsert(list, 5);
  display(list); // 2 -> 5
  SortedInsert(list, 1);
  display(list); // 1  -> 2  -> 5  
  SortedInsert(list, 10);
  display(list); // 1  -> 2  -> 5  -> 10  
  SortedInsert(list, 4);
  display(list); // 1 -> 2  -> 4  -> 5 -> 10  
}

int main()
{
    cout<<"******** Test Merge ***********\n";
    testMerge();
    cout<<"******** Test Intersect ***********\n";
    testIntersect();
    cout<<"******** Test InsertSort ***********\n";
    testInsertSort();
}