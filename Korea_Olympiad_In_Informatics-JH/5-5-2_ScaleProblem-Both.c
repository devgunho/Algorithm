/*
좌우에 접시가 있는 양팔저울을 사용해서 무게를 재려고 할때,
사용하는 추의 종류와 갯수를 최소가 되게 하려면 어떤 추를 어떻게 사용해야 하는지를
출력하는 프로그램을 작성하시오.

2. 양쪽 접시를 모두 사용할 수 있는 경우
*/

#include <stdio.h>

int w = 7;
int chu = 1;

void base(int n)
{
	int r;
	if (n == 0) return;
	else {
		r = n % 3;
		n /= 3;
		if (r == 1) printf("왼쪽에 %dg 추를 놓는다.\n", chu);
		else if (r == 2) {
			n += 1;	// 다음수(즉 3의 배수)를 참조해야 하므로
			printf("오른쪽에 %dg 추를 놓는다.\n", chu);
		}
		chu *= 3;
		base(n);
	}
}

int main()
{
	base(w);
	return 0;
}