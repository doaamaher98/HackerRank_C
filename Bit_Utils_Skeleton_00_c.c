#include <stdio.h>
#include <math.h>
// bit_utils.c - Intake43 ITI, Winter 2022
// Doaa Mohamed Maher Mohamed

// TODO: Implement the following Macros like a function in a generic way !
// NOTE: If there're multiple ways please feel free to implement all possible solutions .


/*********************************************************************************/
/*
    // Complete :-
    & :-
        x &  x = x
        x & ~x = 0
        x & 1s = x
        x & 0s = 0
    | :-
        x |  x = x
        x | ~x = 1
        x | 1s = 1
        x | 0s = x
    ^ :-
        x ^ x  = 0
        x ^ ~x = 1
        x ^ 1s = ~x
        x ^ 0s = x
*/
/*********************************************************************************/

// SET BIT IN A REGISTER
#define SET_BIT(REG,Bit_NO)     (REG) |= (1<<(Bit_NO))

// CLEAR BIT IN A REGISTER
#define CLR_BIT(REG,Bit_NO)		(REG) &= ~(1<<(Bit_NO))

// Get The Bit number Bit_NO
#define GET_BIT(REG,Bit_NO)     ((REG) &= (1<<(Bit_NO)))

// Right Shift by No
#define RSHFT_REG(REG,NO)		((REG) >> NO)

// Left Shift by NO
#define LSHFT_REG(REG,NO)		((REG) << NO)

// Circular Right Shift
#define CRSHFT_REG(REG,NO)		(((REG) >> NO) | ((REG) << sizeof(REG) * 8 - NO))

// Circular Left Shift
#define CLSHFT_REG(REG,NO)      (((REG) << NO) | ((REG) >> sizeof(REG) * 8 - NO))

// Assign a Value to a Register
#define ASSIGN_REG(REG,VALUE)	(((REG) = VALUE))

// Set The Register [1s]
#define SET_REG(REG)			~((REG) &= 0)

// Clear the Register [0s]
#define CLR_REG(REG)			((REG) &= 0)

// Toggle a Bit in Register
#define TGL_BIT(REG,Bit_NO)		(REG) ^= (1<<Bit_NO)

// Toggle a Register Value
#define TGL_REG(REG)			((REG) ^= 1)

/*
	Note : High nibble is always at position [4:7]
		   Low nibble is always at position [3:0]
*/
// Set The High Nibble in a Register [Leading]
#define SET_H_NIB(REG)			((REG) |= (0xF0))

// Set The Low Nibble in a Register  [Trailing]
#define SET_L_NIB(REG)			((REG) |= (0x0F))

// Clear The High Nibble in a Register
#define CLR_H_NIB(REG)			((REG) &= (0x0F))

// Clear The Low Nibble in a Register
#define CLR_L_NIB(REG)			((REG) &= (0xF0))

// Get The High Nibble in a Register .
#define GET_H_NIB(REG)			(((REG >> 4) &= (0x0F)) << 4)

// Get The Low Nibble in a Register .
#define GET_L_NIB(REG)			(((REG << 4) &= (0xF0)) >> 4)

// Assign The High Nibble in a Register
#define ASSIGN_H_NIB(REG,VALUE)		(1 << VALUE)

// Assign the Low Nibble in a Register
#define ASSIGN_L_NIB(REG,VALUE) 	((REG) |= (REG - VALUE))

// Toggle the High Nibble in a Register
#define TGL_H_NIB(REG)				((REG) ^= (0XF0))

// Toggle the Low Nibble in a Register
#define TGL_L_NIB(REG)				((REG) ^= (0X0F))

// Swap the Nibbles in a Register
#define SWAP_NIB(REG)               CRSHFT_REG(REG,4)

/*
    Implement the setKthBit function that sets the kth bit in a variable and returns it .
    Ex :
    var = 10 or (00001010) , k = 2
          13 or (00001110)
*/
char setKthBit(char var, char k) {
    var |= (1<<k);
    return var;
}

/*
    Implement the clearKthBit function that clears the kth bit in a variable and returns it .
    Ex :
    var = 10 or (00001010) , k = 3
          2 or (00000010)
*/
char clearKthBit(char var, char k) {
    var &= ~(1<<k);
    return var;
}

/*
    Implement the getKthBit function that gets the kth bit from a variable and returns it .
    Ex :
    var = 10 or (00001010) , k = 3
          1 or (00000001)
*/
char getKthBit(char var, char k) {
    return ((var & (1<<k)) != 0);
}

/*
    Implement the setRightMostZero function that sets the right most zero in a variable and returns it .
    Ex :
    var = 10 or (00001010)
          15 or (00001111)
*/
char setRightMostZero(char var) {
    var |= (var + 1);

    return var ;
}

/*
    Implement the setTrailingZeros function that sets the trailing ones in a variable and returns it .
    Ex :
    var =  8 or (00001000)
          15 or (00001111)
*/
char setTrailingZeros(char var) {
    var |= (var - 1);
    return var ;
}

/*
    Implement the clearRightMostOne function that clears the rightmost one in a variable and returns it .
    Ex :
    var =  10 or (00001010)
           8 or (00001000)
*/
char clearRightMostOne(char var) {
    var &= (var - 1);
    return var;
}

/*
    Implement the clearTrailingOnes function that clears the rightmost ones in a variable and returns it .
    Ex :
    var =  11 or (00001011)
           8 or (00001000)
*/
char clearTrailingOnes(char var) {
    var &= (var + 1);
    return var ;
}

/*
    Implement the clearAllBitsFromMSBThroughKInclusive function that clears all bits starting from the most-significant bit
    to the kth bit and returns it .
    Ex :
    var =  174 or (10101111)
           7   or (00000111)
*/
char clearAllBitsFromMSBThroughKInclusive(char var, char k) {
    var &= ((1<<k)-1);
    return var;
}

/*
    Implement the clearAllBitsFromLSBThroughKInclusive function that clears all bits starting from the least-significant bit
    to the kth bit and returns it .
    Ex :
    var =  174 or (10101111)
           160 or (10100000)
*/
char clearAllBitsFromLSBThroughKInclusive(char var, char k) {
    var &= ~((1<<k)-1);
    return var;
}

/*
    Implement the toggleKthBit function that flips/toggle/change the kth bit in a variable and returns it .
    Ex :               k
    var =  174 or (10101111)  , k = 2
           167 or (10100111)
*/
char toggleKthBit(char var, char k) {
    return ( var ^= (1 << k) );
}

/*
    Implement the createAWordWithSingleOneAtRightMostZero function that Isolate the rightmost one in a variable and returns it .
    Ex :
    var =  162 or (10100010)
           2   or (00000010)
*/
char createAWordWithSingleOneAtRightMostZero(char var) {

    return ((~var) & (var + 1)) ;
}

/*
    Implement the createAWordWithOnesAtPositionOfTrailingZeros function that sets the trailing zeros in a variable
    , clears all other bits and returns it .
    Ex :
    var =  176 or (10110000)
           15  or (00001111)
*/
char createAWordWithOnesAtPositionOfTrailingZeros(char var) {

    return (((var-1) & var) ^ (var-1));
}

/*
    Implement the extractABitField function that extract a bitfield from a variable and returns it .
    Ex :            j   i
    var =  131 or (10110011)  , i = 2 , j = 6 ,
           12  or (00001100)
*/
char extractABitField(char var, char i, char j) {
    char field = (var >> i) ;

    int power = pow(2,int(j-i+1));

    field &= (power -1);
    return field ;
}

/*
    Implement the setABitField function that sets a variable with a field and returns it .
    Ex :            j   i
    var =  131 or (10000011)  , i = 2 , j = 6 ,
        field     (xxx10100)  , Note : x indicates that it can be anything !!
           211 or (11010011)
*/
char setABitField(char var, char i , char j, char field) {
    char mask;
    mask = (2^(j-i+1)) - 1;
    var = ((var & (~(mask<< i) )) | ((field & mask)<< i));
    return var ;
}

/*
    Implement flipBitToWin function :-
    You have an integer and you can flip exactly one bit from a 0 to a 1. Write code to
    find the length of the longest sequence of ls you could create.

    Ex :
    Input: 1775 (or: 11011101111)
    Output: 8

*/
/////////////////////////////////////////////////
int flipBitToWin(int var) {
    int cnt = 0 ;



    return cnt ;
}
/////////////////////////////////////////////////
/*
    Implement the longestSequenceOfOnes function that gets the longest consecutive ones in a variable and returns it .
    Ex :
    Input: 1775 (or: 11011101111)
    Output: 4

*/
int longestSequenceOfOnes(int var) {
    int i;
    int count = 0;
    for (i=0; i<sizeof(int)*8 ; i++)
    {
        if ( var & (1<<i) == 1 )
        {
            count++;
        }
    }
    return count;
}

/*
    Implement the conversion function that determines the number of bits you would need to flip to convert integer A to integer B.
    Ex :
    Input: 29 (or: 11101), 15 (or: 01111)
    Output: 2

*/
int conversion(int var1, int var2) {

    int i;
    int count =0;

    for (int i=0; i<sizeof(int)*8 ; i++)
    {
        if ( (var1 & (1<<i)) != (var2 & (1<<i)))
        {
            count++;
        }

    }
    return count;
}

/*
    Write a program to swap odd and even bits in an integer with as few instructions as
    possible (e.g., bit 0 and bit 1 are swapped, bit 2 and bit 3 are swapped, and so on).

*/

int PairwiseSwap(int var) {





    return var ;
}

/*
    Explain what the following code does:
    ...
    ...
    ...
    Is it missing sth ?!
*/
// Checks if no. is power or 2 or not, & returns 0 if it's power or 2 & 1 if it's not power of 2
int Debugger(int n) {
    return (( n & (n-1) ) != 0);
}

/*
    Implement the NextNumber function :-
    Given a positive integer, print the next smallest and the next largest number that
    have the same number of 1 bits in their binary representation.
*/

int* NextNumber(int var) {
    static MinMax [2] = {0,0};

}

/*
    Implement the isOddEvenWay1 to check whether var is odd or even !
	return 1 if true , 0 otherwise .
*/

char isOddEvenWay1(char var) {
    if ( (var & 0x01) == var)
    {
        return 1;  // is odd
    }
    else{
        return 0; // is even
    }

}

/*
    Implement the isOddEvenWay2 to check wether var is odd or even !
	return 1 if true , 0 otherwise .
*/

char isOddEvenWay2(char var) {
    if ((var % 2) != 0)
    {
        return 1;    // is odd
    }
    else{
        return 0;    // is even
    }
}

/*
    Implement the countNumOfOnesWay1 to count the number of ones in the var !
	return 1 if true , 0 otherwise .
*/

char countNumOfOnesWay1(char var) {
    int count = 0;
    int i;

    for (i=0; i<sizeof(int)*8 ; i++)
    {
        if (var & (1<<i) == 1)
        {
            count++;
        }
    }
    return count;
}

/*
    Implement the countNumOfOnesWay2 to count the number of ones in the var !
*/

char countNumOfOnesWay2(char var) {
    int count = 0;
    while (var)
    {
        var &= (var-1);
        count++;
    }
    return count;
}

/*
    Implement the countNumOfOnesWay3 to count the number of ones in the var !
*/


char countNumOfOnesWay3(char var) {

}

/*
    Implement the countNumOfOnesWay4 to count the number of ones in the var !
*/

char countNumOfOnesWay4(char var) {
    // Note :- search for a built-in function [intrinsic function]
	// https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/
	return (__builtin_popcount(var));
}


/*
    Implement the isPowerOfTwo to check whether var is power of two or not !
	return 1 if true , 0 otherwise .
*/

char isPowerOfTwo(char var) {
    return (( var & (var-1) ) == 0); // power of 2 = true
}


/*
    Implement the roundUpToPowerOfTwo to round the var to the nearest power of 2 !
*/

char roundUpToPowerOfTwo(char var) {

}


/*
    Implement the isPowerOfFour to check if the var is power of 4 or not !
*/

char isPowerOfFour(char var) {

}

/*
    Implement the swapWithoutTemp to swap var1 & var2 without using temp !
*/

void swapWithoutTemp(char* var1, char* var2){
    *var1 = *var1 ^ *var2;
    *var2 = *var1 ^ *var2;
    *var1 = *var1 ^ *var2;
}


/*
    Implement the positionOfRightMostOne to know the position of the right-most one in the var and return it !
*/

char positionOfRightMostOne(char var) {

}

/*
    Implement the xorFromOneToNWithoutLooping to calculate the xor of all numbers starting from 1 to N without using any loop and return the ans !
*/

char xorFromOneToNWithoutLooping(char N) {

}

/*
    Implement the xorFromLeftToRightRangeUsingxorFromOneToNWithoutLoopingFunction to calculate the xor of a range of numbers using xorFromOneToNWithoutLooping function that u implemented
*/

char xorFromLeftToRightRangeUsingxorFromOneToNWithoutLoopingFunction(char N , char i ,char j) {

}

/*
    Given an array of numbers that contain different numbers in the range [0,N], return the only number in the
    range that is missing from the array .
*/

int missingNumber(int* arr , int N) {

}

/*
    print the binary representation of a decimal value .
*/

void decimalToBinary(int var) {

}

/*
	Implement swapOddEven to swap odd and even bits in an integer with as few instructions as
	possible (e.g., bit 0 and bit 1 are swapped, bit 2 and bit 3 are swapped, and so on).
*/

void swapOddEven(int N){


}

/*
	Implement haveDifferentSigns to check whether var1 & var2 have different signs or not !
	return 1 if they have diff signs , 0 otherwise .
*/

char haveDifferentSigns(char var1, char var2) {

}

/*
	Implement swapOddEven to swap odd and even bits in an integer with as few instructions as
	possible (e.g., bit 0 and bit 1 are swapped, bit 2 and bit 3 are swapped, and so on).
*/

/////////////////////////////////////////////////////////////////////
char areEqualNumbersWithoutUsingEqual(char var1 , char var2) {

}
//////////////////////////////////////////////////////////////////////

/*
	Implement minimumWithoutBranching to find the minimum value between var1 & var2 without using if condition .
*/

char minimumWithoutBranching(char var1, char var2) {

}


int main()
{

    return 0;
}


// [Deadline : November the 28th 23:59 PM]
