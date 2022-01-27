//#include "stdio.h"
//#include "omp.h"
//
//int main() {
//	int x = 5; // Global variable (outside of the threads, access same memory location)
//#pragma omp parallel
//	{
//		int y; y = 3;
//		// Create data local to a thread
//		// Each thread has its own copy of the local variable
//		// Local variable is created for each thread
//		int ID = omp_get_thread_num();
//		x++;
//		y++;
//		printf("shared: x is %d at ID %d\n", x, ID);
//		printf("local: x is %d at ID %d\n\n", y, ID);
//
//		// Threads run in parallel and are uncontrollable
//	}
//
//	return 0;
//}
//
//// Another way to use the private directive
//
////int main() {
////	int x; // Global variable (outside of the threads, access same memory location)
////#pragma omp parallel private(x)
////	{
////		int y; y = 3; x = 5;
////		// Create data local to a thread
////		// Each thread has its own copy of the local variable
////		// Local variable is created for each thread
////		int ID = omp_get_thread_num();
////		x++;
////		y++;
////		printf("private: x is %d at ID %d\n", x, ID);
////		printf("local: y is %d at ID %d\n\n", y, ID);
////
////		// Threads run in parallel and are uncontrollable
////	}
////
////	return 0;
////}