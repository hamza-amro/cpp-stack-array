#pragma once
#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;

template <class T>
class clsMyQueueArr {

	protected:
		clsMyDynamicArray<T> _Arr;

	public:
		void push(T value) {

			_Arr.InsertAtEnd(value);
		}

		void pop() {

			_Arr.DeleteFirstItem();
		}

		void print() {

			_Arr.PrintList();
		}

		int Size() {

			return _Arr.Size();
		}

		T front() {

			return _Arr.GetItem(0);
		}

		T Back() {

			return _Arr.GetItem(Size() - 1);
		}

		T GetItem(int index) {

			return _Arr.GetItem(index);
		}

		void Reverse() {

			_Arr.Reverse();
		}

		bool UpdateItem(int index, T value) {

			return _Arr.SetItem(index, value);
		}

		bool InsertAfter(int index, T value) {

			return _Arr.InsertAfter(index, value);
		}

		void InsertAtFront(T value) {

			_Arr.InsertAtBeginning(value);
		}

		void InsertAtBack(T value) {

			_Arr.InsertAtEnd(value);
		}

		void Clear() {

			_Arr.Clear();
		}
};
