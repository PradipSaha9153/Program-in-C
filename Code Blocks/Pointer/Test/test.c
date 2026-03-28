main()
{
    int x=5, *p, **q, ***r;

    p=&x;
    q=&p;
    r=&q;

    printf("%d %d %d %d\n",q,*r,x,&p);
    printf("%d %d %d %d\n",&q,**r,*p,&x);
    printf("%d %d %d %d",***r,**&p,r,**q);

    getch();
}
