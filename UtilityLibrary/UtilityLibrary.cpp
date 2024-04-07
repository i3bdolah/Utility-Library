#include <iostream>
using namespace std;
#include "Utility.h";

int main()
{
	int Arr1[10]{};
	int Arr2[10]{};
	int Arr3[10]{};
	string Arr4[3]{};

	Utility::Srand();

	Utility::Srand();
	cout << left << setw(50) << "IsPrimeNumer((int)10) : " << Utility::IsPrimeNumer((int)10) << endl;
	cout << left << setw(50) << "IsPrimeNumer((short)17) : " << Utility::IsPrimeNumer((short)17) << endl;
	cout << left << setw(50) << "IsPerfectNumber((int)10) : " << Utility::IsPerfectNumber((int)10) << endl;
	cout << left << setw(50) << "IsPerfectNumber((short)17) : " << Utility::IsPerfectNumber((short)17) << endl;
	cout << left << setw(50) << "ReverseInt(12345) : " << Utility::ReverseInt(12345) << endl;
	cout << left << setw(50) << "SumAllDigits(12345) : " << Utility::SumAllDigits(12345) << endl;
	cout << left << setw(50) << "IsPalindrome(12345) : " << Utility::IsPalindrome(12345) << endl;
	cout << left << setw(50) << "IsPalindrome(12321) : " << Utility::IsPalindrome(12321) << endl;
	cout << "___________________________\n";
	
	Utility::PrintEncryptionAndDecryption("Abdullah", 18);
	
	cout << "___________________________\n";
	
	cout << left << setw(50) << "GenerateRandomNumber(10, 30) : " << Utility::GenerateRandomNumber(10, 30) << endl;
	cout << left << setw(50) << "GenerateCapitalLetters(3) : " << Utility::GenerateCapitalLetters(3) << endl;
	cout << left << setw(50) << "GenerateFullKey() : " << Utility::GenerateFullKey() << endl;
	
	cout << "___________________________\n";


	Utility::FillArrayRandom(Arr1, 10, 1, 10);
	cout << left << setw(50) << "FillArrayRandom(Arr1, 10, 1, 10) : " << Utility::ArrayToString(Arr1, 10) << endl;
	cout << left << setw(50) << "NumberOfOccurrences(Arr1, 10, 10) : " << Utility::NumberOfOccurrences(Arr1, 10, 10) << endl;
	cout << left << setw(50) << "MaxInArray(Arr1, 10) : " << Utility::MaxInArray(Arr1, 10) << endl;
	cout << left << setw(50) << "MinInArray(Arr1, 10) : " << Utility::MinInArray(Arr1, 10) << endl;
	cout << left << setw(50) << "SumInArray(Arr1, 10) : " << Utility::SumInArray(Arr1, 10) << endl;
	cout << left << setw(50) << "AvgInArray(Arr1, 10) : " << Utility::AvgInArray(Arr1, 10) << endl;

	Utility::FillArrayOrdered(Arr2, 10);
	cout << left << setw(50) << "FillArrayOrdered(Arr2, 10) : " << Utility::ArrayToString(Arr2, 10) << endl;

	cout << "___________________________\n";

	cout << left << setw(50) << "Arr1 = " << Utility::ArrayToString(Arr1, 10) << endl;
	cout << left << setw(50) << "Arr2 = " << Utility::ArrayToString(Arr2, 10) << endl;
	cout << left << setw(50) << "Arr3 = " << Utility::ArrayToString(Arr3, 10) << endl;

	Utility::SumTwoArrays(Arr1, Arr2, Arr3, 10);
	cout << left << setw(50) << "SumTwoArrays(Arr1, Arr2, Arr3, 10) : " << Utility::ArrayToString(Arr3, 10) << endl;

	Utility::ShuffleArray(Arr1, 10);
	cout << left << setw(50) << "ShuffleArray(Arr1, 10) : " << Utility::ArrayToString(Arr1, 10) << endl;
	Utility::CopyArrayReversed(Arr1, Arr3, 10);
	cout << left << setw(50) << "CopyArrayReversed(Arr1, Arr3, 10) : " << Utility::ArrayToString(Arr3, 10) << endl;
	Utility::FillArrayKeys(Arr4, 3);
	cout << left << setw(50) << "FillArrayKeys(Arr4, 3) : " << Utility::ArrayToString(Arr4, 3) << endl;
	cout << left << setw(50) << "IsDistinct(Arr2, 10, 10) : " << Utility::IsDistinct(Arr2, 10, 10) << endl;

	cout << "___________________________\n";

	cout << left << setw(50) << "CountOddInArray(Arr2, 10, 10) : " << Utility::CountOddInArray(Arr2, 10) << endl;
	cout << left << setw(50) << "CountEvenInArray(Arr2, 10, 10) : " << Utility::CountEvenInArray(Arr2, 10) << endl;
	cout << left << setw(50) << "CountPositiveInArray(Arr2, 10, 10) : " << Utility::CountPositiveInArray(Arr2, 10) << endl;
	cout << left << setw(50) << "CountNegativeInArray(Arr2, 10, 10) : " << Utility::CountNegativeInArray(Arr2, 10) << endl;

	cout << "___________________________\n";

	cout << left << setw(50) << "Abs(2.5) : " << Utility::Abs(2.5) << endl;
	cout << left << setw(50) << "Floor((float)2.5) : " << Utility::Floor((float)2.5) << endl;
	cout << left << setw(50) << "Floor((double)2.035) : " << Utility::Floor((double)2.035) << endl;
	cout << left << setw(50) << "Ceil((float)2.5) : " << Utility::Ceil((float)2.5) << endl;
	cout << left << setw(50) << "Ceil((double)2.035) : " << Utility::Ceil((double)2.035) << endl;
	cout << left << setw(50) << "Sqrt((float)25) : " << Utility::Sqrt((float)25) << endl;
	cout << left << setw(50) << "Sqrt((double)100) : " << Utility::Sqrt((double)100) << endl;
	cout << left << setw(50) << "GetFraction((float)2.5) : " << Utility::GetFraction((float)2.5) << endl;
	cout << left << setw(50) << "GetFraction((double)2.035) : " << Utility::GetFraction((double)2.035) << endl;


	cout << "___________________________\n";

	string str1 = "Abdullah", str2 = "Ban";
	cout << "Before" << endl;
	cout << "\tstring 1 = " << str1 << endl;
	cout << "\tstring 2 = " << str2 << endl;
	Utility::Swap(str1, str2);
	cout << "After : Swap(str1, str2)" << endl;
	cout << "\tstring 1 = " << str1 << endl;
	cout << "\tstring 2 = " << str2 << endl;

	int int1 = 100, int2 = 200;
	cout << "Before" << endl;
	cout << "\tint 1 = " << int1 << endl;
	cout << "\tint 2 = " << int2 << endl;
	Utility::Swap(int1, int2);
	cout << "After : Swap(int1, int2)" << endl;
	cout << "\tint 1 = " << int1 << endl;
	cout << "\tint 2 = " << int2 << endl;

	short short1 = 100, short2 = 200;
	cout << "Before" << endl;
	cout << "\tshort 1 = " << short1 << endl;
	cout << "\tshort 2 = " << short2 << endl;
	Utility::Swap(short1, short2);
	cout << "After : Swap(short1, short2)" << endl;
	cout << "\tshort 1 = " << short1 << endl;
	cout << "\tshort 2 = " << short2 << endl;

	float float1 = 100.01, float2 = 200.01;
	cout << "Before" << endl;
	cout << "\tfloat 1 = " << float1 << endl;
	cout << "\tfloat 2 = " << float2 << endl;
	Utility::Swap(float1, float2);
	cout << "After : Swap(float1, float2)" << endl;
	cout << "\tfloat 1 = " << float1 << endl;
	cout << "\tfloat 2 = " << float2 << endl;


	double double1 = 100.1, double2 = 200.2;
	cout << "Before" << endl;
	cout << "\tdouble 1 = " << double1 << endl;
	cout << "\tdouble 2 = " << double2 << endl;
	Utility::Swap(double1, double2);
	cout << "After : Swap(double1, double2)" << endl;
	cout << "\tdouble 1 = " << double1 << endl;
	cout << "\tdouble 2 = " << double2 << endl;


	char char1 = 'A', char2 = 'B';
	cout << "Before" << endl;
	cout << "\tchar 1 = " << char1 << endl;
	cout << "\tchar 2 = " << char2 << endl;
	Utility::Swap(char1, char2);
	cout << "After : Swap(char1, char2)" << endl;
	cout << "\tchar 1 = " << char1 << endl;
	cout << "\tchar 2 = " << char2 << endl;

	Date Date1 = Date(1,1,2000), Date2 = Date(31, 12, 2000);
	cout << "Before" << endl;
	cout << "\tDate 1 = " << Date1.DateToString(); << endl;
	cout << "\tDate 2 = " << Date2.DateToString(); << endl;
	Utility::Swap(Date1, Date2);
	cout << "After : Swap(Date1, Date2)" << endl;
	cout << "\tDate 1 = " << Date1.DateToString(); << endl;
	cout << "\tDate 2 = " << Date2.DateToString(); << endl;
}