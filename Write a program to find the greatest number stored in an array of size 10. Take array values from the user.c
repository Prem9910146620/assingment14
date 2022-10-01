main()
{
    int a[10],i,max=-1;
    printf("enter 10 values \n");
     for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
           { if(max<a[i])
           max=a[i]; }
          printf("max value is %d",max);

    return 0;
}
