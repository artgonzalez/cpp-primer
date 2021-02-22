/*
Define inline and constexpr functions in header
*/

inline int in_calculate(int num1, int num2, int num3)
{
    return num1 * num2 +  num3;
}

constexpr int get_num_const_expr(const int num)
{
    return 5 * num;
}