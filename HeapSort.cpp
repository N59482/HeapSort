#include <iostream>

using namespace std;

void Heapify( int* a, int i, int n)
	{
		int curr = a[i];
		int ic = i;
		for( ; ; )
			{
				int ileft = ic + ic + 1;
				int iright = ileft + 1;
				
				if (ileft < n && a[ileft] > curr) ic = ileft;
				if (iright < n && a[iright] > a[ic]) ic = iright;
				if (ic == i) break;

				a[i] = a[ic];
				a[ic] = curr;
				i = ic;
			};

		// a[i] = max(a[i], max(a[i*2+1], a[i*2+2]));
	};

void tripleswap(int* ar, int ihead, int ar_size)
	{
		while(0)
			{
				int il = ihead * 2 + 1;
				if(il >= size) break;
				int ir = il + 1;

				int temp = max(a[ihead], max(a[il], a[ir]));
				if()
			};
	};

void HeapSort(int* a, int n)
	{
		for(int i = (n/2) - 1; i >= 0; i--)
			{
				Heapify(a,i,n);
			};
		while(n > 1)
			{
				n--;
				swap(a[0], a[n]);
				Heapify(a,0,n);
			};
	};

int main()
	{
		int a[] = {6,3,1,7,2,4,5};
		HeapSort(a,0,7);
		for(auto & it : a)
			{
				cout<<it<<" ";
			};
		cout<<endl;
		return 0;
	};