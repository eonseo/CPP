# [Bronze V] 개수 세기 - 10807 

[문제 링크](https://www.acmicpc.net/problem/10807) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2025년 1월 2일 18:54:51

### 문제 설명

<p>총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.</p>

### 출력 

 <p>첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.</p>

---
# delete
: 운영체제에 더 이상 쓰지 않는 동적할당된 메모리 반환


```c++
int *ptr;

ptr = new(nothrow) int;
if (!ptr)
{
 cerr << "memory allocation failed" << endl;
 return -1;
}
delete (ptr);
ptr = NULL;

return 0;
```
```c++
int *arr;
int n;

std::cin >> n;
arr = new(nothrow) int[n];
if (!arr)
{
 cerr << "memory allocation failed" << endl;
 return -1;
}
delete[] arr;
arr = NULL;

return 0;
```
