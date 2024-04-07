Utility Library 🛠️
===================

The Utility Library project is a C++ project that provides a collection of functions to simplify various tasks. These functions cover a wide range of utilities, including prime number detection, perfect number identification, integer reversal, digit summation, palindrome checking, word encryption and decryption, random number generation, and key generation.

Importance for the User
-----------------------

For users (developers), this project offers a versatile toolkit for handling common tasks efficiently in C++ programming. By incorporating the provided functions, developers can streamline their code and reduce the time and effort required for implementing essential functionalities. This library serves as a valuable resource for enhancing productivity and ensuring code reliability in C++ projects.

Why This Project (Reinvents The Wheel)
--------------------------------------

The Utility Library project embodies a developer-centered design approach, aiming to provide tailored solutions for common programming challenges. While existing libraries and code snippets may offer similar functionalities, this project's focus on clarity, efficiency, and extensibility sets it apart. By reinventing the wheel in this context, the project encourages learning, innovation, and community collaboration within the developer ecosystem.

Installation (Running the Project)
----------------------------------

### Windows

1.  Clone the repository to your local machine.
2.  Navigate to the project directory.
3.  Compile the source files using a C++ compiler.
4.  Run the compiled executable file.

### macOS / Linux

1.  Clone the repository to your local machine.
2.  Open the terminal and navigate to the project directory.
3.  Compile the source files using a C++ compiler.
4.  Run the compiled executable file.

Usage
-----
![Screenshot 2024-04-06 075440](https://github.com/i3bdolah/Utility-Library/assets/80276711/925d765a-3549-467f-990a-3c76dc35c71d)
![Screenshot 2024-04-06 075846](https://github.com/i3bdolah/Utility-Library/assets/80276711/e6fc3af9-8239-4301-8d92-47fbad5837f8)
The provided code demonstrates the usage of various utility functions included in the library. By including the necessary header files, developers can utilize functions such as prime number detection, perfect number identification, integer reversal, digit summation, palindrome checking, word encryption and decryption, random number generation, and key generation.

Function Reference Table
------------------------
| Function | Parameter Type | Return Type | Description |
| --- | --- | --- | --- |
| `Srand` | None | `void` | Seeds the random number generator. |
| `IsPrimeNumber` | `int` or `short` | `bool` | Determines if the given number is prime. |
| `IsPerfectNumber` | `int` or `short` | `bool` | Determines if the given number is perfect. |
| `ReverseInt` | `int` | `int` | Reverses the digits of the given integer. |
| `SumAllDigits` | `int` | `int` | Calculates the sum of all digits in an integer. |
| `IsPalindrome` | `int` | `bool` | Checks if the given number is a palindrome. |
| `EncryptWord` | `string, int` | `string` | Encrypts a word using a specified key. |
| `DecryptWord` | `string, int` | `string` | Decrypts a word using a specified key. |
| `PrintEncryptionAndDecryption` | `string, int` | `void` | Prints the encryption and decryption of a word. |
| `GenerateRandomNumber` | `int, int` | `int` | Generates a random number within a range. |
| `GenerateCapitalLetters` | `int` | `string` | Generates a string of random capital letters. |
| `GenerateFullKey` | None | `string` | Generates a full key in the correct format. |
| `PrintKeys` | `int` | `void` | Prints multiple keys with correct formatting. |
| `PrintArray` | `int[100], int` | `void` | Prints an array of integers. |
| `ArrayToString` | `int[100], int` | `string` | Converts an array of integers to a string. |
| `ArrayToString` | `string[100], int` | `string` | Converts an array of strings to a string. |
| `NumberOfOccurrences` | `int[100], int, int` | `int` | Counts the number of occurrences of a number in an array. |
| `FindInArray` | `int[100], int, int` | `short` | Finds the index of a number in an array. |
| `FillArrayRandom` | `int[100], int, int, int` | `void` | Fills an array with random numbers within a range. |
| `MaxInArray` | `int[100], int` | `int` | Finds the maximum value in an array. |
| `MinInArray` | `int[100], int` | `int` | Finds the minimum value in an array. |
| `SumInArray` | `int[100], int` | `int` | Calculates the sum of all elements in an array. |
| `AvgInArray` | `int[100], int` | `float` | Calculates the average of elements in an array. |
| `CopyArray` | `int[100], int[100], int` | `void` | Copies elements from one array to another. |
| `SumTwoArrays` | `int[100], int[100], int[100], int` | `void` | Sums corresponding elements of two arrays into a third. |
| `FillArrayOrdered` | `int[100], int` | `void` | Fills an array with ordered numbers starting from 1. |
| `ShuffleArray` | `int[100], int` | `void` | Shuffles the elements of an array randomly. |
| `CopyArrayReversed` | `int[100], int[100], int` | `void` | Copies elements from one array to another in reverse order. |
| `FillArrayKeys` | `string[100], int` | `void` | Fills an array with generated keys. |
| `IsDistinct` | `int[100], int, int` | `bool` | Checks if a number is distinct in an array. |
| `CountOddInArray` | `int[100], int` | `short` | Counts the odd numbers in an array. |
| `CountEvenInArray` | `int[100], int` | `short` | Counts the even numbers in an array. |
| `CountPositiveInArray` | `int[100], int` | `short` | Counts the positive numbers in an array. |
| `CountNegativeInArray` | `int[100], int` | `short` | Counts the negative numbers in an array. |
| `Abs` | `int` | `int` | Returns the absolute value of a number. |
| `Floor` | `float` or `double` | `float` or `double` | Rounds down to the nearest integer. |
| `Ceil` | `float` or `double` | `float` or `double` | Rounds up to the nearest integer. |
| `Sqrt` | `float` or `double` | `float` or `double` | Computes the square root of a number. |
| `GetFraction` | `float` or `double` | `float` or `double` | Returns the fractional part of a number. |
| `Swap` | Varies | `void` | Swaps the values of two variables. |

These functions provide a variety of utilities ranging from mathematical operations, array manipulation, string manipulation, and random number generation, making the Utility Library versatile and useful for a wide range of programming tasks.



Conclusion
----------

The Utility Library project offers a comprehensive set of functions to simplify common tasks in C++ programming. By leveraging these utilities, developers can enhance their productivity, streamline their code, and ensure reliable performance across various applications. This library serves as a valuable resource for developers seeking efficient solutions to everyday programming challenges.
