//.��������
//struct  S
//
//{
//	int n;
//	char c;
//	int arr[0];//��������
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
#include<stdio.h>
int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}