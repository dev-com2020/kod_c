void swap(int num1, int num2)
{
    int tmp;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main()
{
    int n1 = 5;
    int n2 = 10;
    swap(n1, n2);
    return 0;
}