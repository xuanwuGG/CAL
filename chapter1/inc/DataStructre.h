#ifndef DATA_STRUCTURE_H
#define DATA_STRUCTURE_H
#include<iostream>


#define MaxSize 50
#define ElemType int


using namespace std;

typedef struct {
    ElemType data[MaxSize];
    int length;
} SqList;

void initList(SqList &L);
int Length(SqList L);//找不到时返回-1
int LocateElem(SqList L, ElemType e);
int GetElem(SqList L, int i);//i是位置，不是下标
bool ListInsert(SqList &L, int i, ElemType e);
bool ListDelete(SqList &L, int i, ElemType &e);
void PrintList(SqList L);
void IsEmpty(SqList &L);
void DestroyList(SqList &L);
int min(int a,int b);
int max(int a,int b);   
#endif // DATA_STRUCTURE_H