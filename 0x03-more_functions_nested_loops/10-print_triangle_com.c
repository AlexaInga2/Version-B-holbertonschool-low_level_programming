void print_triangle(int size)
{
        int a, b, c, sp, hash;

	if (size > 0)//(outer loop) size is 2, since true statement, we enter into 1st loop
	{
		for (a = 1; a <= size; a++) //2nd(inner)loop prints the space ' ' since a is 1, this statement is true and the 3rd loop begins
		{
			sp = size - a;//1(size)-1(a)=1, so sp=1 this variable is needed because 
			hash = size - sp;
			for (b = 1; b <= sp; b++)// this 3rd loop prints #'s 
				_putchar(' ');
			for (c = 1; c <= hash; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
        else
		_putchar('\n');
}
