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

void func03(SqList &L,int x){
    int slow=0,fast=0;
    while(fast<L.length){
        if(L.data[fast]!=x){
            L.data[slow]=L.data[fast];
            slow++;
        }
        fast++;
    }
    
}

bool func04(SqList &L,int s,int j){
    if(L.length==0||s>j||s<0||j>L.length){
        cout<<"参数不合法"<<endl;
        return false;
    }
    int i=s;
    ElemType e;
    for(;i<j;i++){
        ListDelete(L,i,e);
    }
}

void func05(SqList &L){
    int i=0;
    while(i<L.length-1){
        ElemType e=L.data[i];
        for(int j=i+1;j<L.length;j++){
           if(L.data[j]==e){
               ListDelete(L,j,e);
           }
        }
        i++;
    }
}

SqList func06(SqList &L1,SqList &L2){
    SqList newL;
    int i=0,j=0;
    while(i<L1.length&&j<L2.length){
        if(L1.data[i]<L2.data[j]){
            ListInsert(newL,newL.length+1,L1.data[i]);
            i++;
        }
        else{
            ListInsert(newL,newL.length+1,L2.data[j]);
            j++;
        }
    }
    while(i<L1.length){
        ListInsert(newL,newL.length+1,L1.data[i]);
        i++;
    }
    while(j<L2.length){
        ListInsert(newL,newL.length+1,L2.data[j]);
        j++;
    }
    return newL;
}

void func07(ElemType a[],int m,int n){
    ElemType*tmp=new ElemType[m];
    copy(a,a+m,tmp);
    copy(a+m,a+n,a);
    copy(tmp,tmp+m,a+n);
    delete[] tmp;
}


void func08(SqList &L,int target){
    int left=0;
    int right=L.length;
    int mid;
    while(left<right){
        mid=(left+right)/2;
        if(L.data[mid]==target){
            if(mid==L.length-1){
                return;
            }
            ElemType e=L.data[mid];
            L.data[mid]=L.data[mid+1];
            L.data[mid+1]=e;
        }
        else if(L.data[mid]<target){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    if(target<L.data[left]){
        ListInsert(L,left,target);
    }
    else{
        ListInsert(L,left+1,target);
    }
}

void func09(){}

void func10(int a[],int n,int p){//时间复杂度O(n),空间复杂度O(p)
    int* tmp=(int*)malloc(sizeof(int)*p);
    copy(a,a+p,tmp);
    copy(a+p,a+n,a);
    copy(tmp,tmp+p,a+n);
    free(tmp);
}

// void func11(int a[],int b[],int n){
//     int l1=0;int l2=0;
//     int r1=n-1;int r2=n-1;
//     while(l1<r1&&l2<r2){
//         int Max=max(a[l1],b[l2]);
//         if(a[l1]<Max){l1++;}
//         else if(a[l2]<Max){l2++;}
//         int Min=min(a[r1],b[r2]);
//         if(a[r1]>Min){r1--;}
//         else if(a[r2]>Min){r2--;}
//     }
//     while(l1<r1){

//     }

// }

