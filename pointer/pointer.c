void pointer(int* nbr)
{
	*nbr = 10; //nbr�����Ϳ� �������Ͽ� 10�� ���� �־��
}

int main()
{
	int a;
	pointer(&a); //&a - a�� �ּڰ� a = 10;
}

/*	
	����
	int *numPtr;                    // ������. �����͸� ������ �� *
	printf("%d\n", *numPtr);    // ������. �����Ϳ� ����� ��
	printf("%d\n", numPtr);     // �������� �ּڰ��� ���
	printf("%d\n", &a);           // a������ �ּڰ��� ���
*/

// https://dojang.io/mod/page/view.php?id=549   -�ڵ����� ������1
// https://dojang.io/mod/page/view.php?id=550   -�ڵ����� ������2
