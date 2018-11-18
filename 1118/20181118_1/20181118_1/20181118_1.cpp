// 20181118_1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void SwapByValue(int num1, int num2);
void SwapByAdress(int *ptr1, int *ptr2);
void SwapByRef(int &ref1, int &ref2);

int main()
{

	int num1 = 222;


	// 참조자는 선언과 동시에 다른 변수를 대입받아야한다. 주소값마저 똑같다. 그저 다른 이름으로 이해한다.
	int &num2 = num1;

	printf("%d", num2);  cout << endl;
	cout << &num1 << endl;
	cout << &num2 << endl;

	num1 = 444;
	printf("%d", num2);  cout << endl;
	// 한 변수를 대신할수있는 참조자의 개수는 제한이 없다.

	int num3 = 12;
	int *ptr3 = &num3;
	int **dptr3 = &ptr3;

	int ref_num3 = num3;
	int *(&ref_ptr3) = ptr3;
	int **(&ref_dptr3) = dptr3;

	
	cout << "<<< before >>>" << endl;
	cout << *ptr3 << endl;
	cout << **dptr3 << endl;
	
	cout << *ref_ptr3 << endl;
	cout << **ref_dptr3 << endl;



	num3 = 18;
	cout << "<<< after >>>" << endl;
	cout << *ptr3 << endl;
	cout << **dptr3 << endl;

	cout << *ref_ptr3 << endl;
	cout << **ref_dptr3 << endl;


	int numA = 10, numB = 20;

	//SwapByValue(numA, numB);
	SwapByAdress(&numA, &numB);

	cout << numA << endl;
	cout << numB << endl;

	SwapByRef(numA, numB);
	cout << numA << endl;
	cout << numB << endl;

	Sleep(30000);
    return 0;
}

void SwapByValue(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void SwapByAdress(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void SwapByRef(int &ref1, int &ref2) // int &ref1 = numA , int &ref2 = numB;
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;

}