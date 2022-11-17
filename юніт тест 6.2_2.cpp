#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 6.2_2/лаба 6.2_2.cpp"
#include <cassert>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест622
{
	TEST_CLASS(юніттест622)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			{
				{
					const int size1 = 5;
					int arr1[size1] = { 0, 1, 2, 3, 4 };
					int arr1_res[size1] = { 4, 3, 2, 1, 0 };

					const int size2 = 6;
					int arr2[size2] = { 6, 5, 4, 3, 2, 1 };
					int arr2_res[size2] = { 1, 2, 3, 4, 5, 6 };

					const int size3 = 2;
					int arr3[size3] = { -1, 1 };
					int arr3_res[size3] = { 1, -1 };

					reverse(arr1, size1);
					reverse(arr2, size2);
					reverse(arr3, size3);

					for (int i = 0; i < size1; i++) {
						assert(arr1[i] == arr1_res[i]);
					}
					for (int i = 0; i < size2; i++) {
						assert(arr2[i] == arr2_res[i]);
					}
					for (int i = 0; i < size3; i++) {
						assert(arr3[i] == arr3_res[i]);
					}

			}
		};
	};
}