/*
13. ASCII 코드를 이용해서 문자를 출력하는 프로그램을 작성하시오.
ASCII 코드 중 0~31번, 127번은 제어 문자이므로 32~126번에 할당된 문자들만 출력하는데, 한 줄에 24개씩 출력하시오.

실행결과
  ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7
8 9 : ; < = > ? @ A B C D E F G H I J K L M N O
P Q R S T U V W X Y Z [ \ ] ^ _ ` a b c d e f g
h i j k l m n o p q r s t u v w x y z { | } ~
*/
#include<stdio.h>
int pa05_13(void)
{
	int count = 0;
	for (int i = 32; i < 127; i++)
	{
		printf("%c ", i);

		count++;
		if (count == 24) 
		{
			printf("\n");
			count = 0;
		}

	}
}