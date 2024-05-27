#include "pch.h"
#include "CppUnitTest.h"
#include"E:\sjherwin\Tutorial4Part2\matrix.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 2,1,1,1 };
			double* ptrRet;

			//Act
			ptrRet = sumOfRows(matrix, ROW);

			//Assert
			Assert::AreEqual(5.0, ptrRet[0]);
			Assert::AreEqual(0.0, ptrRet[1]);
			Assert::AreEqual(0.0, ptrRet[2]);
		}

		TEST_METHOD(TestMethod2)
		{
			//Arrange

			double matrix1[MAX_ROW][MAX_COL] = {
		    {1, 2, 3, 4},
		    {5, 6, 7, 8},
		    {9, 10, 11, 12} };

			double matrix2[MAX_ROW][MAX_COL] = {
			{1, 0, 0, 0, 0},
				{0, 1, 0, 0, 0},
				{0, 0, 1, 0, 0},
				{0, 0, 0, 1, 0},
				{0, 0, 0, 0, 1} };

			bool identity1, identity2;
			//Act
			identity1 = isIdentityMatrix(matrix1, MAX_ROW);
			identity2 = isIdentityMatrix(matrix2, MAX_ROW);

			//Assert
			Assert::IsTrue(identity2);
			Assert::IsFalse(identity1);


		}

		TEST_METHOD(TestMethod3)
		{
			//Arrange
			double matrix[MAX_ROW][MAX_COL] = {{ 2,1,1,1 },{ 2, 3, 4, 5 }};
			double* ptrRet;

			//Act
			ptrRet = sumOfCols(matrix, MAX_COL);

			//Assert
			Assert::AreEqual(4.0, ptrRet[0]);
			Assert::AreEqual(4.0, ptrRet[1]);
			Assert::AreEqual(5.0, ptrRet[2]);
		}
	};
}
