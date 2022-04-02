#include <stdio.h>
//int main(int argc,int argv[])
//{
//	int i, j, k, N;
//	printf("High:");
//	scanf_s("%d", &N);
//
//	for (i = 0; i <= N; i++)
//	{
//		for (j = i; j <= N-1; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <= 2*i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d\t", j, i, i * j);
//		
//		}	
//		printf("\n");
//	}
//	return 0;
//}





/*从小到大排序*/
//int main()
//{
//	int i, j, k, temp;
//	printf("请输入3个数：");
//	scanf_s("%d,%d,%d", &i, &j, &k);
//	if (i > j)
//	{
//		temp = i; i = j; j = temp;
//	}
//	if (i > k)
//	{
//		temp = i; i = k; k = temp;
//	}
//	if (j > k)
//	{
//		temp = j; j = k; k = temp;
//	}
//	printf("从小到大排序:%d,%d,%d", i, j, k);
//	return 0;
//}


//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


/*分数评分等级*/
//int main()
//{
//	int score;
//	char grade;
//	printf("please input a score\n");
//	scanf_s("%d", &score);
//	grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
//	printf("%d belongs to %c", score, grade);
//	return 0;
//}

//int main()
//{
//	int fs;
//	char cj;
//	printf("请输入分数:");
//	scanf_s("%d", &fs);
//	cj = fs >= 90 ? 'A' : (fs >= 60 ? 'B' : 'C');
//	printf("您的分数是%d\t\n对应的等级是%c\t", fs, cj);
//	return 0;
//}

//void Hello(void)
//{
//	printf("Hello World!\n");
//}
//
//void HHHello(void)
//{
//	int count;
//	for (count = 1; count <= 3; count++)
//	{
//		Hello();
//	}
//}
//int main()
//{
//	HHHello();
//	printf("\n\n\n");
//	Hello();
//}





/*有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
掉不满足条件的排列*/

//int main()
//{
//	int i, j, k;
//	printf("\n");
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)
//		{
//			for (k = 1; k <= 4; k++)
//			{
//				if (i != k && i != j && j != k)
//				{
//					printf("%d,%d,%d\n", i, j, k);
//				}
//			}
//		}
//	}
//}

//int main(int argc, int argv[])
//{
//	int i, j, k, n;
//	printf("金字塔层数:");
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = i; j <= n - 1; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <= 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void func(int b[])
//{
//	int j;
//	for (j = 0; j < 4; j++)
//	{
//		b[j] = j;
//	}
// }
//
//int main()
//{
//	int a[4] = { 5,6,7,8 }, i;
//	func(a);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%2d", a[i]);
//	}
//	return 0;
//}



//int main(int argc ,int argv[])
//{
//	int i,j, k, high;
//	printf("请输入高度:");
//	scanf_s("%d", &high);
//
//	for (i = 0; i < high; i++)
//	{
//		for (j = i; j <= high - 1; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <=2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[]) {
//	int n = argc > 1 ? atoi(argv[1]) : 4;
//	for (int j = 1; j <= n; j++) {
//		int s = 1 << j, k = (1 << n) - s, x;
//		for (int y = s - j; y >= 0; y--, putchar('\n')) {
//			for (x = 0; x < y + k; x++) printf("  ");
//			for (x = 0; x + y < s; x++) printf("%c ", '!' ^ y & x);
//			for (x = 1; x + y < s; x++) printf("%c ", '!' ^ y & (s - y - x - 1));
//		}
//	}
//}
//
//
//#include <math.h>
//#include <stdio.h>
//#include <stdlib.h>
//#define PI 3.14159265359
//float sx, sy;
//float sdCircle(float px, float py, float r) {
//	float dx = px - sx, dy = py - sy;
//	return sqrtf(dx * dx + dy * dy) - r;
//}
//
//float opUnion(float d1, float d2) {
//	return d1 < d2 ? d1 : d2;
//}
//
//#define T px + scale * r* cosf(theta), py + scale * r * sin(theta)
//
//float f(float px, float py, float theta, float scale, int n) {
//	float d = 0.0f;
//	for (float r = 0.0f; r < 0.8f; r += 0.02f)
//		d = opUnion(d, sdCircle(T, 0.05f * scale * (0.95f - r)));
//	if (n > 0)
//		for (int t = -1; t <= 1; t += 2) 
//		{
//			float tt = theta + t * 1.8f;
//			float ss = scale * 0.9f;
//			for (float r = 0.2f; r < 0.8f; r += 0.1f)
//			{
//				d = opUnion(d, f(T, tt, ss * 0.5f, n - 1));
//				ss *= 0.8f;
//			}
//		}
//
//	return d;
//}
//
//int main(int argc, char* argv[]) {
//	int n = argc > 1 ? atoi(argv[1]) : 3;
//	for (sy = 0.8f; sy > 0.0f; sy -= 0.02f, putchar('\n'))
//		for (sx = -0.35f; sx < 0.35f; sx += 0.01f)
//			putchar(f(0, 0, PI * 0.5f, 1.0f, n) < 0 ? '*' : ' ');


//
//int main()
//{
//	int day, month, year;
//	int sum = 0,lear=0;
//	printf("请输入年月日(用小数点隔开):");
//	scanf_s("%d.%d.%d", &year, &month, &day);
//
//	switch (month)
//	{
//	case 1:sum = 0; break;
//	case 2:sum = 31; break;
//	case 3:sum = 59; break;
//	case 4:sum = 90; break;
//	case 5:sum = 120; break;
//	case 6:sum = 151; break;
//	case 7:sum = 181; break;
//	case 8:sum = 212; break;
//	case 9:sum = 243; break;
//	case 10:sum = 273; break;
//	case 11:sum = 304; break;
//	case 12:sum = 334; break;	
//	default:printf("error\n"); break;
//	}
//	sum = sum + day;
//
//	/*闰年判断*/
//	if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0))
//		lear = 1;
//	else
//		lear = 0;
//	if (lear == 1 && month > 2)
//		sum++;
//	printf("这一天是这一年的第%d天", sum);
//}


//int main()
//{
//	char c;
//	int zm = 0, sz = 0, kg = 0, other = 0;
//	printf("请输入:");
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//			zm++;
//		else if (c == ' ')
//			kg++;
//		else if (c >= '0' && c <= '9')
//			sz++;
//		else
//			other++;
//	}
//	printf("在这段字符中，字母有%d个，数字有%d个，空格有%d个，其他字符有%d个", zm, sz, kg, other);
//	return 0;
//}

//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	printf("%d\n", x & 0b11111);
//	return 0;
//}

//#include <stdio.h>
//#define func(x) x*x
//int main() {
//    int a = 45111;
//    int b = 25176;
//    printf("%d\n", func(a + b));
//}

//#include<stdio.h>
//
//int main() {
//    static char* s[] = { "black", "white", "pink", "violet" };
//    char** ptr[] = { s + 3, s + 2, s + 1, s }, *** p;
//    p = ptr;
//    ++p;0   
//    printf("%s", **p + 1);
//    return 0;
//}
//

//int main()
//{
//	int x = 6;
//	x += x -= x * x;
//	printf("%d", x);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//void fanzhuan(char* str)
//{
//	char* p = str + strlen(str - 1);
//	char temp;
//	printf("%s\n", p);
//	while (str < p)
//	{
//		temp = *p;
//		*p-- = *str;
//		printf("%s\n", p);
//		*str++ = temp;
//	}
//}
//
//int main()
//{
//	char* str = strdup("zzytest");
//	fanzhuan(str);
//	printf("反转后:\n%s\n", str);
//	return 0;
//}


//#include <string.h>
//#include <stdio.h>
//#define N 50
//
//void fanzhuan(char str[N])
//{
//	int i,j;
//	char temp;
//	for (i = 0; i < strlen(str) / 2; i)
//	{
//		j = strlen(str) - 1;
//		temp = str[i];
//		str[i] = str[j - 1];
//		str[j - 1] = temp;
//	}
//	printf("\n输出：%s\n", str);
//}
//
//int main()
//{
//	char str[N];
//	printf("请输入:\n");
//	gets(str, N);
//	printf("输入的字符串为:%s\n", str);
//	convert(str);
//}


#include <stdio.h>

//int main()
//{
//	char str1[] = "Hello bit.";
//	char str2[] = "Hello bit.";
//	const char* str3 = "Hello bit.";
//	const char* str4 = "Hello bit.";
//	if (str1 == str2)
//	{
//		printf("str1和str2相同\n");
//	}
//	else
//	{
//		printf("str1和str2不同\n");
//	}
//	if (str3 == str4)
//		printf("3和4相同");
//	else
//		printf("3和4不同");
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		printf("%d", i);
//	}
//	
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//for (int i = 0; i < 10; i++)
//	//{
//		printf("%p\n", arr);
//		printf("%d\n", *arr);
//	//}
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//arr[i][j] = i * 5 + j + 1;
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i]);
//		}
//	}
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}*/
//
//
//	return 0;
//}


/*冒泡算法*/
//#include <stdio.h>
//int main()
//{
//	int str[] = { 0,9,186,2348942,6334144,129,94,1,9 };
//
//	int n;
//	int i, j;
//	int temp;
//	n = sizeof(str) / sizeof(str[0]);//求数组中元素个数
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (str[j] < str[j + 1])
//			{
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; ++i)
//	{
//		printf("%d ", str[i]);
//	}
//
//
//	return 0;
//}

//#include "stdio.h"
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int  j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//void maopao(int arr[],int sz)
//{
//	//确定冒泡排序的次数 n个元素要n-1次
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}	
//}
//int main()
//{
//	int arr[] = {
//		9,8,7,6,5,4,3,2,1,0
//	};//排序成0123456789
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//void maopao(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size- 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,7,9,6,11,94,17,4,78,56,32,4,5,8 };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr,size);
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void maopao(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			
//			if (a[j] < a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 646,3,331,10,79,1,6,7,16262 };
//	int i = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	maopao(a,sz);
//	printf("排序完为：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//
//	return 0;
//}

//int main(int argc,int argv[])
//{
//	int i, j, k, N;
//	printf("High: ");
//	scanf_s("%d", &N);
//	for (i = 0; i < N+1; i++)
//	{
//		for (j = 0; j < N - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k < 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int func(int a, int b) {
//    if (b == 0) {
//        return 1;
//    }
//    return func(a * a, b / 2) * ((b & 1) ? a : 1);
//}
//int main() {
//    printf("%d\n", func(61, 46));
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//void maopao(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//
//}
//
//int main()
//{
//	int a[] = { 1,0,2,5,63,4,6 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	maopao(a, sz);
//	for (i = 0; i < sz; i++)
//		printf("%d ", a[i]);
//}


//void maopao(int a[], int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//
//
//}
//
//
//
//int main()
//{
//	int a[] = { 0,1,2,6,9,4,30,3,93,466947785,3 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i;
//	maopao(a, sz);
//	for (i = 0; i < sz; i++)
//		printf("%d ", a[i]);
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char a[] = "abcdefg";
//	char b[] = "bc";
//
//	char* ret = strstr(a, b);
//
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//main()
//{
//	int a[10], i, j = 0, k = 0, l = 0;
//	printf("请输入10个整数:");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > 0)
//			++j;
//		else if (a[i] == 0)
//			++k;
//		else
//			++l;
//	}
//	printf("正数:%d,零:%d,负数:%d", j, k, l);
//}

//int main()
//{
//	int a[5];
//	printf("data:");
//	for (int i = 0; i <5; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (int j = 4 ; j >=0; j--)
//	{
//		printf("%d*", a[j]);
//	}
//	return 0;
//}

int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	int pj = 0;
	int j,temp=0;
	for (j = 0; j < 5; j++)
	{
		temp += a[j];
	}
	pj = temp / 5;
	printf("%d", pj);

	return 0;
}