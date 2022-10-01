 main()
{
    int a[10],i,sumeven=0,sumodd=0;
    printf("enter 10 number \n");
     for(i=0;i<10;i++)
     scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        if(a[i]%2==0)
        sumeven=sumeven+a[i];
    else
        sumodd=sumodd+a[i];


         printf(" \n sum even number is %d",sumeven);
         printf(" \n sum of odd number is %d",sumodd);
     return 0;
}
