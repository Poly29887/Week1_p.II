#include<stdio.h>
int main()
{
	int k, mid, final, score;
	scanf("%d", &k);
	scanf("%d", &mid);
	scanf("%d", &final);
	if ((k >= 0 && k <= 30) && (mid >= 0 && mid <= 30) && (final >= 0 && final <= 40))
	{
		score = k + mid + final;
		if (score >= 80 && score <= 100) printf("A");
		else if (score >= 75 && score <= 79) printf("B+");
		else if (score >= 70 && score <= 74) printf("B");
		else if (score >= 65 && score <= 69) printf("C+");
		else if (score >= 60 && score <= 64) printf("C");
		else if (score >= 55 && score <= 59) printf("D+");
		else if (score >= 50 && score <= 55) printf("D");
		else if (score >= 0 && score <= 49) printf("F");
	}
}