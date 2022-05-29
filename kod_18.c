void passingAddressOfConstants(const int *num1, int *num2)
{
    *num2 = *num1;
}

int main()
{
    const int limit = 100;
    int result = 5;
    passingAddressOfConstants(&limit, &result);
    // passingAddressOfConstants(&23, &23); // / żle
            passingAddressOfConstants(&limit, &limit); // żle 
            return 0;
}

// void passingAddressOfConstants(const int *num1, int *num2)
// {
//     *num1 = 100;
//     *num2 = 200;
// }