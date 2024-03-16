// dz8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    std::cout << "Hello World!\n";
//}

//urok 12 Опрацювати приклади на стор. 6 - 8
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x = 10;
//	int y = 5;
//	int* px;
//	int* py;
//	// Записуємо адресу змінної x у px
//	px = &x;
//	// Відображаємо адресу x через покажчик
//	// та операцію взяття адреси
//	cout << px << " " << &x << endl;
//	// Відображаємо значення x через змінну
//	// й операцію розіменування
//	// на екрані 10 10
//	cout << *px << " " << x << endl;
//	// Змінюємо значення змінної x
//	// використовуємо операцію розіменування
//	*px = 99;
//	/* Відображаємо нове значення x через змінну
//	й операцію розіменування
//	на екрані відобразиться 99 99
//	*/
//	cout << *px << " " << x << endl << endl;
//	// Записуємо адресу змінної y в py
//	py = &y;
//	// Відображаємо адресу y через покажчик
//	// та операцію взяття адреси
//	cout << py << " " << &y << endl;
//	// Відображаємо значення y через змінну
//	// й операцію розіменування на екрані 5 5
//	cout << *py << " " << y << endl;
//	// записуємо значення адреси з px у py
//// тепер обидва покажчики вказують на x
//	py = px;
//	// Відображаємо значення x через змінну
//	// і два покажчики на екрані 99 99 99
//	cout << *px << " " << *py << " " << x << endl << endl;
//	return 0;
//}

//urok 12 Опрацювати приклади на стор. 11 - 12
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	const int size = 5;
//	int arr[size] = { 33, 44, 7, 8, 9 };
//	/* записуємо адресу нульового елемента масиву
//	в покажчик */
//	int* ptr = &arr[0];
//	/*
//	Показуємо значення нульового елемента масиву
//	через розіменування покажчика.
//	На екрані 33
//	*/
//	cout << *ptr << endl;
//	/*
//Показуємо значення першого елемента масиву
//через розіменування покажчика.
//Ми додаємо зсув за адресою на один елемент
//після чого виконуємо розіменування.
//Адреса всередині покажчика не змінюється.
//На екрані 44
//*/
//	cout << *(ptr + 1) << endl;
//	/*
//	Виконуємо зсув на один елемент цілого типу
//	вперед і записуємо нову адресу в покажчик ptr.
//	Фактично ця операція виглядає так
//	ptr = ptr + 1 * sizeof(int)
//	Тепер у покажчику міститься адреса першого
//	елемента. Можна було також написати ptr++;
//	*/
//	ptr = ptr + 1;
//	/*
//	Показуємо значення першого елемента масиву
//	через розіменування покажчика.
//	На екрані 44
//	*/
//	cout << *ptr << endl;
//	return 0;
//}

//urok 12 Опрацювати приклади на стор. 16
//#include <iostream>
//using namespace std;
//void ShowArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << *(arr + i) << " ";
//	}
//}
//// обчислення суми елементів масиву
//int GetAmount(int* ptr, int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += *(ptr + i);
//	}
//	return sum;
//}
//int main()
//{
//	const int size = 5;
//	int arr[size] = { 33, 44, 7, 8, 9 };
//	// відображаємо весь масив на екрані 33 44 7 8 9
//	ShowArray(arr, size);
//	cout << endl << endl;
//	// показуємо суму елементів масиву
//	// 101
//	cout << "Amount of array elements: " <<
//		GetAmount(arr, size) << endl << endl;
//	/* відображаємо весь масив на екрані
//	33 44 7 8 9
//	*/
//	ShowArray(&arr[0], size);
//	return 0;
//}



//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main() {
//	int a = 2, b = 3, c = 4;
//	float d = 8.5; //Зайвий пробіл і кома
//	int* ptr1 = &a, *ptr2 = &b; //Не було правильне присвоєння
//	float* x, y = 3.5;
//	void* ptr;
//
//	cout << "Enter b = " << endl;
//	cin >> *ptr2;// Не було зірочки перед ptr
//	cout << "ptr1 = " << ptr1 << "\t*ptr1 = " << *ptr1
//		<< "\tptr2 = " << ptr1 << "\*tptr2 = " << *ptr2 << endl;
//
//	*(ptr2 + 1) = 15;
//	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
//
//	x = &y;
//	cout << "x = " << x << "\t*x = " << *x << "\ty = " << y << endl;
//
//	ptr = x;
//	/**ptr = 45;*///Не можна змінювати дані
//	//або так:
//	*static_cast<float*>(ptr) = 45; // Перетворення типу ptr на тип float для правильного присвоєння значення
//	//cout << "ptr = " << ptr << "\t*ptr = "
//	//	<< ptr << "\tx = " << x << "\t*x = " << *x << "\ty = " << y << endl; //зірочка зайва
//	cout << "ptr = " << ptr << "\t*ptr = "
//		<< *static_cast<float*>(ptr) << "\tx = " << x << "\t*x = " << *x << "\ty = " << y << endl;
//
//	return 0;
//}

//6.	Задано масив А[10].Через покажчики поміняти місцями значення першого й останнього елементів масиву

#include <iostream>
using namespace std;

void swapFirstAndLast(int* arr, int size) {
    if (size < 2) return; 

    
    int* first = arr;
    int* last = arr + size - 1;

    
    int temp = *first;
    *first = *last;
    *last = temp;
}

int main() {
    int A[] = { 45, -84, 1, 5, 8, 35, 0, 76, -23, 90 };
    int size = sizeof(A) / sizeof(A[0]); 

    cout << "Початковий масив: ";
    
    for (int* ptr = A; ptr < A + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    
    swapFirstAndLast(A, size);

    cout << "Масив після обміну: ";
    
    for (int* ptr = A; ptr < A + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
