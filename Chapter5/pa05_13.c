/*
13. ASCII �ڵ带 �̿��ؼ� ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ASCII �ڵ� �� 0~31��, 127���� ���� �����̹Ƿ� 32~126���� �Ҵ�� ���ڵ鸸 ����ϴµ�, �� �ٿ� 24���� ����Ͻÿ�.

������
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