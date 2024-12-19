

/*
Arkaaap :
DATE: 12/19/2024
Purpose New data types originated from the pre bulit ones abstraction....
Sayonara
*/#include <stdio.h>
#include <stdbool.h>

typedef int Page;
typedef int pageNo;
typedef short Atom;
typedef int NoofBooks;



struct pageNo{
    NoofBooks *nf;
};

struct Page{
    Atom a;
    
};

struct Book{
    Page p[10];
    pageNo Pn;
    
};


int main (int argc ,char **argv)
{
    struct Book b;
    int i;
    for (i = 0 ;i<=9;i++)
    {
        printf ("Enter the %d'st pages",i+1);
        scanf ("%d",&b.p[i]);
    }
    
    for (i = 0 ;i<10;i++)
    {
        printf ("%d\t\n",b.p[i]);
    }
    b.Pn = 31;
    printf ("%d\t\n",b.Pn);
    
    return (0x00);
}
