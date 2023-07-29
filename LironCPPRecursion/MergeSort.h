#pragma once
#include <vector>


template <typename T>
class HardSorts
{

	//T array[10];

	std::vector<T> array;

	void Swap(T& a, T& b)
	{
		auto temp = a;
		a = b;
		b = temp;
	}
	void Merge(std::vector<T>& Left, std::vector<T>& Right, std::vector<T>& arr)
	{
		size_t i = 0;
		size_t j = 0;

		while (i < Left.size() && j < Right.size())
		{
			if (Left[i] < Right[j])
			{
				arr.push_back(Left[i]);
				i++;
			}
			if (Left[i] >= Right[j])
			{
				arr.push_back(Right[j]);
				j++;
			}
		}
		while (i < Left.size)
		{
			arr.push_back(Left[i]);
			i++;
		}

		while (j < Right.size)
		{
			arr.push_back(Right[j]);
			j++;

		}
	}

	void MergeSort(std::vector<T>& arr)
	{
		if (arr.size() > 1)
		{
			std::vector<T> Left;
			std::vector<T> Right;

			size_t mid = arr.size() / 2;

			for (size_t i = 0; i < mid; i++)
			{
				Left.push_back(arr[i]);
			}


			for (size_t i = mid; i < arr.size(); i++)
			{
				Right.push_back(arr[i]);
			}

			MergeSort(Left);
			MergeSort(Right);
		}

	}

};