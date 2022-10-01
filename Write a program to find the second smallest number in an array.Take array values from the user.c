
main()
{
    int a[10],i,j;
    int g;
    printf("enter 10 number\n ");
    for(i=0;i<10;i++)
    { scanf("%d",&a[i]); }
    for(i=0;i<9;i++ )
    {  for(j=i+1;j<10;j++)
        { if(a[i]>a[j])
           { g=a[i];
           a[i]=a[j];
           a[j]=g; }
           }
    }
     printf(" second largest %d",a[1]);

    return 0;
}
