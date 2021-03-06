/**
    模板在实参数推断的过程中，编译器根据给出的实际参数，推断模板参数
    这些模板实参实例化出的版本和应该是和我们的函数调用最匹配的版本
    模板实参推断的过程中还发生了两种可能的类型转换

    1.对于非const类型的对象的引用（指针）转换为const类型的引用（指针）
    2.对于非引用类型型参，可以进行数组或者函数类型的实参到指针的转换
    
*/
