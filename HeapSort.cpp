#include <iostream>

using namespace std;

void tripleswap(int* ar, int ihead, int size)
	{
		while(size > (ihead * 2 + 1))
			{
			    int il = ihead * 2 + 1; // определяем итератор левого потомка
				if((il+1) == size) // если у узла только один потомок
					{
						if(ar[ihead] < ar[il]) swap(ar[ihead], ar[il]);
						break;
					}
				else // если у узла два потомка
					{
						int ir = il + 1;// определяем итератор правого потомка
						int temp = max(ar[ihead], max(ar[il], ar[ir])); // находим максимальное значения в тройке.

						if(temp == ar[ihead]) break; // если максимальное значение в узле алгоритм прекращается.
							else if(temp == ar[il]) // елси максимальное значение в левом потомке
								{
									swap(ar[ihead], ar[il]); // ставим его в узел
									ihead = il; // продолжаем алгорим по левой ветке
								}
								else  // елси максимальное значение в правом потомке 
									{
										swap(ar[ihead], ar[ir]); // ставим в узел.
										ihead = ir; // продолжаем алгорим по правой ветке
									};
					};
			};
		// int * end = ar + size;
		// for(int* ptr = ar; ptr < end; ptr++) cout<<*ptr<<" ";
		// cout<<endl;
	};

void HeapSort(int* a, int n)
	{
		for(int i = (n/2) - 1; i >= 0; i--) // начинаем с последнего узла 
				tripleswap(a,i,n);
		while(n > 1) // ставим самый крупный элемент в конец и забываем про него.
			{
				n--;
				swap(a[0], a[n]);
				tripleswap(a,0,n);
			};
	};


int main()
	{
		int a[] = {6,3,1,7,2,4,5};
		int triple[] = {3,1,2};
		int a15[] = {15,8,14,6,3,1,10,7,2,11,4,5,13,9,12};
		int a14[] = {8,14,6,3,1,10,7,2,11,4,5,13,9,12};

		HeapSort(a,7);
		for(auto & it : a)
			{
				cout<<it<<" ";
			};
		cout<<endl;

		HeapSort(triple,3);
		for(auto & it : triple)
			{
				cout<<it<<" ";
			};
		cout<<endl;

		HeapSort(a15,15);
		for(auto & it : a15)
			{
				cout<<it<<" ";
			};
		cout<<endl;

		HeapSort(a14,14);
		for(auto & it : a14)
			{
				cout<<it<<" ";
			};
		cout<<endl;
		return 0;
	};