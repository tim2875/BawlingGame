/***********************************
 **	볼링 점수 계산 프로그램	  **
 **	 작성자 : 이주환          **
 ** 	 작성일 : 2016년 5월 9일  **
 **********************************/
#include <stdio.h>
int main()
{
	int num = 0, a, b, c, d, e, f, g, h, x, sum;

	while (num < 10)
{

	if ( a > 10, b > 10, c > 10, d > 10, e > 10, f > 10)
		break;
	Do:
{	num++;
	if ( num > 10)
	 break;
	if (num == 10)
	 goto Io;

	printf("%d번째 프레임 1번째 처리 핀 수 : ", num);
	scanf("%d", &a);
	sum += a;
	printf("**** 현재까지 점수 : %d\n", sum);
	 
	 if ( num == 1){
	  if (a == 10){
		  ;
	}
		else
		  if (a != 10){
			printf("%d번째 프레임 2번째 처리 핀 수 : ", num);
			scanf("%d", &b);
			sum += b;
			printf("**** 현재까지 점수 : %d\n", sum);
	 }		
	}	
	 if ( num > 1){
	  if (a == 10){
		  ;
	}
		else
		  if (a != 10){
			printf("%d번째 프레임 2번째 처리 핀 수 : ", num);
			scanf("%d", &b);
			sum += b;
			printf("**** 현재까지 점수 : %d\n", sum);
	 }		
		 
	 }

	Go:
{   num++;
	if ( num > 10)
		break;
	if ( num == 10)
		goto Io;
	printf("%d번째 프레임 1번째 처리 핀 수: ", num);
	scanf("%d", &c);
	
	if (a == 10, c == 10){
	sum += 2 * a;
	printf("****현재까지A 점수 : %d\n", sum);
		;
	}
	 else
	   if (a == 10, c != 10){
	 	sum += 2 * c;
		printf("****현재까지A 점수 : %d\n", sum);
		printf("%d번째 프레임 2번째 처리 핀 수: ", num);
		scanf("%d", &d);
		sum += 2 * d;
	   	printf("****현재까지A 점수 : %d\n", sum);
		goto Do;
	}
	 else
	   if ((a+b) == 10, a != 10, c == 10){
		sum += 2 * c;
		printf("**** 현재까지A 점수 : %d\n", sum);
		;
		goto Go;
	}
	 else
	   if ((a+b) == 10, a != 10, c != 10){
		sum += c;
		printf("**** 현재까지 점수 : %d\n", sum);
		printf("%d번째 프레임 2번째 처리 핀 수: ", num);
		scanf("%d", &d);
		sum += d;
		printf("**** 현재까지 점수 : %d\n", sum);
		goto Do;
	}
	 else 
	   if ((a+b) != 10, c == 10){
		sum += c;
		printf("**** 현재까지 점수 : %d\n", sum);
	    goto Go;
	}
	 else
	   if ((a+b) != 10, c != 10){
	{
		sum += c;
		printf("**** 현재까지 점수 : %d\n", sum);
		printf("%d번쨰 프레임 2번째 처리 핀 수: ", num);
		scanf("%d", &d);
		
	}
		if ((c+d) == 10){
		 sum += d;
		 printf("****현재까지 점수 : %d\n", sum);
		 goto Go;
	}
		if ((c+d) != 10){
		 sum += d;
		 printf("****현재까지 점수 : %d\n", sum);
		 goto Do;
	}
	}

}	 
	Ho:	
{   num++;	
	if( num > 10)
		break;
	if ( num == 10)
	goto Io;
	printf("%d번째 프레임 1번째 처리 핀 수: ",num);
	scanf("%d", &e);
	
 	if (a == 10, c == 10, e == 10){
		sum += 3 * e;
		printf("**** 현재까지 점수 : %d\n",sum);
	goto Ho;
		;
	}
	 else
	   if (e == 10){
		   ;
	}
	 else
	   if (e != 10){
	{
		   sum += 3 * e;
		   printf("**** 현재까지 점수 : %d\n",sum);
		   printf("%d번째 프레임 2번째 처리 핀 수: ", num);
		   scanf("%d", &f);
	}
	   if ((e+f) == 10){						//오류 가능성
	    sum += 3 * f;
	    printf("**** 현재까지 점수 : %d\n", sum);
	goto Go;
	}
	   else 
	     if ((e+f) != 10){
		  sum += 3*f;
		  printf("**** 현재까지 점수 : %d\n", sum);
		  goto Do;
	}
}
	  else
	    if ( a == 10, (c+d) == 10, e == 10){
         sum += 3 * e;
		 printf("**** 현재까지 점수 : %d\n", sum);
		 goto Ho;
	}
	  else
	    if ( a == 10, (c+d) == 10, e != 10){
    {	 sum += 2 * e;
		 printf("**** 현재까지 점수 : %d\n", sum);
		 printf("%d번째 프레임 2번째 처리 핀 수: ", num);
		 scanf("%d", &f);
	}
		if ((e+f) == 10){
		 sum += f;
		 printf("**** 현재까지 점수 : %d\n", sum);
		 goto Go;
	}
		else
		  if ((e+f) != 10){
		   sum += f;
		   printf("**** 현재까지 점수 : %d\n", sum);
		   goto Do;
	}
}
       else
	     if (a != 10, c != 10, e == 10){
		  sum += e;
		  printf("**** 현재까지 점수 : %d\n", sum);
			 
		  goto Go;
	}
	   else 
	     if (a != 10, c != 10, e != 10){
		  sum += e;
		  printf("**** 현재까지 점수 : %d\n", sum);
		  printf("%d번째 프레임 2번째 처리 핀 수: ", num);
		  scanf("%d", &f);
		  if ((e+f) != 10){
		   sum += f;
		   printf("**** 현재까지 점수 : %d\n", sum);
		   goto Do;
	}
		  else 
			if ((e+f) == 10){
			 sum += f;
	  		 printf("****현재까지 점수 : %d\n", sum);
	   		 goto Go;		 
	}
	}
	   else
	     if (a != 10, c == 10, e != 10){
		  sum += 2 * e;
		  printf("**** 현재까지 점수 : %d\n", sum);
		  printf("%d번째 프레임 2번째 처리 핀 수: ", num);
		  scanf("%d", &f);
		  if ((e+f) != 10){
		   sum += 2 * f;
		   printf("**** 현재까지 점수 : %d\n", sum);
		   goto Do;
	}
		  
		  else 
			if ((e+f) == 10){
			 sum += 2 * f;
	  		 printf("****현재까지 점수 : %d\n", sum);
	   		 goto Go;		 
	}
}
	   else
	     if (a != 10, c == 10, e == 10){
		  sum += 2 * e;
		  printf("**** 현재까지 점수 : %d\n", sum);
		  goto Ho;
	} 
	 





	Io:
	 if ( num == 10 ){	
		 if (a == 10){
		  printf("%d 번째 프레임 2번째 점수 :", num);
		  scanf("%d", &g);
		  sum += g;
		  printf("**** 현재까지 점수 : %d\n", sum);
		  printf("%d 번째 프레임 3번째 점수 :", num);
		  scanf("%d", &h);
		  sum += h;
		  printf("**** 최종점수 : %d\n", sum);
	}
		else
		  if ((a+b) == 10, a != 10){
	{
		    printf("%d 번째 프레임 1번째 점수 :", num);
		  	scanf("%d", &g);
			sum += g * 2;
		 	printf("**** 현재까지 점수 : %d\n", sum);
			printf("%d 번째 프레임 2번째 점수 :", num);
			scanf("%d", &h);
			sum += h;
			printf("**** 현재까지 점수 : %d\n", sum);}
	      if ((g + h) == 10)
	{
			printf("%d 번째 프레임 3번째 점수 :", num);      //여기 오류
			scanf("%d", &x);
			sum += x;
			printf("**** 최종점수: %d\n", sum);}
		  
		
		else
		  if ((a+b) != 10, a != 10){
		    printf("%d 번째 프레임 1번째 점수 :", num);
		    scanf("%d", &g);
			sum += g;
		    printf("**** 현재까지 점수 : %d\n", sum);
		    printf("%d 번째 프레임 2번쨰 점수 :", num);
			scanf("%d", &h);
			sum += h;
			printf("**** 최종점수: %d\n", sum);
	    }
	  }	
	}
}
}

}
return 0;
}
