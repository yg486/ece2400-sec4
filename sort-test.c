
#include "utst.h"

void sort( int* x_ptr, int* y_ptr )
{
  printf( "The bigger one is: %d\n", *y_ptr );
  if ( (*y_ptr) > (*x_ptr) ) {
    int temp = *x_ptr;
    *x_ptr   = *y_ptr;
    *y_ptr   = temp;
  }
}

int main( void )
{
  int a = 5;
  int b = 9;
  sort( &a, &b );
  UTST_ASSERT_INT_EQ( a, 9 );
  UTST_ASSERT_INT_EQ( b, 5 );
  return 0;
}
