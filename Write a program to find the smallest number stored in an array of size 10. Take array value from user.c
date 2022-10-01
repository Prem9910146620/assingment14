
main()
{
    int a[10],i,smallest=-1;
    printf("enter 10 values \n");
     for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        smallest=a[0];
    for(i=0;i<10;i++)
    { if(smallest>a[i])
           smallest=a[i]; }
          printf("smallest value is %d",smallest);

    return 0;
}
