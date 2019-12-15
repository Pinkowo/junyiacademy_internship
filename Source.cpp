#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	/*1. (A.) 請寫⼀個程式把裡⾯的字串反過來。
	(B.) 請寫⼀個程式把裡⾯的字串，每個單字本⾝做反轉，但是單字的順序不變。*/

	char s[100];
	int n = strlen(s);
	scanf("%s", s);
	for (int i = 0; i < n;i++) {
		int t = 0;
		t = s[i];
		s[i] = s[n-i];
		s[n - i] = t;
	}
	for (int i = 0; i < n; i++)printf("%s", s[i]);


	//2. 請寫⼀個程式，Input 是⼀個數字，Output 是從 1 到這個數字，扣除掉所有 3 的倍數以及 5 的倍數，但是需要保留同時是 3 和 5 的倍數的總數字數。
	int x,sum = 0;
	scanf("%d", &x);
	for (int i = 1; i <= x;i++) {
		sum += i;
		if (i % 3 == 0 || i % 5 == 0) {
			sum -= i;
		}
		if (i % 3 == 0 && i % 5 == 0)sum += i;
	}
	printf("%d", sum);

	system("pause");
	return(0);
}

