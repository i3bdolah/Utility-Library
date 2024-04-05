#pragma once
#include <iostream>
using namespace std;
#include <stdlib.h>     /* srand, rand */

class Utility
{
public:
	static void Srand() {
		srand((unsigned)time(NULL));
	}

	static int ReadPositiveInt(string msg) {
		int num = 0;
		do
		{
			cout << msg;
			cin >> num;
		} while (num <= 0);
		return num;
	}
	static short ReadPositiveShort(string msg) {
		short num = 0;
		do
		{
			cout << msg;
			cin >> num;
		} while (num <= 0);
		return num;
	}
	static float ReadPositiveFloat(string msg) {
		float num = 0;
		do
		{
			cout << msg;
			cin >> num;
		} while (num <= 0);
		return num;
	}
	static double ReadPositiveDouble(string msg) {
		double num = 0;
		do
		{
			cout << msg;
			cin >> num;
		} while (num <= 0);
		return num;
	}

	static bool IsPrimeNumer(int num) {
		int halfNum = num / 2;

		for (int i = 2; i < halfNum; i++)
		{
			if (num % 2 == 0)
			{
				return false;
			}
		}
		return true;
	}
	static bool IsPrimeNumer(short num) {
		short halfNum = num / 2;

		for (short i = 2; i < halfNum; i++)
		{
			if (num % 2 == 0)
			{
				return false;
			}
		}
		return true;
	}

	static bool IsPerfectNumber(int num) {
		int sum = 0;

		for (int i = 1; i < num; i++)
		{
			if (num % i == 0) {
				sum += i;
			}
		}
		return num == sum;
	}
	static bool IsPerfectNumber(short num) {
		short sum = 0;

		for (short i = 1; i < num; i++)
		{
			if (num % i == 0) {
				sum += i;
			}
		}
		return num == sum;
	}

	static int ReverseInt(int num) {
		int remainder = 0;

		while (num > 0)
		{
			remainder = (remainder * 10) + num % 10; // Takes last num
			num = num / 10; // Removes last num
		}
		return remainder;
	}

	static int SumAllDigits(int num) {
		int remainder = 0;

		while (num > 0)
		{
			remainder = remainder + (num % 10);
			num = num / 10;
		}
		return remainder;
	}

	static bool IsPalindrome(int num) {
		return num == ReverseInt(num);
	}

	static string EncryptWord(string word, int encryptionKey) {
		string encryptedWord = "";

		for (int i = 0; i < word.length(); i++)
		{
			encryptedWord = encryptedWord + char(word[i] + encryptionKey);
		}

		return encryptedWord;
	}
	static string DecryptWord(string word, int encryptionKey) {
		string decryptedWord = "";

		for (int i = 0; i < word.length(); i++)
		{
			decryptedWord = decryptedWord + char(word[i] - encryptionKey);
		}

		return decryptedWord;
	}
	static void PrintEncryptionAndDecryption(string word, int encryptionKey) {
		cout << "Text Before Encryption = " << word << endl;
		cout << "Text After Encryption = " << EncryptWord(word, encryptionKey) << endl;
		cout << "Text After Decryption = " << DecryptWord(EncryptWord(word, encryptionKey), encryptionKey) << endl;
	}

	static int generateRandomNumber(int from, int to) {
		return rand() % (to - from + 1) + from;
	}
	static string generateCapitalLetters(int num) {
		string word = "";
		for (int i = 1; i <= num; i++)
		{
			word = word + char(generateRandomNumber(65, 90));
		}
		return word;
	}
	static string generateFullKey() { // Generating Key with correct formating
		return generateCapitalLetters(4) + "-" + generateCapitalLetters(4) + "-" + generateCapitalLetters(4) + "-" + generateCapitalLetters(4);
	}
	static void printKeys(int num) {
		for (int i = 1; i <= num; i++)
		{
			cout << "Key [" << i << "] : ";
			cout << generateFullKey() << endl;
		}

	}

	static void readArray(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
		}
	}
	static void printArray(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	static int checkGoalNum(int arr[100], int arrLength, int goalNum) {
		int numOfOccurances = 0;

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == goalNum)
			{
				numOfOccurances += 1; // or numOfOccurances++;
			}
		}
		return numOfOccurances;
	}
	static void assignRandomToArray(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = generateRandomNumber(1, 100);
		}
	}
	static int printMaxArrElement(int arr[100], int arrLength) {
		int max = 0;

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		return max;
	}
	static int printMinArrElement(int arr[100], int arrLength) {
		int min = arr[0];

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		return min;
	}
	static int printSumArrElement(int arr[100], int arrLength) {
		int sum = 0;

		for (int i = 0; i < arrLength; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	static float printAvgArrElement(int arr[100], int arrLength) {
		return (float)printSumArrElement(arr, arrLength) / arrLength;
	}
	static void copiyngArray(int fArr[100], int lArr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			lArr[i] = fArr[i];
		}
	}
	static void sumOfTwoArrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			arrSum[i] = arr1[i] + arr2[i];
		}
	}
	static void fillArrayElements(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = i + 1;
		}
	}
	static void shuffleArrayElements(int arr[100], int arrLength) {
		int num1, num2;
		int temp = 0;

		for (int i = 0; i < arrLength; i++)
		{
			num1 = generateRandomNumber(0, arrLength - 1);
			num2 = generateRandomNumber(0, arrLength - 1);

			temp = arr[num1];
			arr[num1] = arr[num2];
			arr[num2] = temp;
		}
	}
	static void copyAndReverseArrayElements(int toArr[100], int fromArr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			toArr[i] = fromArr[(arrLength - 1) - i];
		}
	}
	static void assignKeysToArray(string arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = generateFullKey();
		}

	}
	static short findNumPositionInArray(int arr[100], int arrLength, int goalNum) {
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == goalNum)
				return i;
		}
		return -1;
	}
	static bool checkIsDitinct(int arr[100], int arrLength, int goalNum) {
		return findNumPositionInArray(arr, arrLength, goalNum) == -1;
	}
	static void countOddNumbersinArray(int arr[100], int arrLength) {
		int oddCounts = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] % 2 != 0)
				oddCounts++;
		}
		cout << "\nOdd numbers count is: " << oddCounts;
	}
	static void countEvenNumbersinArray(int arr[100], int arrLength) {
		int evenCounts = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] % 2 == 0)
				evenCounts++;
		}
		cout << "\nEven numbers count is: " << evenCounts;
	}
	static void countPositiveNumbersinArray(int arr[100], int arrLength) {
		int positiveCounts = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] >= 0)
				positiveCounts++;
		}
		cout << "\nPositive numbers count is: " << positiveCounts;
	}
	static void countNegativeNumbersinArray(int arr[100], int arrLength) {
		int count = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] < 0)
				count++;
		}
		cout << "\nNegative numbers count is: " << count;
	}

	static int myAbs(int num) {
		if (num > 0)
			return num;
		else
			return num * -1;
	}
	static float getFraction(float num) {
		return num - (int)num;
	}
	static double getFraction(double num) {
		return num - (int)num;
	}
	static float myFloor(float num) {
		if (num > 0)
		{
			return int(num);
		}
		else {
			return int(num) - 1;
		}
	}
	static float myCeil(float num) {
		if (num > 0)
		{
			return int(num) + 1;
		}
		else {
			return int(num);
		}
	}
	static float mySqrt(float num) {
		return pow(num, 0.5);
	}
};

