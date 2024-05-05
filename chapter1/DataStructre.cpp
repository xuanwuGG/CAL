#include"DataStructre.h"

void initList(SqList &L){
    L.length = 0;
    for(int i = 0; i < MaxSize; i++){
        L.data[i] = 0;
    }
}
int Length(SqList L){
    return L.length;
}
int LocateElem(SqList L, ElemType e){
    for(int i = 0; i < L.length; i++){
        if(L.data[i] == e){
            return i;
        }
    }
    return -1;
}
int GetElem(SqList L, int i){
    if(i <= 0 || i > L.length){
        return -1;
    }
    return L.data[i-1];
}
bool ListInsert(SqList &L, int i, ElemType e){
    if(i<1||i>L.length+1){
        cout<<"插入位置不合法"<<endl;
        return false;
    }
    if(L.length >= MaxSize){
        cout<<"表满"<<endl;
        return false;
    }
    for(int j = L.length; j >= i; j--){
        L.data[j] = L.data[j-1];
    }
    return true;
}
bool ListDelete(SqList &L, int i, ElemType &e){
    if(i<1||i>L.length){
        cout<<"删除位置不合法"<<endl;
        return false;
    }
    if(L.length == 0){
        cout<<"表空"<<endl;
        return false;
    }
    e = L.data[i-1];
    for(int j = i; j < L.length; j++){
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}
void PrintList(SqList L){
    for(int i = 0; i < L.length; i++){
        cout<<L.data[i]<<" ";
    }
    cout<<endl;
}
void IsEmpty(SqList &L){
    if(L.length == 0){
        cout<<"空表"<<endl;
    }else{
        cout<<"非空表"<<endl;
    }
}
void DestroyList(SqList &L){
    L.length = 0;
    for(int i = 0; i < MaxSize; i++){
        L.data[i] = 0;
    }
}

int min(int a, int b){
    return a < b ? a : b;
}

int max(int a, int b){
    return a > b ? a : b;
}