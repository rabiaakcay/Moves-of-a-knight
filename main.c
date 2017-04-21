#include <stdio.h>
#include <conio.h>

//void ch(int i,int j,int a[8][8]);

int main()
{
  system("color 04");
  printf("FINDING THE POSSIBLE MOVES OF A KNIGHT \n\n");
  int i,j,ith,jth;
  int counter=0;
  int a[8][8];
  printf("The chess board: \n\n");
  for (i=0; i<8; i++)
   {
    for(j=0; j<8; j++)
    {
     a[i][j]=0;
     printf("%5d",a[i][j]);
    }
    printf("\n\n");
   }
  printf("Enter initial values of knight \n\n");
  printf("Please enter the line: \n ");    scanf("%d",&ith);
  printf("Please enter the column: \n ");  scanf("%d",&jth);
  printf("\n\n");

  if(ith<=8 && ith>0 && jth<=8 && ith>0)
  {
    for (i=0; i<8; i++)
    {
     for(j=0; j<8; j++)
      {
        a[i][j]=0;
        a[ith-1][jth-1]=1;
        printf("%4d",a[i][j]);
      }
      printf("\n\n");
    }
  }
  else
  {
    printf("Please enter the valid values(Between 1-8)");
  }
  printf("\n\n");
  

 if((ith>0 && jth>0)&&(ith<=8 && jth<=8))
  {
    printf("Possible moves of a knight:\n\n");
    void ch(int i,int j,int a[8][8]) ;
    
    
     /*  if((ith>=0 && jth-3<8 && jth-3>=0 && ith<8) && (a[ith][jth-3]==0))
            {
                counter++;
                a[ith][jth-3]=counter;
            }
		
		 if((ith>=0 && jth+1<8 && ith<8 && jth+1>=0)&&(a[ith][jth+1]==0))
          {
	         counter++;
     		 a[ith][jth+1]=counter;
          }
         
		 if((ith+1>=0 && jth<8  && ith+1<8 ) && (a[ith+1][jth]==0))
          {
	         counter++;
     		 a[ith+1][jth]=counter;
          }
          
         if((ith+1>=0 && jth-2<8 && jth-2>=0 && ith+1<8) && (a[ith+1][jth-2]==0))
          {
	          counter++;
     	   	  a[ith+1][jth-2]=counter;
          }
          
          if((ith-3>=0 && jth<8 && ith-3<8 ) && (a[ith-3][jth]==0))
          {
	         counter++;
     	   	 a[ith-3][jth]=counter;
          }
          
		  if((ith-3>=0 && jth-2<8 && ith-3<8 && jth-2>=0) && (a[ith-3][jth-2]==0))
	      {
	         counter++;
     		 a[ith-3][jth-2]=counter;
          }
         
		  if((ith-2>=0 && jth+1<8 && ith-2<8 ) && (a[ith-2][jth+1]==0))
          {
	          counter++;
     	   	  a[ith-2][jth+1]=counter;
          }
          
		  if((ith-2>=0 && jth-3<8 && ith-2<8 && jth-3>=0) && (a[ith-2][jth-3]==0))
          {
	        counter++;
			a[ith-2][jth-3]=counter;
	      }
	      
           for(i=0;i<8;i++)
	       {
		       for(j=0;j<8;j++)
		       { 
		      	a[i][j] ;
		      	a[ith-1][jth-1]=1;
			    printf("%5d",a[i][j]);
               }
                printf("\n\n");
            }*/
  }

   else
         {
	       printf("Location is out of chessboard");
         } 

return 0;
 }
 void ch(int i,int j,int  a[8][8])
{
	int ith,jth,counter=0;
	 if((ith>0 && jth>0)&&(ith<=8 && jth<=8))
  {
    printf("Possible moves of a knight:\n\n");
   
      if((ith>=0 && jth-3<8 && jth-3>=0 && ith<8) && (a[ith][jth-3]==0))
            {
                counter++;
                a[ith][jth-3]=counter;
            }
		
		 if((ith>=0 && jth+1<8 && ith<8 && jth+1>=0)&&(a[ith][jth+1]==0))
          {
	         counter++;
     		 a[ith][jth+1]=counter;
          }
         
		 if((ith+1>=0 && jth<8  && ith+1<8 ) && (a[ith+1][jth]==0))
          {
	         counter++;
     		 a[ith+1][jth]=counter;
          }
          
         if((ith+1>=0 && jth-2<8 && jth-2>=0 && ith+1<8) && (a[ith+1][jth-2]==0))
          {
	          counter++;
     	   	  a[ith+1][jth-2]=counter;
          }
          
          if((ith-3>=0 && jth<8 && ith-3<8 ) && (a[ith-3][jth]==0))
          {
	         counter++;
     	   	 a[ith-3][jth]=counter;
          }
          
		  if((ith-3>=0 && jth-2<8 && ith-3<8 && jth-2>=0) && (a[ith-3][jth-2]==0))
	      {
	         counter++;
     		 a[ith-3][jth-2]=counter;
          }
         
		  if((ith-2>=0 && jth+1<8 && ith-2<8 ) && (a[ith-2][jth+1]==0))
          {
	          counter++;
     	   	  a[ith-2][jth+1]=counter;
          }
          
		  if((ith-2>=0 && jth-3<8 && ith-2<8 && jth-3>=0) && (a[ith-2][jth-3]==0))
          {
	        counter++;
			a[ith-2][jth-3]=counter;
	    }
	  }}
   /*        for(i=0;i<8;i++)
	       {
		       for(j=0;j<8;j++)
		       { 
		      	a[i][j] ;
		      	a[ith-1][jth-1]=1;
			    printf("%5d",a[i][j]);
               }
                printf("\n\n");
            }
  }

   else
         {
	       printf("Location is out of chessboard");
         } 

}*/


