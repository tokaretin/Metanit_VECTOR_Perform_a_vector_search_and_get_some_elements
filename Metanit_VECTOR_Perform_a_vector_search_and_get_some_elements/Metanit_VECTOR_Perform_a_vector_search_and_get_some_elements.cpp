// Metanit_VECTOR_Perform_a_vector_search_and_get_some_elements.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = { 1, 3, 5, 6, 7, 10 };

    std::cout << "Использование цикла for. В векторе содержится: ";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << '\n';

    std::cout << "Использование цикла for-each. В векторе содержится: ";
    for (int n : vec)
    {
        std::cout << n << ", ";
    }
    std::cout << '\n';

    std::cout << "Использование функции vec.front() (первый элемент): " << vec.front() << '\n';
    std::cout << "Использование функции vec.back(): (второй элемент): " << vec.back()<< '\n';

    // Изменяем значения вектора
    vec[0] = 999; 
    std::cout << "Использование цикла for. В векторе содержится: ";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << '\n';




    std::vector<int> vecTwo = { 1, 3, 5, 6, 7, 10 };
    for (int i = 0; i < vecTwo.size(); i++)
    {
        std::cout << vecTwo[i] << ", ";
    }
    std::cout << '\n';
    std::vector<int>::iterator iter = vecTwo.begin();
    std::cout << "Итератор вектора: " << *iter << '\n';
    std::cout << "Итератор вектора: " << *++iter << '\n';
    
}
