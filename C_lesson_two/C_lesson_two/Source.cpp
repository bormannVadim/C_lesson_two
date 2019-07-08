#include <stdio.h>
// —авенко ¬адим 
// 3 - не получилось

//
void dec_to_bin(int n) {
	if (n >= 2)
		dec_to_bin(n / 2);
	printf("%d",n % 2);
}

int pow(int n,int k)
{
	if (k > 0)
	{
		k--;
		return pow(n, k)*n;
	}
	else
		return 1;
}

int Pow(int n, int k)
{
	int num = n;
	while (k > 1)
	{
		n*= num;
		k--;
	}
	return n;
}

// рекурси€ добавл€юща€ 1
int NumPlusOne(int start, int end)
{
	if (start != end)
	{
		start++;
		NumPlusOne(start, end);
	}
	return start;
}
// рекурси€ умножающа€ на 2
//int CountRec(int start, int end)
//{
//	if (start < end)
//	{
//	    NumPlusOne(start, end);
//		start *= 2;
//		CountRec(start, end);
//	}
//}

// 
int CountCycle(int start, int end)
{
	int count = 0;
	while (start < end)
	{
		count++;
		start *= 2;
	}
	return count;
}

int main() {
	dec_to_bin(10);
	printf("\n");
	printf("%d",pow(2,4));
	printf("\n");
	printf("%d", Pow(2, 4));
	printf("\n");
	printf("%d", CountCycle(3, 20));
	getchar();
	return 0;
}

