#include<iostream>
#include"DataStructre.h"


void func01(SqList &L,ElemType &e){
    if(L.length == 0){
        cout<<"空表"<<endl;
        return;
    }
    e = L.data[0];
    int i=0;
    for(; i < L.length; i++){
        if(L.data[i] < e){
            e = L.data[i];
        }
    }
    L.data[i]=L.data[L.length-1];
    L.length--;
}

void func02(SqList &L){
    ElemType e;
    int l=0;int r=L.length-1;
    while(l<r){ 
        e=L.data[l];
        L.data[l]=L.data[r];
        L.data[r]=e;
        }
}