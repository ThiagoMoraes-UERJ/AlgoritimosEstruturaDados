#include <stdio.h>
#include <stdlib.h>
//selectionsort em ordem decrescente.

void SelectionSort ( int *A, int n)
{
    int i,menor,j,aux;
    for(i=0;i<n-1;i++)
    {
        menor = i;
        for(j=i+1;j<n;j++)
        {
            if(A[menor]> A[j])
            {
                menor=j;
            }
        }
        if(menor != i)
        {
            aux=A[i];
            A[i] = A[menor];
            A[menor] = aux;
        }
    }

}

// InsertionSort em ordem decrescente.
void InsertionSort (int *A,int n)
{
    int i,j,chave;
    for(j=1;j<n;j++)
    {
        chave = A[j];
        i = j-1;
        while(i>=0 && A[i] < chave)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]= chave;
    }
}
//BubleeSortM.
void BubleeSortMelhorado (int *A, int n)
{
    int i,j,guarda,troca,n1,aux;

    troca = 1;
    n1=n;
    guarda = n;

    while(troca==1)
    {
        j=n1-1;
        troca = 0;
        while(j>=0)
        {
            if(A[j]>A[j-1])
            {
                aux = A[j-1];
                A[j-1] = A[j];
                A[j] = aux;
                troca = 1;
                guarda = j;
            }
            j=j-1;
        }
      n1= guarda;
    }
}
//merge SORT.

void Intercala(int *A, int p , int q, int r)
{
    int i,j,k;
    int B[q];
    for(i=p-1; i<q;i++)
    {
        B[i]= A[i];
    }
    for (j=q; j<r;j++)
    {
        B[r+q-1-j]=A[j];
    }
    i=p-1;
    j=r-1;
    for(k=p-1;k<r;k++)
    {
        if (B[i]<=B[j])
        {
            A[k]= B[i];
            i=i+1;
        }
        else
        {
            A[k]=B[j];
            j=j-1;
        }

    }
}

void MergeSort(int *A,int p, int r)
{
    if (p<r)
    {
        int q;
        q = (p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A, q+1,r);
        Intercala(A,p,q,r);
    }
}

//Quick Sort
void troca(int *a,int i,int b)
{
    int c;
    c=a[i];
    a[i]=a[b];
    a[b]=c;

}
void QuickSort (int *A, int p, int q)
{
    int r;

    if (p<q)
    {
        r= Particao(A,p,q);
        QuickSort(A,p,r-1);
        QuickSort(A,r+1,q);
    }
}
int Particao(int *A, int p, int q)
{
    int x,i,j,s;
    x=A[p];
    i=p;
    for(j=p+1;j<=q;j++)
    {
        if (A[j]<=x)
        {
            i=i+1;
            troca(A,i,j);

        }
    }
    troca(A,p,i);
    return i;


}

//Contagem
void Contagem (int *A, int n)
{
    int i,j,k;
    int C[n],B[n];
    for (i=0 ;i<n;i++)
    {
        C[i]=0;
    }
    for (j=0 ;i<n;i++)
    {
        C[A[j]]=C[A[j]]+1;
    }
    for (i=1 ;i<k;i++)
    {
        C[i]=C[i]+C[i-1];
    }
    for (j=n ;i>=0;i--)
    {
        B[C[A[j]]]=A[j];
        C[A[j]]=C[A[j]]-1;
    }
}



int main()
{ int A[9]={9,8,7,9,5,4,3,2,5};
   int n= 9;
   int i;


   SelectionSort(A,n);

   for(i=0; i<n;i++)
        {
           printf("%d ",A[i]);
        }
    return 0;
}
