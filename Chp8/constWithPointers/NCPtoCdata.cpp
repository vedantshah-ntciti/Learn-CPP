void f(const int *);

int main()
{
    int y = 0;
    f(&y);
}

void f(const int*xPtr)
{
    *xPtr = 100;
}