#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void reverse(char arr[]) {
	int len = strlen(arr);
	for (int i = 0; i < len / 2; i++) {
		char temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}

int main() {
	char a[10001] = { 0, };
	char b[10001] = { 0, };
	char res[10002] = { 0, };
	int carry = 0;
	int len;
	scanf("%s %s", a, b);

	reverse(a);
	reverse(b);

	if (strlen(a) > strlen(b))
		len = strlen(a);
	else
		len = strlen(b);

	for (int i = 0; i < len; i++) {
		//숫자로 변환해 받아올림과 함께 더한다
		int sum = a[i]-'0' + b[i] -'0' + carry;
		//A[i] 또는 B[i]가 null인 경우 불필요한 뺄셈이 발생하므로
		//0 이상이 될 때까지 문자 0의 아스키 코드 값을 더한다
		while (sum < 0)
			sum += '0';
		if (sum > 9)
			carry = 1;
		else
			carry = 0;
		res[i] = sum % 10+'0';//받아올림 하고 남은 일의 자리 수의 아스키코드를 저장
		
	}
	if (carry == 1)
		res[len] = '1';
	reverse(res);
	printf("%s", res);
	return 0;
}