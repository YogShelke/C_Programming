//write a programwhich accept  number from user and print Even factor of that number 
//ip: 36
//op:2,4,6,12,18
        #include<stdio.h>
         void DisplayEvenFactor(int iNo)
         {
                 int i=0;
                      if(iNo<=0)
                      {
                          iNo=-iNo;
                      }
                      for(i=1;i<iNo;i++)
                      {
                          if(((iNo%i)==0)&&((i%2)==0))
                          {
                              printf("%d",i);
                          }
                      }
         }
             int main()
             {
                   int iValue=0;
                   printf("Enter the number");
                   scanf("%d",&iValue);
                   DisplayEvenFactor(iValue);
                   return 0;
             }