void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}

int __VERIFIER_nondet_int();


int* foo() {
   
	int x, y;
	int* a;
   	int i;
	int len; // Instrumented to track the size of the array
   
   	if ( x < 0 || y < 0 || y > x ) return (int *) 0;

   	//a = (int*) malloc( x * sizeof(int));
	len = x;

   	//if (a == 0 ) exit(1);
   
   	for (i=0; i < y ; ++i){
   		a[i] = 0;
   	}

	i = 0;
	while (i < y) {
		
		if(i < 0 || i >= len)
			__VERIFIER_assert (0 == 1);
		i++;
	}

   	return a;

}

int main()
{
  foo();
}
