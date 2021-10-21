void pointer(int* nbr)
{
	*nbr = 10; //nbr포인터에 역참조하여 10의 값을 넣어라
}

int main()
{
	int a;
	pointer(&a); //&a - a의 주솟값 a = 10;
}

/*	
	정리
	int *numPtr;                    // 포인터. 포인터를 선언할 때 *
	printf("%d\n", *numPtr);    // 역참조. 포인터에 사용할 때
	printf("%d\n", numPtr);     // 포인터의 주솟값을 출력
	printf("%d\n", &a);           // a변수의 주솟값을 출력
*/

// https://dojang.io/mod/page/view.php?id=549   -코딩도장 포인터1
// https://dojang.io/mod/page/view.php?id=550   -코딩도장 포인터2
