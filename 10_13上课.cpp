#include"stdio.h"
/*int main()
{int iCounter=0;
 double dHeight=0.0001; 
	while(dHeight<8848)
{dHeight*=2;
iCounter++;
}
printf("%d",iCounter);
	return 0;
}*/
/*int main()
{
	int i=1,iSum=0;
	while()
	{
		
	}
		
	printf("\n 1+2+3+……+100=%d\n",iSum);
	return 0;
}*/
/*int main()
{ int i=1,iSum=0;
	do
	{iSum=iSum+i;
		i=i+1;
	}
	while(i<=100);
	printf("%d",iSum);
	return 0;
 } */
 /*int main()
 {
 	int i=1,iSum=0;
 	while(i<=99)
 	{
 		iSum=iSum+i;
 		i=i+2;
	 }
	 printf("%d",iSum);
 	return 0;
 }//偶数同理*/
 
 //1到100之间能被三整除的偶数
/* int main()
 {
 	int i=1,iSum=0;
 	while(i<=99)
 	{   if(i%3==0 && i%2)
 		iSum=iSum+i;
 		i++;//？ 
	 }
	 printf("%d",iSum);
 	return 0;
  } */
/* int main()
 {
   
  int i =6,iSum=0;
  while(i<=100)
  {
  	iSum=iSum+i;//能被3整除的偶数，每个都差6 
  	i+=6;
  	
  }
  printf("%d",iSum);
}*/
int main ()
{
	for(int i=1,iSum=0;i<=100,i=i+1;)//C89不允许随时定义，得放到最前面，C99允许 
	iSum=iSum+i; 
	printf("%d",iSum);
	return 0;
 } 
  
