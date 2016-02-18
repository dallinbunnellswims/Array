// Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

int size;
int repetitions;
int sum1;
int sum2;
int avg1;
int avg2;
std::vector<int> vector1;
std::vector<int> vector2;

int main()
{
	std::cout << "This program will have you make two vectors.\nThe first one will fill automatically, the second you'll need to fill." << std::endl;
	std::cout << "After the vectors are filled, I'll find the average and sum of each." << std::endl;
	std::cout << "Please enter the size of the first vector. ";
	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		vector1.push_back(i+1);
	}
	std::cout << "The values in the first vector are: " << std::endl;
	for (int x = 0; x < vector1.size(); x++)
	{
		std::cout << vector1[x] <<" ";
	}
	for (int q = 0; q < vector1.size(); q++)
	{
		sum1 += vector1[q];
	}
	avg1 = sum1 / vector1.size();
	std::cout << "\nThe sum of the first vector is " << sum1 << std::endl;
	std::cout << "The average of the first vector is " << avg1 << std::endl;
	std::cout << "Now enter the size of the second vector. ";
	std::cin >> repetitions;
	for (int z = 0; z < repetitions; z++)
	{
		int y;
		std::cout << "Please enter the " << z+1 << " value. ";
		std::cin >> y;
		vector2.push_back(y);
	}
	std::cout << "The values in the second vector are: " << std::endl;
	for (int x = 0; x < vector2.size(); x++)
	{
		std::cout << vector2[x] << " ";
	}
	for (int q = 0; q < vector2.size(); q++)
	{
		sum2 += vector2[q];
	}
	avg2 = sum2 / vector2.size();
	std::cout << "\nThe sum of the first vector is " << sum2 << std::endl;
	std::cout << "The average of the first vector is " << avg2 << std::endl;
	

	
	return 0;
}

