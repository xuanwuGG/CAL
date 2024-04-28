#ifndef DATA_STRUCTURE_H
#define DATA_STRUCTURE_H

#define MaxSize 50
#define ElemType int

typedef struct {
    ElemType data[MaxSize];
    int length;
} SqList;

#endif // DATA_STRUCTURE_H