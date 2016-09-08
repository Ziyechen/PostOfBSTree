#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdlib.h>
#include "VerifySquenceOfBST.h"
using namespace std;

void TestVerifySquenceOfBST()
{
	int arr1[] = { 5, 6, 7, 9, 11, 10, 8 };
	int arr2[] = { 7, 4, 6, 5 };

	cout << VerifySquenceOfBST(arr1, sizeof(arr1) / sizeof(arr1[0])) << endl;
	cout << VerifySquenceOfBST(arr2, sizeof(arr2) / sizeof(arr2[0])) << endl;
}

int main()
{
	TestVerifySquenceOfBST();

	system("pause");
	return 0;
}
