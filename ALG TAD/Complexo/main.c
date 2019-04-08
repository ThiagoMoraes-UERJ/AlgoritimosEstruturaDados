#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float a,b;
}Complexo;

Complexo*cria()
{
    Complexo*c;
    c = (Complexo*)malloc(sizeof(Complexo));
    if(c==NULL)
    {
        printf("Memória Insufuciente");
        exit(1);
    }
    printf("Digite a parte real 'a' e a imaginaria 'b' de  'a+bi' \n");
    scanf("%f",&c->a);
    scanf("%f",&c->b);
    return c;
}
void Exibe(Complexo*d)
{
    printf("%4.2f + %4.2f*i\n",d->a,d->b);
}
void VerificaReal(Complexo*e)
{
    if(e->b==0)
    {
        printf("o numero e real\n");
    }
    else
    {
        printf("o numero nao e real \n");
    }
}
Complexo* Soma(Complexo*a,Complexo*b)
{
    Complexo*c;
    c= (Complexo*)malloc(sizeof(Complexo));
    c->a = a->a + b->a;
    c->b = a->b + b->b;
    return c;
}
Complexo* produto(Complexo*a,Complexo*b)
{
    Complexo*c;
    c= (Complexo*)malloc(sizeof(Complexo));
    c->a = (a->a * b->a)+(a->b*b->b);
    c->b = 2*(a->a * b->b);
    return c;
}
Complexo* absoluto(Complexo*a)
{
    if(a->a < 0)
    {
        a->a = a->a * (-1);
    }
    if(a->b<0)
    {
        a->b = a->b * (-1);
    }
    return a;
}

int main()
{
    Complexo*f,*g;
    float h;
    f = cria();
    Exibe(f);
    VerificaReal(f);
    g = cria();
    Exibe(produto(f,g));


    return 0;
}
